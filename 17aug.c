#include<stdio.h>
#include<stdbool.h>
/*

void main() { PROGRAM 1

	int x =1  , y =2;

	if(x<y) 
		printf("%d is max among %d & %d \n",y,x,y);
}
O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
2 is max among 1 & 2
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ clear

*/


/* PROGRAM 2
	void main() {

		int x;
		printf("Enter a number");
		scanf("%d",&x);

		if(x==0)
		      printf("Number is equal to %d",x);
		else
			printf("%d is a negative number ",x);




	}
O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter a number-2
-2 is a negative number ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/* PROGRAM 3
void main() {

	int x, i ,j;

		printf("Enter a number");
		scanf("%d",&x);
	if(x%2==0)
		printf("%d is an even number ",x);
	else
		printf("%d is an odd number ",x);
}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 17aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter a number 9
9 is an odd number ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter a number8
8 is an even number ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/* PROGRAM 4
void main() {

	int i , j;

	for(i=1 ;i<=4 ;i++) {

		for(j=1 ;j<=4 ;j++) {

			printf(" * ");
		}
		printf("\n");
	}
}


O/P;
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 17aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
 *  *  *  *
 *  *  *  *
 *  *  *  *
 *  *  *  *
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/* PROGRAM 5
 
void main() {

        int i , j,x;
		printf("Enter a number");
                scanf("%d",&x);

		if(x%11==0 && x%5==0)
			printf("%d is divisible by 5 & 11",x);
		else
			printf("%d is not divisible by 5 & 11",x);
}
O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter a number55
55 is divisible by 5 & 11ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 17aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter a number99
99 is not divisible by 5 & 11ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

