#include<stdio.h>
#include<stdbool.h>

/* PROGRAM 1
void main() {

	int snum  ,endnum ;

	printf("ENter starting & ending numbers ");
	scanf("%d%d",&snum,&endnum);

	printf("Series of odd numbers ranging between %d & %d is ",snum,endnum); 

	while (snum <= endnum) {

		if(snum%2==1) {
			printf(" %d\t",snum);
			}
		snum++;
	}

		printf("\n");
}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 01sept.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter starting & ending numbers 4 60
Series of odd numbers ranging between 4 & 60 is  5	 7	 9	 11	 13	 15	 17	 19	 21	 23	 25	 27	 29	 31	 33	 35	 37	 39	 41	 43	 45 47	 49	 51	 53	 55	 57	 59
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/* PROGRAM 2
void main() {

	int t ,x ,y;

	printf("Enter values in x & y");
	scanf("%d%d",&x,&y);

	t =x ;
	x =y;
	y = t;

	printf("Value of x & y after swapping is %d & %d \n",x,y);

}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 01sept.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter values in x & y 20 30
Value of x & y after swapping is 30 & 20
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


/* PROGRAM 3
void main() {


	int  i , n;

	printf("Enter the nth number ");
	scanf("%d",&n);

	for (i=1 ; i<=n ;i++){

		if(i%2==0)
			printf("Cube of %d : %d   & Square of %d : %d \n",i,i*i*i,i,i*i);

	}

	printf("\n");
}

ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 01sept.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter the nth number 10
Cube of 2 : 8   & Square of 2 : 4 
Cube of 4 : 64   & Square of 4 : 16 
Cube of 6 : 216   & Square of 6 : 36 
Cube of 8 : 512   & Square of 8 : 64 
Cube of 10 : 1000   & Square of 10 : 100 

ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ 

*/


/* 	PROGRAM 4
void main() {

	int i , j;


	for (i=1 ; i<=5 ; i++) {

		for (j=1  ; j<=i ; j++) {

			if(i==2 || i==4)
				printf(" A ");
			else
				printf(" a ");
		}
		printf("\n");
	}
	printf("\n");
}

o/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 01sept.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 a
 A  A
 a  a  a
 A  A  A  A
 a  a  a  a  a

ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/


/* 	PROGRAM 5
 *
void main() {

	int x=56 ,y=99;

	bool z = (x<y) ? x : y;

			if(z)
			   printf("Maximum among %d & %d is %d \n",x,y,y);
			else
			   printf("Maximum among %d & %d is %d \n",x,y,x);
}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 01sept.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Maximum among 56 & 99 is 99
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/
