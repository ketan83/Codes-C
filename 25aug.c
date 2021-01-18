#include<stdio.h>


/* PROGRAM 5
 *
void main() {

	int i , j;

	for (i=1 ; i <=4 ; i++ ) {

		for(j=1 ; j<=4 ;j++) {

			if(i==2 || i==4) {
				printf(" 1 ");
			} else {
				printf(" 0 ");
			}
		}
		printf("\n");
	}
}

o/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 25aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
 0  0  0  0
 1  1  1  1
 0  0  0  0
 1  1  1  1
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/* 	PROGRAM 4
 *
void main() {

	int i , a[10] ,sum =0   ;
	float avg,n;


	printf("ENter number of elements :");
	scanf("%f",&n);

	printf("ENter numbers :");
	for(i=0 ; i<n ; i++) {
		scanf("%d",&a[i]);
	}

	for(i=0 ; i<n ; i++) { 
		printf(" %d ",a[i]);
		sum = sum + a[i];
	}

	printf("\n");
	printf("Sum of %f entered number is %d \n",n,sum);

	avg = sum/n;
	printf("Average of %f entered number is %f \n ",n,avg);
	printf("\n");
}


O/P:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 25aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter number of elements :10
ENter numbers :1 2 3 4 5 6 7 8 9 10
 1  2  3  4  5  6  7  8  9  10
Sum of 10.000000 entered number is 55
Average of 10.000000 entered number is 5.500000

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/


/*
void main() {

	int x ;

	printf("Enter Numbers :");
	scanf("%d",&x);

	if(x%2==0)
		printf(" %d is an even number \n",x);
	else
		printf(" %d is an odd number \n",x);


}


o/p;
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter Numbers :4
 4 is an even number
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter Numbers :5
 5 is an odd number
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter Numbers :10
 10 is an even number
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter Numbers :12
 12 is an even number
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/*  PROGRAM 2
 *
void main() {

        int i , a[10] , n,sum =0   ;


        printf("ENter number of elements :");
        scanf("%d",&n);

        printf("ENter numbers :");
        for(i=0 ; i<n ; i++) {
                scanf("%d",&a[i]);
        }

        for(i=0 ; i<n ; i++) { 
                printf(" %d ",a[i]);
                sum = sum + a[i];
        }

        printf("\n");
        printf("Sum of %d entered number is %d \n",n,sum);
}


O/p;
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 25aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter number of elements :10
ENter numbers :1 2 3 4 5 6 7 8 9 10
 1  2  3  4  5  6  7  8  9  10
Sum of 10 entered number is 55
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/*PROGRAM 1
 *
void main() {

        int x ;

        printf("Enter Numbers :");
        scanf("%d",&x);

        printf("%d\n",x);

}

O/p;
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter Numbers :11
11
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/
