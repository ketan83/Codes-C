

	#include<stdio.h>
/*
	#define numberOne 21
	#define numberTwo 12

	void sum(int a);
	void sum (int a) ;
	void subs (int a) ;
	void Mult (int a) ;
	void Div (double b) ;

	void main() {
		
		int z;

		sum(z);
		subs(z);
		Mult(z);
		double y;
		Div(y);
	
	}


	void sum (int a) {

		a = numberOne + numberTwo;
		printf("Sum = %d\n" , a);
	}
	
	void subs (int a) {

		a = numberOne - numberTwo;
		printf("Subs = %d\n" , a);
	}

	
	void Mult (int a) {

		a = numberOne * numberTwo;
		printf("Mult = %d\n" , a);
	}

	
	void Div (double b) {

		b = numberOne / numberTwo;
		printf("Div = %lf\n" , b);
	}


	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc dailyflash_Preprocessor_Directive.c
	t 
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Sum = 33
Subs = 9
Mult = 252
Div = 1.000000
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


	/*
	#define sum(a,b)   a+b
	#define subs(a,b)  a-b
	#define mult(a,b)  a*b
	#define div(a,b)   a/b

	void main() {

		printf("Sum = %d\n" , sum(40 ,20));
		printf("Subs = %d\n" , subs(40 ,20));
		printf("Mult = %d\n" , mult(40 ,20));
		printf("Div = %d\n" , div(40 ,20));
	}

	O/p;
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc dailyflash_Preprocessor_Directive.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Sum = 60
Subs = 20
Mult = 800
Div = 2
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ vim dailyflash_Preprocessor_Directive.c

*/


	/*
	#define arrVal 12,24,36,48,60
	
	void main() {

		int arr[] = { arrVal };
		int max = 0;
		int i;
		for(i=0 ; i<5 ; i++) {

			if(max < arr[i] ) {

				max = arr[i] ;
			}
		}

		printf("The maximum value in the array is %d \n" ,max);
	}

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc dailyflash_Preprocessor_Directive.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
The maximum value in the array is 60
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

	#define arrVal 4,2,4,2,5

	void main() {

		int arr[] = { arrVal };
		int i, j, flag = 0;
   for(i = 0, j=4; i< 5/2 ,  j>=5/2 ;i++ ,j--) {
      
	     if(arr[i]!=arr[j]) {
         flag = 1;
         break;
      }
      
      
   }
   if (flag == 1)
   	 printf(" Array is pallindrome ");
   else
   	 printf(" Array is not a pallindrome ");
   
	}
