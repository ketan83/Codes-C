#include<stdio.h>


/* 	PROGRAM1
 *
	void main() {

	int side1  ,side2 , hypo ;
	printf("ENter sides of Triangle & desired hypotenuse :");
	scanf("%d%d%d",&side1,&side2,&hypo);

	hypo = hypo * hypo;

	side1 = side1*side1 ;
	side2 = side2*side2 ;

	if(hypo == (side1+side2)) {

		printf("Triangle Satisfies the problem ");
	} else {
		printf("Triangle does not Satisfies the problem ");
	}

	}
O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter sides of Triangle & desired hypotenuse :3 4 5
Triangle Satisfies the problem 
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter sides of Triangle & desired hypotenuse :3 4 6
Triangle does not Satisfies the problem 
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/



/* PROGRAM 4
	void main() {

		int  i , j , x =1;

		for ( i=1  ; i<=4 ; i++) {

			for (j =1 ; j<=4 ; j++) {

				printf("  %d", x );
				x++;
			}
			printf("\n");
		}
	}
O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
  1  2  3  4
  5  6  7  8
  9  10  11  12
  13  14  15  16
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$

*/


/* PROGRAM 5


	void percentage(int marks) {

		printf("Percentage is  %d \n",marks);

	}


	void grade(int marks) {

	if(marks>=90) 
		printf("Grade : A");
	else if(marks>=80) 
		printf("Grade : B");
	else if(marks>=70) 
		printf("Grade : C");
	else if(marks>=60) 
		printf("Grade : D");
	else if(marks>=50) 
		printf("Grade : E");
	else if(marks>=40) 
		printf("Grade : F");
	}

	

        void main() {
        
	int marks ,i;
	
        printf("ENter marks of Five Subjects Physics , Chemistry , Biology , Mathematics , Computer Science  :");
	for( i=1  ; i<=5 ; i++) {

		printf(  "  Subject %d" , i);
        	scanf("%d",&marks);
		percentage(marks);
		grade(marks);

		printf("\n");
	}



       }

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 20aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter marks of Five Subjects Physics , Chemistry , Biology , Mathematics , Computer Science  :  Subject 1 90
Percentage is  90
Grade : A
  Subject 2 80
Percentage is  80
Grade : B
  Subject 3 70
Percentage is  70
Grade : C
  Subject 4 60
Percentage is  60
Grade : D
  Subject 540
Percentage is  40
Grade : F
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/
	


/* PROGRAM 3
 *  
	void main() {

		 
		int year;

		printf("ENter a year ");
		scanf("%d",&year);

		if(year%4==0) {
			printf( "%d is aleap year \n",year);
		}else {
			printf( "%d is not aleap year \n",year);
		}

		}
o/p;
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a year 2000
2000 is aleap year
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
*/




/* PROGRAM 2

	void main() {

		int A;  //final amount
		int P = 2000 ; // initial principal balance
		int r = 10; // annual interest rate (in %age)
		int t = 2; // time ( in years);

		A =P * ( 1 + (r*t));  // Simple Interest Formula 

		printf("Using Formula Final Amount is %d \n" , A); // 42000

			}
O/p;
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 20aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Using Formula Final Amount is 42000
*/
