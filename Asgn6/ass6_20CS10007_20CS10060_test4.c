// Arrays

int printInt(int n);
int readInt(int *eP);
int printStr(char *s);

// factorial

void factorial(int * fact, int n){
    int i = 0;
    fact[0] = 1;
    for(i=1;i<n;i++) fact[i] = fact[i-1] * i;
}

int main(){

    printStr("\nTest file #4\n");
    int fact[11];

    printStr("\nPrinting factorials upto 10:\n");
    factorial(fact,11);

    int i;
    for(i=0;i<=10;i++){
        printInt(fact[i]);
        if(i<10) printStr(",");
    }
    printStr("\n");
    
    return 0;
}