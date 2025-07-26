#include "ass6_20CS10060_translator.h"


activation_record *AR;
ofstream asm_file;

map<int, string> mp1 = { {1, "dil"}, {4, "edi"}, {8, "rdi"} },mp2 = { {1, "sil"}, {4, "esi"}, {8, "rsi"} };
map<int, string> mp3 = { {1, "dl"}, {4, "edx"}, {8, "rdx"} },mp4 = { {1, "cl"}, {4, "ecx"}, {8, "rcx"} };
map<int, map<int, string>> map_to_map = { {1, mp1}, {2, mp2}, {3, mp3}, {4, mp4} };
void store(string,int);
void load(string,int);
int ascii_val(string);
string stack_pos(string);

void translate(string &sourcecodefile,string &targetcodefile){
	map<int, string> mp_label;
    int quad_cnt = 1, label_cnt = 0;
    for(auto &it:quads) {
        if(it->op == "label")mp_label[quad_cnt] = ".LFB" + to_string(label_cnt);
		else if(it->op == "labelend") {
            mp_label[quad_cnt] = ".LFE" + to_string(label_cnt);
            label_cnt++;
        }
        quad_cnt++;
    }
    for(auto &it:quads) {
        if(it->op == "<" || it->op == ">" || it->op == "<=" || it->op == ">="|| it->op == "==" || it->op == "!=" || it->op == "goto"){
            int loc = stoi(it->result);
            if(mp_label.find(loc) == mp_label.end()) {
                mp_label[loc] = ".L" + to_string(label_cnt);
                label_cnt++;
            }
        }
    }

	asm_file.open(targetcodefile);
    asm_file << "\t" << ".file" << ("\t\"" + sourcecodefile + "\"") << endl;

    asm_file << endl;

    if(stringliterals.size() > 0) {
        asm_file << "\t.section\t.rodata" << endl;
        int i = 0;
        for(auto &s : stringliterals){
			asm_file << ".LC" << i << ":" << endl << "\t.string\t" << s << endl;
			i++;
		}
    }

    for(auto &it:gblST->symbols) {
        if(it.second.category == "global" && it.second.val.empty()) {
            asm_file << "\t.comm\t" << it.first << "," << it.second.size << "," << it.second.size << endl;
        }
    }

    
    string gblstr,func_end;
    bool text_space = false;
	int gblint, gblchar;
    stack <string> parameters;
    quad_cnt = 1;
    for(auto &it:quads){
        if(it->op == "label"){
            if(text_space == false){
                asm_file << "\t.text" << endl;
                text_space = true;
            }
            currST = gblST->lookup(it->result)->nested_symtab;
            AR = currST->activationRecord;
            
            func_end = mp_label[quad_cnt];
            func_end[3] = 'E';

            asm_file << "\t" << ".globl " << it->result << endl;
            asm_file << "\t" << ".type " << it->result << ", @function" << endl;
            asm_file << it->result << ":" << endl;
            asm_file << mp_label[quad_cnt] << ":" << endl;
            asm_file << "\t" << ".cfi_startproc " << endl;
            asm_file << "\t" << "pushq " << "%rbp" << endl;
            asm_file << "\t.cfi_def_cfa_offset 16 " << endl;
            asm_file << "\t.cfi_offset 6, -16 " << endl;
            asm_file << "\t" << "movq " << "%rsp, %rbp" << endl;
            asm_file << "\t.cfi_def_cfa_register 6 " << endl;
            asm_file << "\t" << "subq " << "$" << -AR->net_displacement << ", %rsp" << endl;

            int param_cnt = 1;
            for(auto it:currST->parameter_list) {
                load(it, param_cnt);
                param_cnt++;
            }
        } 
		else if(it->op == "labelend"){
			text_space = false;
            asm_file << mp_label[quad_cnt] << ":" << endl;
            asm_file << "\t" << "movq " << "%rbp, %rsp" << endl;
            asm_file << "\t" << "popq " << "%rbp" << endl;
            asm_file << "\t" << ".cfi_def_cfa 7, 8" << endl;
            asm_file << "\t" << "ret " << endl;
            asm_file << "\t" << ".cfi_endproc " << endl;
            asm_file << "\t" << ".size " << it->result << ", .-" << it->result << endl;
        } 
		else{
            if(text_space){
                string result = it->result,op = it->op,arg1 = it->arg1,arg2 = it->arg2;
                if(mp_label.count(quad_cnt))asm_file << mp_label[quad_cnt] << ":" << endl;
                if(op == "call") {
                    int paramCount = stoi(arg2);
                    while (paramCount) {
                        store(parameters.top(), paramCount);
                        parameters.pop();
                        paramCount--;
                    }
                    
                    asm_file << "\t" << "call " << arg1 << endl;
                    // check the size of result in the current table and apply the corresponding move from appropriate return register to result
                    int sz = currST->lookup(result)->size;
                    if(sz == 1) {
                        asm_file << "\t" << "movb " << "%al, " << stack_pos(result) << endl;
                    } else if(sz == 4) {
                        asm_file << "\t" << "movl " << "%eax, " << stack_pos(result) << endl;
                    } else if(sz == 8) {
                        asm_file << "\t" << "movq " << "%rax, " << stack_pos(result) << endl;
                    }
                }
				else if(op == "param"){
                    parameters.push(result);
                } 
				else if(op == "return") {
                    if(!result.empty()){
                        int size = currST->lookup(result)->size;
                        if(size == 1){
                            asm_file << "\t" << "movb " << stack_pos(result) << ", %al" << endl;
                        } 
						else if(size == 4){
                            asm_file << "\t" << "movl " << stack_pos(result) << ", %eax" << endl;
                        }
						else if(size == 8){
                            asm_file << "\t" << "movq " << stack_pos(result) << ", %rax" << endl;
                        }
                    }
                    if(quads[quad_cnt]->op != "labelend") // if the next quad is not a labelend, then we need to jump to the function end
                        asm_file << "\t" << "jmp " << func_end << endl;
                }
				else if(op == "="){
                    if(isdigit(arg1[0]))asm_file << "\t" << "movl " << "$" << arg1 << ", " << stack_pos(result) << endl;
					else if(arg1[0] == '\'')asm_file << "\t" << "movb " << "$" << ascii_val(arg1) << ", " << stack_pos(result) << endl;
					else{
                        int size = currST->lookup(arg1)->size;
                        if(size == 1){
                            asm_file << "\t" << "movb " << stack_pos(arg1) << ", %al" << endl;
                            asm_file << "\t" << "movb " << "%al, " << stack_pos(result) << endl;
                        } 
						else if(size == 4){
                            asm_file << "\t" << "movl " << stack_pos(arg1) << ", %eax" << endl;
                            asm_file << "\t" << "movl " << "%eax, " << stack_pos(result) << endl;
                        } 
						else if(size == 8){
                            asm_file << "\t" << "movq " << stack_pos(arg1) << ", %rax" << endl;
                            asm_file << "\t" << "movq " << "%rax, " << stack_pos(result) << endl;
                        }
                    }
                } 
				else if(op == "==" or op == "!=" or op == "<" or op == "<=" or op == ">" or op == ">="){
                    int size = currST->lookup(arg1)->size;
                    string move_instr, cmp_instr, dest_reg;
                    if(size == 1){
                        move_instr = "movb ";
                        cmp_instr = "cmpb ";
                        dest_reg = "%al ";
                    } 
					else if(size == 4) {
                        move_instr = "movl ";
                        cmp_instr = "cmpl ";
                        dest_reg = "%eax ";
                    } 
					else if(size == 8) {
                        move_instr = "movq ";
                        cmp_instr = "cmpq ";
                        dest_reg = "%rax ";
                    }
                    asm_file << "\t" << move_instr << stack_pos(arg2) << ", " << dest_reg << endl;
                    asm_file << "\t" << cmp_instr << dest_reg << ", " << stack_pos(arg1) << endl;
                    string j_instr;
					if(op == "<")j_instr = "jl ";
                    else if(op == "<=")j_instr = "jle ";
                    else if(op == ">")j_instr = "jg ";
                    else if(op == ">=")j_instr = "jge ";
					else if(op == "==")j_instr = "je ";
                    else if(op == "!=")j_instr = "jne ";
					asm_file << "\t" << j_instr << mp_label[stoi(result)] << endl;;
                }
				else if(op == "+" || op == "-"){
					string instr1 = (op=="+")? "incl ":"decl ";
                    string instr2 = (op=="+")? "addl ":"subl ";
					if(result == arg1)asm_file << "\t" << instr1 << stack_pos(arg1) << endl;
                    else{
                        asm_file << "\t" << "movl " << stack_pos(arg1) << ", " << "%eax" << endl;
                        asm_file << "\t" << instr2 << stack_pos(arg2) << ", " << "%eax" << endl;
                        asm_file << "\t" << "movl " << "%eax" << ", " << stack_pos(result) << endl;
                    }
                }
				else if(op == "*") {
                    asm_file << "\t" << "movl " << stack_pos(arg1) << ", " << "%eax" << endl;
                    if(isdigit(arg2[0]))asm_file << "\t" << "imull " << "$" + stack_pos(arg2) << ", " << "%eax" << endl;
					else asm_file << "\t" << "imull " << stack_pos(arg2) << ", " << "%eax" << endl;
                    asm_file << "\t" << "movl " << "%eax" << ", " << stack_pos(result) << endl;
                }
				else if(op == "/") {
                    asm_file << "\t" << "movl " << stack_pos(arg1) << ", " << "%eax" << endl;
                    asm_file << "\t" << "cdq " << endl;
                    asm_file << "\t" << "idivl " << stack_pos(arg2) << endl;
                    asm_file << "\t" << "movl " << "%eax" << ", " << stack_pos(result) << endl;
                }
				else if(op == "%") {
                    asm_file << "\t" << "movl " << stack_pos(arg1) << ", " << "%eax" << endl;
                    asm_file << "\t" << "cdq " << endl;
                    asm_file << "\t" << "idivl " << stack_pos(arg2) << endl;
                    asm_file << "\t" << "movl " << "%edx" << ", " << stack_pos(result) << endl;
                }
				else if(op == "=[]") {
                    sym *symbol = currST->lookup(arg1);
                    if(symbol->category == "parameter") {
                        asm_file << "\t" << "movl " << stack_pos(arg2) << ", " << "%eax" << endl;
                        asm_file << "\t" << "cltq " << endl;
                        asm_file << "\t" << "addq " << stack_pos(arg1) << ", " << "%rax" << endl;
                        asm_file << "\t" << "movl " << "(%rax)" << ", " << "%eax" << endl;
                        asm_file << "\t" << "movl " << "%eax" << ", " << stack_pos(result) << endl;
                    } 
					else{
                        asm_file << "\t" << "movl " << stack_pos(arg2) << ", " << "%eax" << endl;
                        asm_file << "\t" << "cltq " << endl;
                        asm_file << "\t" << "movl " << AR->disp_map[arg1] << "(%rbp, %rax, 1)" << ", " << "%eax" << endl;
                        asm_file << "\t" << "movl " << "%eax" << ", " << stack_pos(result) << endl;
                    }
                }
				else if(op == "[]=") {
                    sym *symbol = currST->lookup(result);
                    if(symbol->category == "parameter") {
                        asm_file << "\t" << "movl " << stack_pos(arg1) << ", " << "%eax" << endl;
                        asm_file << "\t" << "cltq " << endl;
                        asm_file << "\t" << "addq " << stack_pos(result) << ", " << "%rax" << endl;
                        asm_file << "\t" << "movl " << stack_pos(arg2) << ", " << "%ebx" << endl;
                        asm_file << "\t" << "movl " << "%ebx" << ", " << "(%rax)" << endl;
                    }
					else{
                        asm_file << "\t" << "movl " << stack_pos(arg1) << ", " << "%eax" << endl;
                        asm_file << "\t" << "cltq " << endl;
                        asm_file << "\t" << "movl " << stack_pos(arg2) << ", " << "%ebx" << endl;
                        asm_file << "\t" << "movl " << "%ebx" << ", " << AR->disp_map[result] << "(%rbp, %rax, 1)" << endl;
                    }
                } 
				else if(op == "=&") {
                    asm_file << "\t" << "leaq " << stack_pos(arg1) << ", " << "%rax" << endl;
                    asm_file << "\t" << "movq " << "%rax" << ", " << stack_pos(result) << endl;
                } 
				else if(op == "=*") {
                    asm_file << "\t" << "movq " << stack_pos(arg1) << ", " << "%rax" << endl;
                    asm_file << "\t" << "movl " << "(%rax)" << ", " << "%eax" << endl;
                    asm_file << "\t" << "movl " << "%eax" << ", " << stack_pos(result) << endl;
                } 
				else if(op == "=-") {
                    asm_file << "\t" << "movl " << stack_pos(arg1) << ", " << "%eax" << endl;
                    asm_file << "\t" << "negl " << "%eax" << endl;
                    asm_file << "\t" << "movl " << "%eax" << ", " << stack_pos(result) << endl;
                } 
				else if(op == "*=") {
                    asm_file << "\t" << "movl " << stack_pos(arg1) << ", " << "%eax" << endl;
                    asm_file << "\t" << "movq " << stack_pos(result) << ", " << "%rbx" << endl;
                    asm_file << "\t" << "movl " << "%eax" << ", " << "(%rbx)" << endl;
                }
				else if(op == "=str"){
                    asm_file << "\t" << "movq " << "$.LC" << arg1 << ", " << stack_pos(result) << endl;
                } 
				
				else if(op == "goto")asm_file << "\t" << "jmp " << mp_label[stoi(result)] << endl;
            } 
			else{
                curr_sym = gblST->lookup(it->result);
                if(curr_sym->category == "temporary") {
                    if(curr_sym->type->type == "int")gblint = stoi(it->arg1);
					else if(curr_sym->type->type == "char")gblchar = ascii_val(it->arg1);
					else if(curr_sym->type->type == "pointer")gblstr = ".LC" + it->arg1;
                }
				else{
					if(curr_sym->type->type == "pointer") {
                        asm_file << "\t" << ".section	.data.rel.local" << endl;
                        asm_file << "\t" << ".align " << 8 << endl;
                        asm_file << "\t" << ".type " << curr_sym->name << ", @object" << endl;
                        asm_file << "\t" << ".size " << curr_sym->name << ", 8" << endl;
                        asm_file << curr_sym->name << ":" << endl;
                        asm_file << "\t" << ".quad " << gblstr << endl;
                    }
                    else if(curr_sym->type->type == "int") {
                        asm_file << "\t" << ".globl " << curr_sym->name << endl;
                        asm_file << "\t" << ".data " << endl;
                        asm_file << "\t" << ".align " << 4 << endl;
                        asm_file << "\t" << ".type " << curr_sym->name << ", @object" << endl;
                        asm_file << "\t" << ".size " << curr_sym->name << ", 4" << endl;
                        asm_file << curr_sym->name << ":" << endl;
                        asm_file << "\t" << ".long " << gblint << endl;
                    } 
					else if(curr_sym->type->type == "char") {
                        asm_file << "\t" << ".globl " << curr_sym->name << endl;
                        asm_file << "\t" << ".data "  << endl;
                        asm_file << "\t" << ".type " << curr_sym->name << ", @object" << endl;
                        asm_file << "\t" << ".size " << curr_sym->name << ", 1" << endl;
                        asm_file << curr_sym->name << ":" << endl;
                        asm_file << "\t" << ".byte " << gblchar << endl;
                    }
                }
            }
        }
        quad_cnt++;
    }
}

