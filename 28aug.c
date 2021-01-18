#include<stdio.h>


/* PROGRAM 1

		void main() {

			int i , j;

				int x=0;
			for(i=1; i<=3 ;i++) {
					 x++;
				for (j=1 ;j<=i;j++) {

					printf(" %d ",x);
				}
				printf("\n");
			}


		}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 1
 2  2
 3  3  3
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/





/*  PROGRAM 2
 *

                void main() {

                        int i , j;

                                int x=1;
                        for(i=1; i<=3 ;i++) {
                                for (j=1 ;j<=i;j++) {

                                        printf(" %d ",x);
                                         x++;
                                }
                                printf("\n");
                        }


                }

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 28aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 1
 2  3
 4  5  6
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/



/* PROGRAM 3
 *

                void main() {

                        int i , j;

                                int x=1;
                        for(i=1; i<=4 ;i++) {
                                for (j=1 ;j<=i;j++) {

                                        printf(" %d ",x);
                                         x++;
                                }
                                printf("\n");
                        }


                }

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 1
 2  3
 4  5  6
 7  8  9  10
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/





/* PROGRAM 4
 *
                void main() {

                        int i , j;

                        for(i=1; i<=4 ;i++) {
                                for (j=1 ;j<=i;j++) {

                                        printf(" * ");
                                }
                                printf("\n");
                        }


                }

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 28aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 *
 *  *
 *  *  *
 *  *  *  *
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash*/







/* PROGRAM 5
 *
	void main() {

		int  i , n ,fact=1;

		printf("Enter the number to calculate the factorial ");
		scanf("%d",&n);

		for(i=n ; i>=1 ; i--) {

			fact = fact * i;
		}
		printf("Factorial of %d is %d \n " ,n ,fact);

	}


O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 28aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter the number to calculate the factorial 5
Factorial of 5 is 120
 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter the number to calculate the factorial 6
Factorial of 6 is 720
 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/
