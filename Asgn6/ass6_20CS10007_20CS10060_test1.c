// Function calls

int printInt(int n);
int readInt(int *eP);
int printStr(char *s);

int return_int(int a){
    printStr("\nReturning integer: ");
    printInt(a);
    return a;
}

char return_char(char a){
    printStr("\nReturning character: ");
    printInt(a);    // print ascii value
    return a;
}

int* return_int_star(int* a){
    printStr("\nReturning integer pointer: ");
    printInt(*a);
    return a;
}

char* return_char_star(char* a,int arr_size){
    printStr("\nReturning character pointer: ");
    int i=0;
    for(i=0;i<arr_size;i++){
        printStr(" ");
        printInt(a[i]);
    }
    return a;
}

int main(){

    printStr("\nTest file #1\n");
    int n = 1;
    int *np = &n;
    char c = 'x';
    char *nc = &c;

    char character_array[26];

    int i;
    for(i=0;i<26;i++){
        character_array[i] = 'a';
        printStr(" ");
        printInt(character_array[i]);
    }
    i = 0;

    int returned_int = return_int(n);
    if(returned_int == n) printStr("\nSuccess");
    else printStr("\nFailure");

    int* returned_int_star = return_int_star(np);
    if(returned_int_star == np) printStr("\nSuccess");
    else printStr("\nFailure");

    char returned_char = return_char(c);
    if(returned_char == c) printStr("\nSuccess");
    else printStr("\nFailure");

    char* returned_char_star = return_char_star(nc,0);
    if(returned_char_star == nc) printStr("\nSuccess");
    else printStr("\nFailure");

    char* returned_char_array = return_char_star(character_array,26);
    if(returned_char_array == character_array) printStr("\nSuccess");
    else printStr("\nFailure");
    printStr("\n");
    
    return 0;
}