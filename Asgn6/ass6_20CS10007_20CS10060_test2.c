// Recursion , Global variables and Input variables

int printInt(int n);
int readInt(int *eP);
int printStr(char *s);

int n;      // global int
char * str = "\nTest file #2\n";      // global string

void init(int * fact){

    int i;
    for(i=0;i<=10;i++){
        fact[i] = -1;
    }

    return;
}

int factorial(int * fact,int n){       // recursive factorial through memoization
    if(n == 0){
        fact[n] = 1;
        return fact[n];
    }
    if(fact[n] != -1) return fact[n];

    fact[n] = n * factorial(fact,n-1);

    return fact[n];
}

int main(){

    int fact[11];
    init(fact);
    printStr(str);

    int check;
    printStr("\nEnter a positive integer 'n' less than 10: ");    
    int n = readInt(&check);

    
    if(check == 0){
        printStr("\nRead Int failed"); 
        return 0;
    }
    else if(n > 10 || n < 0){
        printStr("\nOverflow. Please enter an integer <= 10");
    }
    //printStr("\n");
    printInt(n);
    printStr("!=");
    printInt(factorial(fact,n));

    printStr("\n");

    return 0;
}