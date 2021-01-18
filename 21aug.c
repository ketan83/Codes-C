#include<stdio.h>

/*
void main() {

	int r ;
	float a;

	printf("Enter radius of the circle :");
	scanf("%d",&r);


	a  = 3.14 * r * r;

	printf("Area of a Circle is using formula is %f  \n",a);
}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 21aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter radius of the circle :5
Area of a Circle is using formula is 78.500000
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/


/*
void main() {


	int i , j , x;

	for (i =1 ;i <=4 ;i++) {
		x =2;
		for (j=1 ; j<=4 ; j++) {

			printf(" %d " ,x);
			x =x +2;

		}
		printf("\n");
	}
}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
 2  4  6  8
 2  4  6  8
 2  4  6  8
 2  4  6  8
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/


/*
void main() {

	int ch = 'A';
	char ch1 = ch;
	while(ch!='Z') {

		printf("ASCII value of %c is %d \n",ch1,ch);
		ch1++ , ch++;
	}
}

O/p;
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ASCII value of A is 65
ASCII value of B is 66
ASCII value of C is 67
ASCII value of D is 68
ASCII value of E is 69
ASCII value of F is 70
ASCII value of G is 71
ASCII value of H is 72
ASCII value of I is 73
ASCII value of J is 74
ASCII value of K is 75
ASCII value of L is 76
ASCII value of M is 77
ASCII value of N is 78
ASCII value of O is 79
ASCII value of P is 80
ASCII value of Q is 81
ASCII value of R is 82
ASCII value of S is 83
ASCII value of T is 84
ASCII value of U is 85
ASCII value of V is 86
ASCII value of W is 87
ASCII value of X is 88
ASCII value of Y is 89
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/


/*
void main() {

	int units   ;
	float tunits;

	printf("ENter number of units :");
	scanf("%d",&units);

	 if(units == 50) {
				tunits  = units * 0.50 ;
		  printf("for first  %d Units Rs. 0.50 /Unit , so total  electricity bill in  units is %f \n",units ,tunits); 

	  } else if(units == 100) {
					tunits  = units * 0.75 ;
		 			printf("for first  %d Units Rs. 0.50 /Unit , so total electricity bill in  units is %f \n",units , tunits); 
	  
	  } else if(units >= 100) {
				
		  			tunits  = units * 0.75 ;
		 			printf("for first  %d Units Rs. 0.50 /Unit , so total electricity bill in  units is %f \n",units , tunits); 
            }	 
	 	else if(units >= 250) {
					tunits = units * 1.20;
           		 printf("for first  %d Units Rs. 0.50 /Unit , so total electricity bill in  units is %f \n",units , tunits); 
		}  

}

O/p:
ENter number of units :50
for first  50 Units Rs. 0.50 /Unit , so total  electricity bill in  units is 25.000000
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter number of units :100
for first  100 Units Rs. 0.50 /Unit , so total electricity bill in  units is 75.000000
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 21aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter number of units :190
for first  190 Units Rs. 0.50 /Unit , so total electricity bill in  units is 142.500000
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter number of units :560
for first  560 Units Rs. 0.50 /Unit , so total electricity bill in  units is 420.000000
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

