#include<stdio.h>


/* PROGRAM 1
 *
 *
void main() {

	int  i ,n =100;

	for(i=1 ; i <=100 ;i++) {

		if( (i%3==0) || (i%5==0))
			 printf("%d\t",i);

	}

		printf("\n");

}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 31aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
3	5	6	9	10	12	15	18	20	21	24	25	27	30	33	35	36	39	40	42	45	48	50	51	54	55	5760	63	65	66	69	70	72	75	78	80	81	84	85	87	90	93	95	96	99	100
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/* PROGRAM 2
 *
 *
void main() {


	  int  i ,n =100;

        for(i=1 ; i <=100 ;i++) {

                if( (i%4==0) && (i%7==0))
                         printf("%d\t",i);

        }

                printf("\n");

}


O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
28	56	84
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


/* PROGRAM 3
 *
 *
void main() {


	int  i , n;

	printf("Enter the nth number ");
	scanf("%d",&n);

	for (i=1 ; i<=n ;i++){

		if(i%2==1)
			printf("Cube of %d : %d   & Square of %d : %d \n",i,i*i*i,i,i*i);

	}

	printf("\n");
}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 31aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter the nth number 10
Cube of 1 : 1   & Square of 1 : 1
Cube of 3 : 27   & Square of 3 : 9
Cube of 5 : 125   & Square of 5 : 25
Cube of 7 : 343   & Square of 7 : 49
Cube of 9 : 729   & Square of 9 : 81

*/


/* PROGRAM 4
 *
 *
void main() {


	int i , j;

	for ( i =1 ; i<=5 ; i++) {


		for (j =1 ;j<=i ; j++) {

			if ( i ==2 || i==4)
				printf(" 1 ");
			else
				printf(" 0 ");
		}
		printf("\n");
	}
}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 31aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 0
 1  1
 0  0  0
 1  1  1  1
 0  0  0  0  0
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/



/* PROGRAM 5
 *
 *
void main() {

		 int  i , n;

        printf("Enter the nth number ");
        scanf("%d",&n);

	printf("Perfect Divisors of %d is \n",n);
        for (i=1 ; i<=n ;i++){

                if(n%i==0)
                        printf(" %d ",i);

        }

        printf("\n");


}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter the nth number 24
Perfect Divisors of 24 is
 1  2  3  4  6  8  12  24
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/
