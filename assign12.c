#include<stdio.h>

void main() {

	int n ;
	printf("Enter value of n\n");
	scanf("%d",&n);
	if(n%2==0) {
		printf("%d is divisible by 2\n",n);

		if(n%3 ==0) {
			printf("%d is divisible by 3\n",n);

			if(n%5==0){
				printf("%d is divisible by 5\n",n);
			}
			else{
				printf("%d is not divisible by 5\n",n);
			}
		}
			else{
				printf("%d is not  divisible by 3\n",n);
			}
		}
		else {

				printf("%d is not  divisible by 2\n",n);
		}

}
