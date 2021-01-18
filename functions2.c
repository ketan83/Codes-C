#include<stdio.h>
	int fact(int x);   // function declaration
	void main() {

	int num;
	scanf("%d",&num);
int t= 	fact(num);       // function calling

printf("%d\n",t);
	}


	int  fact(int num) {             // function definition and below is the function body

		int i , f = 1;

		for(i=num ; i>=1 ; i--) {

			f = f* i;
		}

		return f;
	}
