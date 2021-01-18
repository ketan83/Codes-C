// C PROGRAM TO PRINT SERIES 0 1 1 2 3 5 8 13 21 (Fibonacci series)

#include<stdio.h>
void main() {

	int prevterm =0 ; // previous term
	int currterm = 1; // current term
	int nextterm;     // next term


	for(int i =1;i<=9 ;i++) {

	printf("%d\t" , prevterm);

	nextterm = prevterm + currterm;
	prevterm = currterm;
	currterm = nextterm;

	}
	printf("\n");
}
/*
O/p:

ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ cc forloopbasics24.c
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ ./a.out
0	1	1	2	3	5	8	13	21
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$
*/
