#include<stdio.h>


/* PROGRAM 5
void main() {

	int i,j;

	for(i=1 ; i<=4 ; i++) {

		for ( j=1 ; j<=i ; j++) {

			printf(" * ");

		}
		printf("\n");
	}
}

O/p:
etan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 27aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 *
 *  *
 *  *  *
 *  *  *  *
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/*  PROGRAM 4
	
    void main() {


		int x , y , z ,f,ch;
		printf("ENter values in x & y");
		scanf("%d%d",&x,&y);

		do{

			printf(" --------------------------MENU------------------------- \n");
			printf("1. Addition \n");
			printf("2. Subtraction \n");
			printf("3. Multiplication \n");
			printf("4. Division \n");
			printf("5. Modulus \n");
			printf("Enter your choice ");
			scanf("%d",&ch);

			switch(ch) {

			case 1 : z = x + y;
				 printf("Addition of %d & %d is %d \n",x,y,z);
				 break;

			case 2 : z = x - y;
				 printf("Subtraction of %d & %d is %d \n",x,y,z);
				 break;
				
			case 3 : z = x * y;
				 printf("Multiplication of %d & %d is %d \n",x,y,z);
				 break;
			
			case 4 : z = x / y;
				 printf("Division of %d & %d is %d \n",x,y,z);
				 break;

			case 5 : z = x % y;
				 printf("Modulus  of %d & %d is %d \n",x,y,z);
				 break;
			}

			printf(" Do you want to continue 1 = YES 2 =NO \n");
			scanf("%d",&f);

			}while(f==1);
		}


		O/p:
		ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter values in x & y40 20
 --------------------------MENU-------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
Enter your choice 1
Addition of 40 & 20 is 60
 Do you want to continue 1 = YES 2 =NO
1
 --------------------------MENU-------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
Enter your choice 2
Subtraction of 40 & 20 is 20
 Do you want to continue 1 = YES 2 =NO
1
 --------------------------MENU-------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
Enter your choice 3
Multiplication of 40 & 20 is 800
 Do you want to continue 1 = YES 2 =NO
1
 --------------------------MENU-------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
Enter your choice 4
Division of 40 & 20 is 2
 Do you want to continue 1 = YES 2 =NO
1
 --------------------------MENU-------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
Enter your choice 5
Modulus  of 40 & 20 is 0
 Do you want to continue 1 = YES 2 =NO
0
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


/*       PROGRAM 3
 *
	void main() {

	int x, y ;
		
		printf("ENter values in x & y");
		scanf("%d%d",&x,&y);

		printf("Addition of %d & %d is %d \n",x*x*x,y*y*y,x*x*x + y*y*y);

		
		printf("Subtraction of %d & %d is %d \n",x*x,y*y,x*x - y*y);

	}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 27aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter values in x & y 10 20
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


/* PROGRAM 2
 *
void main() {

	  int x, y ;

                printf("ENter values in x & y");
                scanf("%d%d",&x,&y);

		 printf("Addition of %d & %d is %d \n" ,x,y,x+y);

		 if(x<y)
			  printf("O/p obtained will be in negative value \n");
		 else
			printf("Subtraction of %d & %d is %d \n",x,y,x-y);
}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter values in x & y10 20
Addition of 10 & 20 is 30
O/p obtained will be in negative value
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter values in x & y 20 10
Addition of 20 & 10 is 30
Subtraction of 20 & 10 is 10
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


/* PROGRAM 1
void main() {

          int x, y ;

                printf("ENter values in x & y");
                scanf("%d%d",&x,&y);

                 printf("Multiplication of %d & %d is %d \n" ,x,y,x*y);

                 if(x<y)
                          printf("Divisor y is greater than the number x \n");
                 else
                        printf("Division is  %d \n",x/y);
}
O/p:
etan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 27aug.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter values in x & y10 20
Multiplication of 10 & 20 is 200
Divisor y is greater than the number x
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter values in x & y20 10
Multiplication of 20 & 10 is 200
Division is  2
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/
