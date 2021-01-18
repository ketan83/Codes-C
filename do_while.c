// C PROGRAM TO PRINT NUMBERS IN REVERSE ORDER

#include<stdio.h>

void main() {

	int num,f ;
	char ch = 'y';

	do {

		printf("Enter number : \n");
		scanf("%d",&num);

		int var = num;
		int rem = 0;
		int rev = 0;

		while(num!=0) {

			rem = num % 10;
			rev = rev*10 + rem;
			num = num /10;

		}
			printf("Reverse of %d is %d \n ",num , rev);

			printf("Do you want to continue 1=YES 2 =NO \n ");
			scanf("%d",&f);
	}while(f==1);

}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5$ ./a.out
Enter number :
135
Reverse of 0 is 531
 Do you want to continue 1=YES 2 =NO
 2
ketan@ketan-tuf-fx505dt:~/ppa5$ vim do_while.c
ketan@ketan-tuf-fx505dt:~/ppa5$ vim do_while.c

