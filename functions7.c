	
// PASSING ARRAY ELEMENTS 
	#include<stdio.h>
	int elePass(int *x) ;
	void main() {

		int arr[] = { 10,20,30,40,50 };
		int sum  =0;
		int i,ret=0 ;
		for(i=0 ; i<5 ; i++) {
			   sum = elePass(&arr[i]);
		}
		printf("sum = %d\n",sum); 
	}

	int elePass(int *x) {
		sum = sum + *x;
		return sum;
	}
