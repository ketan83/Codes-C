

	#include<stdio.h>
/*
		void fibonacci(int prevTerm , int currTerm , int nextTerm ) {


			int i ;
			for(i = 0 ; i<10 ; i++) {
				printf(" %d ",prevTerm);
				nextTerm = prevTerm + currTerm;
				prevTerm = currTerm;
				currTerm = nextTerm;
			}
			printf("\n");
		}

	void main() {

		int prevNum = 0;
		int currNum = 1;
		int nextNum ;

		fibonacci(prevNum , currNum , nextNum);
	}
		O/p:
		etan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 21oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 0  1  1  2  3  5  8  13  21  34
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/
/*
	void display( int a[] ) {

		int i;
		for(i = 0 ; i<5 ;  i++) {
			printf(" %d " , a[i]) ;
		}
		printf("\n");
	}

	void sort( int a[] ) {

		int i , j ,t;

		for(i=0 ; i<5 ; i++) {
			for(j = i+1 ; j<5 ; j++) {

				if(a[i]<a[j]) {
					t  = a[i] ;
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
	}
	
	void main() {

		int a[] = { 3,5,2,8,6 };
		printf(" before sorting \n");
		display(a);
		sort(a);
		printf(" after sorting in descending order\n");
		display(a);
	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 21oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 before sorting
 3  5  2  8  6
 after sorting in descending order
 8  6  5  3  2
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/
/*
	void sot(int a1  , int a2 , int a3) {

		int sum = a1 + a2 + a3;
	       if(sum == 180 ) {
	       		printf(" It is a triangle\n");
	       } else {
       			printf(" It is not a triangle \n");
 			}
	}	       

	void main() {

		int a1 , a2 , a3 ;

		printf(" Enter angles of triangle s \n");
		scanf("%d%d%d",&a1,&a2,&a3);

		sot(a1,a2,a3);
	}
	O/p;
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 21oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter angles of triangle s
100 20 60
 It is a triangle
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter angles of triangle s
40 80 50
 It is not a triangle
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

	/*
	void minimum( int a[] ) {
		 int i , loc = 0;
		 for(i=1 ; i<5 ; i++) {
			 if(a[i]<a[loc]) {
				 loc = i;
			 }
		 }
		 printf(" Minimum element is present at location %d and its value is %d \n",loc , a[loc]);
	}
	void main() {

		int a[] = { 6 ,5,2,3 ,7 };
		int i;
		printf(" Array elements are \n");
		for( i=0 ; i<5 ; i++) {
			printf(" %d ",a[i]);
		}
		printf("\n");
		minimum(a);
			}
O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 21oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Array elements are
 6  5  2  3  7
 Minimum element is present at location 2 and its value is 2
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/
