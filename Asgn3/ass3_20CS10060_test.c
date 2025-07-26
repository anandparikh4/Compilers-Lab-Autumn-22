/*****************************************
*
	Test file
	Compilers lab
	Group Members:
		Soni Aditya Bharatbhai 20CS10060
		Anand Manojkumar Parikh 20CS10007
*
********************************************/

#include <stdio.h>
#include <string.h>
#include <complex.h>
#define MAX_SIZE 100

typedef struct my_data_type{
	float a;
	long double b;
	char c;
	char *s;
	_Bool visited;
}node;

union my_union{
	_Complex x;
	_Complex y;
};

enum month{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sept,Oct,Nov,Dec};

extern int counter;
long arr[MAX_SIZE];

inline long add_numbers(long x,long y){return x+y;}

long fib(long n){
	if(n<=1){
		arr[n] = n;
		return n;
	}
	if(arr[n]!=-1)return arr[n];
	static int count = 0;
	count += 2;
	return arr[n] = add_numbers(fib(n-1),fib(n-2));
}

void hello_compilers(){
	printf("Hello Compilers Laboratory!\n");
	return;
}

int main(){
	hello_compilers();
	auto short i = 0;
	for(i = 0;i<MAX_SIZE;i++)arr[i]=-1;
	signed int z = 17;
	const node mynode = {1e-3, 1.234E5, '\n', "my_string\t", 1};

	int check_prime;
	printf("Enter a +ve integer: ");
	scanf("%d",&check_prime);

	int c1=2;
	_Bool flag=1;
	while(check_prime>1 && c1*c1 <= check_prime){
		int modulo = check_prime%c1;
		if(modulo==0){
			flag=0;
			break;
		}
		else{
			c1++;
			continue;
		}
	}

	char ans = (!flag)? 'N': 'Y';
	node *x = NULL;
	int t = 4,pq = 12;
	do{
		t += z;
		t -= ((t*(t^t))|(~t));
		t--;
		t <<= 2;
		t >>= (t%8);
		t *= (t&1234);
		t %= (int)(1e9+7.0);
		pq ^= (t/2);
		pq &= (55>>2);
		t |= (17<<1);
		{
			//this is an empty block
		}
	}while(!((x!=1) || (x!=0)));

	char c = '\n';
	switch(c){
		case ' ': printf("Whitespace\n");break;
		case '\'':
		case '\"':
		case '\t':
		case '\n': printf("Escape sequence\n");break;
		default: printf("Cannot identify!\n");
	}

	x = (node *)malloc(sizeof(node));	
	//malloc is not a keyword for tinyC so it will be an identifier
	node y = mynode;
	int not_matched=0;
	if(x!=NULL){
		if(x->a == y.a){
			counter++;
		}
		else if(x->b != y.b && (x->visited == 1)){
			not_matched++;
		}
		else{
			goto exit_loop;
		}
	}
	exit_loop:
		printf("\t\tTesting of \"flex file\" completed\t\n");
}

