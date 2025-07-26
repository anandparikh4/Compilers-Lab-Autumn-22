// Loops

int printInt(int n);
int readInt(int *eP);
int printStr(char *s);

int main(){
    printStr("\nTest file #5\n");

    // check if FOR and WHILE loops run desired number of times and in the intended format
    int n = 0;
    int i,j;
    for(i=0;i<10;i++){
        int j=0;
        while(j<10){
            printInt(n);
            n++; j++;
            printStr(" ");  
        }
        printStr("\n");
    }

    if(n != 100) printStr("\nFor loop failed");
    else printStr("\nFor loop passed");

    // check DO WHILE behaviour

    n = 0;      // start with n = 0 to check if first iteration runs
    do{
        printStr("\nEnter any integer (0 terminates the process): ");
        int check;
        n = readInt(&check);
        printStr("\nYou entered: ");
        printInt(n);
        if(check == 0){
            printStr("ReadInt failed");
            return 0;
        }
    }while(n!=0);

    printStr("\n");

    return 0;
}