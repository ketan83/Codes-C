#include<stdio.h>

void main() {

	int n , i , sum =0;

	printf("Enter number ");
	scanf("%d" , &n);
	
	printf("Perfect divisors of %d are \t:",n);
	for ( i =1; i<=n ; i++) {

		if(n%i == 0) {

		printf("%d\t" ,i);
		sum = sum +i;
		}
	}

	printf("\n");
	printf("Sum of all perfect divisors of %d are %d \n", n , sum);

}
