// PROGRAM TO FIND OUT THE LENGTH OF THE NUMBER 

#include<stdio.h>

void main() {

	int num = 67672728;
	int rem =0 ;
	int dup = num;
	int len =0 ;

	while(num!=0) {

		num = num / 10;
		len = len +1;
	}

	printf("Length of the number %d is %d \n",dup,len); 
}
/*
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ cc forloopbasics25.c
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ ./a.out
Length of the number 67672728 is 8
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$
*/

