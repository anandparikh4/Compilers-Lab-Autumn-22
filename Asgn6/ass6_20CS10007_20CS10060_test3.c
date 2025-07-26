// Arithmetic operators

int printInt(int n);
int readInt(int *eP);
int printStr(char *s);

int main(){

    printStr("\nTest file #3\n");
    int a = 2;
    int b = 36;
    int c = 5;
    a = 3;

    // Basic Ops
    int x1 = a+b;
    int x2 = b-c;
    int x3 = b/c;
    int x4 = a*c;
    int x5 = a--;
    int x6 = ++c;
    
    // Compound Ops
    int y1 = (c--) + (++a);
    int y2 = (-a + b - c)%x1;
    int y3 = (a / c - 52) + 72/b + 36%(b-a*a);
    int y4 = a*a + (y1-x2) * (x4 - c) + x3 / (c-b) ;

    // Print
    printStr("\na = "); printInt(a);
    printStr("\nb = "); printInt(b);
    printStr("\nc = "); printInt(c);
    printStr("\nx1 = "); printInt(x1);
    printStr("\nx2 = "); printInt(x2);
    printStr("\nx3 = "); printInt(x3);
    printStr("\nx4 = "); printInt(x4);
    printStr("\nx5 = "); printInt(x5);
    printStr("\nx6 = "); printInt(x6);
    printStr("\ny1 = "); printInt(y1);
    printStr("\ny2 = "); printInt(y2);
    printStr("\ny3 = "); printInt(y3);
    printStr("\ny4 = "); printInt(y4);
    printStr("\n");

    return 0;
}