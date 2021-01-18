#include<stdio.h>
int  add_sub(int a , int b) ; 

void main() {
	int x ;
	 x = add_sub(10 ,5);
	printf("%d\n",x);
}
int  add_sub(int a , int b) {
	int add=0 , sub = 0;
	add = a+b;
	sub = a-b;
	return (add,sub)	;

}
