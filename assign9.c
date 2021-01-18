#include<stdio.h>

void main() {

int num =10;

if(num!=0&&num>0) {

	printf("%d is +ve no.\n",num);
	num=-5;
}
if(num<0) {

        printf("%d is -ve no.\n",num);
        num=0;
}
if(num%4==0) {

        printf("%d is divisible by 4\n",num);
        
}


}
