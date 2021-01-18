#include<stdio.h>

/*
void main() {
	
		int a[10] = { 20 , 30 ,40 ,50 , 41 , 39 ,1,2,7,9};

		printf("Sizeof array a is %ld \n",sizeof(a));	


}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 14sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Sizeof array a is 40
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


/*
	void main() {

		int a[5] , b[5] ,n=5 ;
		int fact = 1;

		printf("Enter numbers in array a ");

		for (int i=0 ; i<5 ; i++) {

			scanf("%d",&a[i]);
		}

		 for (int i=0 ; i<5 ; i++) {

                        printf(" %d ",a[i]);
                }

		printf("\n");
		 for ( int j=n ; a[j-1]>=1 ; j-- ){

			 fact = fact * a[j-1] ;

		 }

		 printf("%d",fact);

		for (int i=0 ; i<5 ; i++) {

                        printf(" %d ",b[i]);
                }

		printf("\n");

	}

*/

/*	
	void main() {

		int a[5] = { 6 , 15 , 21 , 24 , 28 };
		int b[5];

		printf(" elements in the array a are ");
		for(int i=0 ; i<5 ; i++) {

			printf(" %d ",a[i]);

		}

		printf("\n");

		for (int i = 0 ; i<5 ; i++) {

			if(a[i]%2==0) {

				b[i]= a[i]*a[i] ;
			
			} else {
			       
				b[i] = a[i];
			}	
		}

		 printf(" elements in the array a are where the even numbers are squared are ");
                for(int i=0 ; i<5 ; i++) {

                        printf(" %d ",b[i]);

                }

		printf("\n");

		int largest1= a[0] ;

		 for(int i=0 ; i<5 ; i++) {

                        if(largest1 < a[i]) 
				largest1 = a[i];

                }

		 printf("Largest element in  array a  is %d \n",largest1);


}
O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 14sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 elements in the array a are  6  15  21  24  28
 elements in the array a are where the even numbers are squared are  36  15  21  576  784
Largest element in  array a  is 28
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$


*/

	



/*
void main() {
	int  a[7] = {  1 , 3 ,11 ,20 , 50 , 71 ,101};

	int i;

	for (i=0 ; i<7 ; i++) {
		int first = a[i] ;
		int last ;

		while(first>=10) {

			first = first / 10;
		}

		 last = a[i] %10;

		 if(first == last) {

			 printf( " %d is a palindrome number \n",a[i]);
		 } else {

			 printf( " %d is not a palindrome number \n" , a[i]);

				}
	}
}
O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 1 is a palindrome number
 3 is a palindrome number
 11 is a palindrome number
 20 is not a palindrome number
 50 is not a palindrome number
 71 is not a palindrome number
 101 is a palindrome number
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


	void main() {

            
	                        int j ,n =5,facto=1;
                
		for (  j = n ; j>=1 ; j--);
                {
                                facto = facto * j ;
                }


                printf("Factorial = %d \n",facto);



	}
