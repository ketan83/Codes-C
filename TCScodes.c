

	#include<stdio.h>

	void sum ( int a[] ) {

	int i , summ = 0;	

	for(i=0 ; i<5 ; i++) {

		summ = summ + a[i] ;
		if(summ == 12){
			printf(" %d\n" , summ );
		}

	}
	}

	void main() {

		int a[] = { 1,2,3,7 ,5};


		sum(a);
	}