int main(int argc, char const *argv[]) {
    string basename = string(argv[1]);
    
    string sourcecodefile = basename + ".c" , targetcodefile = basename + ".s";

    table_count = temp_count = 0;
    gblST = new sym_table("global");
    currST = gblST;

    yyin = fopen(sourcecodefile.c_str(), "r");
    yyparse();

    gblST->update();
    
    print(gblST);
    new_backpatch();
    
    int pc = 1;
    for(auto &it:quads){
        printf("%-4d: ",pc);
        print(it);
        pc++;
    }

    translate(sourcecodefile,targetcodefile);

    return 0;
}

// stack to register
void store(string paramName, int param_cnt) {
    sym *symbol = currST->lookup(paramName);
    int size = symbol->size;
    string type = symbol->type->type;
    string instr = "";
    if(type == "array"){
        instr = "leaq ";
        size = 8;
    }
	else if (size == 1)instr = "movb ";
	else if (size == 4)instr = "movl ";
	else if (size == 8)instr = "movq ";
    asm_file << "\t" << instr << stack_pos(paramName) << ", " << "%" << map_to_map[param_cnt][size] << endl;
}


int ascii_val(string s){
    map<char, int> mp = {{'0', 0}, {'a', 7}, {'b', 8}, {'t', 9}, {'n', 10},{'v', 11}, {'f', 12} ,{'r', 13}};
	if(s.length() == 3){
        return (int)s[1];
    }
    else {
        if(mp.find(s[2]) != mp.end())return mp[s[2]];
        else return (int)s[2];
    }
}

string stack_pos(string paramName) {
    if(AR->disp_map.count(paramName))return to_string(AR->disp_map[paramName]) + "(%rbp)";
    return paramName;
}

// register to stack
void load(string paramName, int param_cnt) {
    sym *symbol = currST->lookup(paramName);
    int size = symbol->size;
    string type = symbol->type->type;
    string instr = "";
    if(type == "array") {
        instr = "movq ";
        size = 8;
    }
	else if (size == 1)instr = "movb ";
    else if (size == 4)instr = "movl ";
    else if (size == 8)instr = "movq ";
    asm_file << "\t" << instr << "%" << map_to_map[param_cnt][size] << ", " << stack_pos(paramName) << endl;
}