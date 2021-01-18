#include<stdio.h>

void main() {
/*
	int i;
	long num ;
	printf("ENter the number");
	scanf("%ld",&num);
	for(i=1;i<=num;i++) {

	printf("%ld\t",num);
	num = num*10+9;
	}
	printf("Cor2Web \n");
		
}

O/p : 9 , 99,999 ,9999 ........n



int i , n ,fact=1;

	printf("Enter number");
	scanf("%d",&n);

	for(i=n; i>=1;i--){

	fact = fact * i;

	}

	printf("Factorial of %d is %d  \n",n,fact);  // factorial using while loop
	}
	*/

	int i , n;

	printf("Enter number ");
	scanf("%d",&n);

	for ( i= 1; i<=n ; i++) {

	if(n%i==0) {

		printf(" %d\t ",i);

	}
	}
	printf("Done \n");
}
