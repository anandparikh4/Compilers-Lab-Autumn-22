#include "myl.h"

#define BUFF_SIZE 21
#define MAX_DEC_LEN 8
#define INT_MAX __INT32_MAX__
#define INT_MIN (-INT_MAX - 1)

//this function prints the string str to stdout
int printStr(char *str){
	int len=0;		//len stores the length of str
	while(str[len]!='\0')len++;	// in this while loop we calculate len
	int num_bytes = len+1;
	//number of bytes we have to print will be one more than length of str because str is terminated by '\0'
	
	//below inline assembly code prints str to stdout
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1,%%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(str), "d"(num_bytes)
	);	
	
	return len;	// we return the number of characters printed (excluding '\0')
}

//below function takes an integer n as input and prints it to stdout
int printInt(int n){
	// we first store the sign and digits of n in a character array and then print it

	char buff_arr[BUFF_SIZE]; 	// character array to store n
	int i=0,j,k,num_char = 0;
	long long nl = n;

	if(nl==0){
		buff_arr[i++] = '0';	// if n=0 we store the character 0 in array
	}
	else{
		if(nl<0){
			nl = -nl;				// long long is used because if n equals INT_32_MIN then n = -n will fail and code will give invalid output
			buff_arr[i++] = '-';	// if nl is negative we store '-' as first character in array
		}

		/* Below while loop takes the digits of nl and stores 
		   them in reverse order in array.
		*/ 
		while(nl){
			int digit = nl%10;	// n%10 denotes the digit at unit's place 
			buff_arr[i++] = (char)('0'+digit);	// store this digit in the array
			nl/=10;				// n /= 10 essentially removes the digit we stored in the array			 
		}
	}

	// now we have to reverse the digits we stored in buff_arr
	// if number is negative then we have start swapping from index 1
	// else we have start swapping from index 0
	// k denotes the last index in the string
	if(buff_arr[0]=='-')j=1;
	else j=0;
	k = i-1;
	
	// below while loop reverses the digits stored in buff_arr
	while(j<k){
		// swap buff_arr[j] and buff_arr[k]
		char temp = buff_arr[j];
		buff_arr[j] = buff_arr[k];
		buff_arr[k] = temp;
		j++;
		k--;
	}
	//num_char stores the number of characters we have printed to stdout(excluding '\0')
	num_char = i;
	buff_arr[i++] = '\0';	// NULL termination of the char array buff_arr
	// i now stores the number of bytes we have to print

	// below inline assembly code prints buff_arr to stdout
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff_arr), "d"(i)
	);

	return num_char;	// we return the number of characters printed
}


// below function takes a signed integer as input from stdin
// the caller gets the value of signed integer through pointer parameter
// return value is OK for success and ERR for failure 
int readInt(int *n){
	char arr[BUFF_SIZE];	//arr will store the input integer in string format
	arr[0] = '\0';		
	int len;				// len will store the number of characters read from stdin

	// below assembly code takes input from stdin and stores it in arr 
	__asm__ __volatile__ (
		"movl $0, %%eax \n\t"
		"movq $0, %%rdi \n\t"
		"syscall \n\t"
		:"=a"(len)
		:"S"(arr), "d"(BUFF_SIZE)
	);
	if(len<0){
		*n = ERR;
		return 0;
	}

	int i=0,sign=0;
	// sign=1 if the number is negative
	if(arr[0]=='-'){
		if(len==2){
			*n = ERR;
			return 0;	//input is "-" so ERR
		}
		i++;
		sign=1;
	}
	if(arr[0]=='+'){
		if(len==2){
			*n = ERR;
			return 0;	//input is "+" so ERR
		}
		i++;
	}
	long long res = 0;
	
	// below loop iterates over the string arr and converts it into integer and stores it in res
	while(i+1<len){
		// if the input value does not lie in range of int data type we return ERR
		if(res>INT_MAX||res<INT_MIN)return ERR;
		// if arr[i] is not a digit we return ERR
		// else we continue reading arr and keep updating res
		if(arr[i]>='0'&&arr[i]<='9'){
			int digit = arr[i]-'0';
			res = ((10*res) + digit);	
			// at all iterations of the while loop res stores the integer value
			// corresponding to the substring arr[0...i] or if n is negative then arr[1,...,i]
		}
		else{
			*n = ERR;
			return 0;
		}
		i++;
	}
	// if n is negative then we multiply res by -1 
	if(sign)res *= -1;
	if(res>INT_MAX||res<INT_MIN){
		*n = ERR;
		return 0;	// we check input value lies in range of int
	}
	*n = OK;	// caller function can now access the input value through return value	
	return (int)res;
}
