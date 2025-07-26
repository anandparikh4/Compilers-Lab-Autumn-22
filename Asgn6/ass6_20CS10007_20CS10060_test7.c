// Flow of Control statements, Scope rules

int printInt(int n);
int readInt(int *eP);
int printStr(char *s);

int main(){

    printStr("\nTest file #7\n");
    int a = 0;
    int b = 1;
    {
        if(a == 0){
            if(a == 1){
                printStr("\nFailed\n");
                return 0;
            }
            else if(b == 0){
                printStr("\nFailed\n");
                return 0;
            }
            else{
                if(a < b){
                    if(a != 0){
                        printStr("\nFailed\n");
                        return 0;
                    }
                    else if(b == 1){
                        printStr("\nReached correct point\n");
                    }
                    else{
                        printStr("\nFailed\n");
                        return 0;
                    }
                }
                else{
                    printStr("\nFailed\n");
                    return 0;
                }
            }
        }

        else{
            printStr("\nFailed\n");
            return 0;
        }
        printStr("Passed\n");
    }

    return 0;
}