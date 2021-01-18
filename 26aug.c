
#include<stdio.h>


/* PROGRAM 1

   void main() {

	int i;

	for(i=1 ; i<=10 ; i++) {

		printf("Square of %d is %d \n",i,i*i);
	}
}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Square of 1 is 1
Square of 2 is 4
Square of 3 is 9
Square of 4 is 16
Square of 5 is 25
Square of 6 is 36
Square of 7 is 49
Square of 8 is 64
Square of 9 is 81
Square of 10 is 100
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/* PROGRAM 2

	 void main() {

        int i;

        for(i=1 ; i<=20 ; i++) {

                printf("Cube of %d : %d \n",i,i*i);
        }
}


O/p:

	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Cube of 1 : 1 
Cube of 2 : 4 
Cube of 3 : 9 
Cube of 4 : 16 
Cube of 5 : 25 
Cube of 6 : 36 
Cube of 7 : 49 
Cube of 8 : 64 
Cube of 9 : 81 
Cube of 10 : 100 
Cube of 11 : 121 
Cube of 12 : 144 
Cube of 13 : 169 
Cube of 14 : 196 
Cube of 15 : 225 
Cube of 16 : 256 
Cube of 17 : 289 
Cube of 18 : 324 
Cube of 19 : 361 
Cube of 20 : 400 
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ 
	
*/


/* PROGRAM 3
 *
	void main() {

 	int i ,x=2;
        for(i=1 ; i<=10 ; i++) {

                printf(" 2 * %d = %d \n",i ,2*i);
        }

	}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 2 * 1 = 2
 2 * 2 = 4
 2 * 3 = 6
 2 * 4 = 8
 2 * 5 = 10
 2 * 6 = 12
 2 * 7 = 14
 2 * 8 = 16
 2 * 9 = 18
 2 * 10 = 20
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


/* PROGRAM 4
 *
void main() {

        int i ,x;
	printf("Enter number for which you want the table :");
	scanf("%d",&x);
        for(i=1 ; i<=10 ; i++) {

                printf(" %d * %d = %d \n",x,i ,x*i);
        }

        }

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter number for which you want the table :4
 4 * 1 = 4
 4 * 2 = 8
 4 * 3 = 12
 4 * 4 = 16
 4 * 5 = 20
 4 * 6 = 24
 4 * 7 = 28
 4 * 8 = 32
 4 * 9 = 36
 4 * 10 = 40
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


/* PROGRAM 5
	void main() {

		int i , j;

		for(i=1  ; i <=4 ; i++) {

			for(j=1 ; j<=i ; j++) {

				printf(" 0 ");
			}
			printf("\n");
		}
	}


O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 0
 0  0
 0  0  0
 0  0  0  0
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/
