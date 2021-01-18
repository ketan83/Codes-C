#include<stdio.h>


void main() {

int a=10 , b =20;
 if ( (a&&b++)&&(a++||++b)) {
 	printf("a:%d\n",a);
 	printf("b:%d\n",b);

 }
	printf("out of if ");


}
