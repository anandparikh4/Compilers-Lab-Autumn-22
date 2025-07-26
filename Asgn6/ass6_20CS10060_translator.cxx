#include  "ass6_20CS10060_translator.h"
#include "type_size.h"
sym * curr_sym;                  // current symbol
string curr_type;                // current type
vector<quad *> quads;           // array of quads being updated dynamically      
int table_count;                 // total number of symbol tables generated till now
int temp_count;                  // total number of temporary variables generated till now
sym_table *currST;              // pointer to current symbol table
sym_table *gblST;               // pointer to global symbol table
vector <string> stringliterals;

sym_type::sym_type(string _type, sym_type * _array_type,int _width):
type(_type), array_type(_array_type), width(_width) {}

int get_size(sym_type *_type){
	if(_type->type== "int")return INT_SIZE;
	else if(_type->type== "float")return FLOAT_SIZE;
	else if(_type->type=="char")return CHAR_SIZE;
	else if(_type->type=="pointer")return POINTER_SIZE;
	else if(_type->type=="array"){
		return _type->width * (get_size(_type->array_type));
	}	
	return 0;
}

string format_type(sym_type *t){
	if(t->type == "array"){
		return "array(" + to_string(t->width) + "," + format_type(t->array_type) + ")"; 
	}
	else if(t->type == "pointer"){
		return format_type(t->array_type) + "*"; 
	}
	return t->type;
}
 
sym::sym(string _name, string t,string _val):
name(_name), val(_val), offset(0),nested_symtab(NULL),type(new sym_type(t)){
	size = get_size(this->type);
}

sym* sym::update(sym_type *t){
	this->type = t;
	this->size = get_size(t);
	return this;
}

sym* sym::convert(string new_type){
	string curr_type = this->type->type;
	
	if(curr_type == new_type)return this;

	sym* new_sym = gentemp(new_type);

	if(curr_type == "int"){
		if(new_type == "char"){
			emit("=", new_sym->name, "Int2Char(" + this->name + ")");
		}
		else if(new_type == "float"){
			emit("=", new_sym->name, "Int2Float(" + this->name + ")");			
		}
	}

	else if(curr_type == "float"){
		if(new_type == "char"){
			emit("=", new_sym->name, "Float2Char(" + this->name + ")");
		}
		else if(new_type == "int"){
			emit("=", new_sym->name, "Float2Int(" + this->name + ")");			
		}
	}

	else if(curr_type == "char"){
		if(new_type == "int"){
			emit("=", new_sym->name, "Char2Int(" + this->name + ")");
		}
		else if(new_type == "float"){
			emit("=", new_sym->name, "Char2Float(" + this->name + ")");			
		}
	}

	return new_sym;
}

sym_table :: sym_table(string _name, sym_table * _parent):
name(_name), parent(_parent){}


sym* sym_table::lookup(string id){
	auto it = this->symbols.find(id);
	sym * p = NULL;				
	if(it!=this->symbols.end())return &(it->second);
	else{
		
		if(this->parent!=NULL)p = this->parent->lookup(id);
		if (this == currST && !p)
		{	
			p = new sym(id);
			p->category = "local";
			if(currST == gblST){
				p->category = "global";
			}
			this->symbols.insert({id, *p});
			return &((this)->symbols.find(id)->second);
		}
	}
	return p;
}

void sym_table::update(){
	int offset_val = 0;
	vector<sym_table *> to_visit;
	for (auto &it : symbols){
        it.second.offset = offset_val;
		offset_val += it.second.size;
		if(it.second.nested_symtab)to_visit.push_back(it.second.nested_symtab);
    }

	activationRecord = new activation_record();
	
	for (auto it : this->symbols){
        if(it.second.category == "parameter"){
            if(it.second.size != 0){
                activationRecord->net_displacement -= it.second.size;
                activationRecord->disp_map[it.second.name] = activationRecord->net_displacement;
            }
        }
    }
    
	for (auto it : this->symbols){
        if((it.second.category == "local" && it.second.name != "return") || it.second.category == "temporary"){
            if(it.second.size != 0){
                activationRecord->net_displacement -= it.second.size;
                activationRecord->disp_map[it.second.name] = activationRecord->net_displacement;
            }
        }
    }

    for (auto &it : to_visit)it->update();
}

void print(sym_table *table){
	if(table==NULL)return;
	for(int i=0;i<130;i++)cout << "*";
	cout << endl;
    cout << "Current Table: " << table->name << endl;
	cout << "Parent Table: "<< ((table->parent)?table->parent->name:"NULL") << "\n";
	printf("%-15s %-50s %-15s %-15s %-15s %-15s %-15s\n","Name", "Type", "Category", "Initial Value", "Size", "Offset","Nested Table");
    for(int i=0;i<130;i++)cout << "*";
	cout << endl;
	list <sym_table*> visit_arr;
	for (auto &it:table->symbols){
		auto &jt = it.second;
		string x = format_type(jt.type);
		string cat = jt.category;
		string nested_table = (jt.nested_symtab!=NULL)? jt.nested_symtab->name:"NULL";
		printf("%-15s %-50s %-15s %-15s %-15d %-15d %-15s\n",it.first.c_str(), x.c_str(),cat.c_str(), jt.val.c_str(), jt.size, jt.offset, nested_table.c_str());		
		for(int i=0;i<130;i++)cout << "-";
		cout << endl;
		if(nested_table!="NULL"){
			visit_arr.push_back(jt.nested_symtab);
		}
	}
	cout << endl << endl;
	for(auto &it:visit_arr)print(it);
}

