	#include<stdio.h>
	void main() {

			int num ,sum =0;

				printf("Enter number ");
				scanf("%d",&num);

			while(num > 0){

				sum = sum + num ;
				scanf("%d",&num);
			}

			printf("Sum = %d",sum);

	}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc pgm45.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
Enter number 1
2
3
4
5
-1
Sum = 15ketan@ketan-tuf-fx
