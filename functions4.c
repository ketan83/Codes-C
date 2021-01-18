#include<stdio.h>
	void swap(int a , int b);

void main() {

		int a=10 , b=5;

		printf("%d %d\n", a,b);
		/*
		a =a +b;
		b= a-b;
		a = a-b;
*/
		swap(a,b);

}

	void swap(int a , int b) {

			
		a =a +b;
		b= a-b;
		a = a-b;
		printf("After changes %d %d\n", a,b);

	}