quad :: quad(string _result, string _arg1, string _op, string _arg2):
result(_result), arg1(_arg1), arg2(_arg2), op(_op){}

void print(quad *qd){
	if (qd->op == "=") cout << "\t" << qd->result << " = " << qd->arg1 << endl;
    else if (qd->op == "call")cout << "\t" << qd->result << " = " << qd->op << " " << qd->arg1 << "," << qd->arg2 << endl;    
    else if (qd->op == "label")cout << "Function start: " << qd->result << endl;
	else if(qd->op == "labelend")cout << "Function end: " << qd->result << endl;
	else if (qd->op =="param" || qd->op == "goto" || qd->op =="return")cout << "\t" << qd->op << " " << qd->result << endl;
    else if (qd->op == "[]=")cout << "\t" << qd->result << "[" << qd->arg1 << "] = " << qd->arg2 << endl;
    else if (qd->op == "=[]")cout << "\t" << qd->result << " = " << qd->arg1 << "[" << qd->arg2 << "]" << endl;
    else if (qd->op == "+" || qd->op == "&" || qd->op == "<<" || qd->op == ">>" || qd->op == "-" || qd->op == "*" || qd->op == "/" || qd->op == "%" || qd->op == "|" || qd->op == "^")
		cout << "\t" << qd->result << " = " << qd->arg1 << " " << qd->op << " " << qd->arg2 << endl;
	else if (qd->op == "<" || qd->op == ">" || qd->op == "<=" || qd->op == ">=" || qd->op == "==" || qd->op == "!=" )
		cout << "\tif " << qd->arg1 << " " << qd->op << " " << qd->arg2 << " goto " << qd->result << endl;
    else if (qd->op == "=*" || qd->op == "=-" || qd->op == "=&")
		cout << "\t" << qd->result << " = " << qd->op[1] << qd->arg1 << endl; 
    else if(qd->op == "*=") cout << "\t*" << qd->result << " = " << qd->arg1 << endl;
    else if (qd->op =="!" || qd->op == "~") cout << "\t" << qd->result << " = " << qd->op << qd->arg1 << endl;
    else if (qd->op == "=str")cout << "\t" << qd->result << " = " << stringliterals[stoi(qd->arg1)] << endl;
	else{
        cout << qd->op << qd->arg1 << qd->arg2 << qd->result << endl;
        cout << "Operator not found\n";
    }
}

void expression::conv2int(){
	if(type != "boolean")return;
	loc = gentemp("int");
	backpatch(truelist,next_instr());
	emit("=",loc->name,"true");
	emit("goto",to_string(next_instr()+1));
	backpatch(falselist, next_instr());
	emit("=",loc->name,"false");
	return;
}

void expression::conv2bool(){
	if(type == "boolean")return;
	falselist = makelist(next_instr());
	emit("==","",loc->name, "0");
	truelist = makelist(next_instr());
	emit("goto","");
}

activation_record::activation_record(): 
net_displacement(0), disp_map(map<string, int>())
{}

void backpatch(list<int>& dangling_exits,int addr){      // check pass by reference
    for(auto it : dangling_exits){
        quads[it-1]->result = to_string(addr);
    }
}

void new_backpatch(){
	int pos = quads.size(),prev_exit = -1;
    for(auto it = quads.rbegin(); it != quads.rend(); it++){
        string op = (*it)->op;
        if(op == "<" || op == ">" || op == "<=" || op == ">=" || op == "==" || op == "!=" || op == "goto"){
            if((*it)->result.empty())(*it)->result = to_string(prev_exit);
        }
		else if(op == "labelend")prev_exit = pos;
        pos-=1;
    }
}

list<int> makelist(int x){
    return list<int>{x};
}

list<int> merge(list<int> l1,list<int> l2){
    l1.merge(l2);
    return l1;
}

int next_instr(){
    return quads.size()+1;
}

sym* gentemp(string _type,string _val){
    temp_count++;
    sym *t = new sym("t" + to_string(temp_count),_type,_val);
    t->category = "temporary";
	currST->symbols.insert(make_pair(t->name,*t));
    return t;
}

bool check_type(sym *& s1,sym *&s2){
    sym_type* t1 = s1->type;
    sym_type* t2 = s2->type;

	bool f = compare_types(t1,t2);

	if(f) return f;

	if((t1->type == "int" || t1->type == "float" || t1->type == "char")&&(t2->type == "int" || t2->type == "float" || t2->type == "char")){
		if(t1->type == "float" || t2->type == "float"){
			s1 = s1->convert("float");
			s2 = s2->convert("float");
			return true;
		}
		if(t1->type == "int" || t2->type == "int"){
			s1 = s1->convert("float");
			s2 = s2->convert("float");
			return true;
		}
	}

	return false;
}

bool compare_types(sym_type *a, sym_type *b){
	if(a == NULL && b == NULL) return true;
	else if(a == NULL || b == NULL) return false;
	else if(a->type != b->type) return false;
	return compare_types(a->array_type , b->array_type);
}

void emit(string op,string result, string arg1, string arg2){
	quad * new_quad = new quad(result, arg1,op,arg2);
	quads.push_back(new_quad);
	return;
}

void emit(string op,string result, int arg1, string arg2){
	quad * new_quad = new quad(result, to_string(arg1),op,arg2);
	quads.push_back(new_quad);
	return;
}

// void emit(string op,string result, float arg1, string arg2){
// 	quad * new_quad = new quad(result, to_string(arg1),op,arg2);
// 	quads.push_back(new_quad);
// 	return;
// }

void change_table(sym_table *new_table){
	currST = new_table;
}
