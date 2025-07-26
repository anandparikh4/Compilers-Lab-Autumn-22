// Conditional operators

int printInt(int n);
int readInt(int *eP);
int printStr(char *s);

int main(){

    printStr("\nTest file #6\n");

    int one,zero;
    one = 1;
    zero = 0;

    if(one > zero) printStr("\n> op passed");
    else printStr("\n> op failed");

    if(zero < one) printStr("\n< op passed");
    else printStr("\n< op failed");

    if(one >= one && one >= zero) printStr("\n>= op passed");
    else printStr("\n> op failed");

    if(zero <= one && zero <= zero) printStr("\n<= op passed");
    else printStr("\n< op failed");

    if(one == one) printStr("\n== op passed");
    else printStr("\n== op failed");

    if(one != zero) printStr("\n!= op passed");
    else printStr("\n!= op failed");
    
    printStr("\n");

    return 0;
}