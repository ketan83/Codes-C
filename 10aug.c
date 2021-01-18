/*
#include<stdio.h>

void main() {

	int start ,y , end ,series ;

	printf("Enter starting number & ending number : ");
	scanf("%d%d" ,&start,&end);

	start = start + 1;

	while(start<end) {

	
		printf("%d\t" , start);

		start = start +10;
	}	
		

	printf("\n");
}

O/p:

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter starting number & ending number : 100 200
101	111	121	131	141	151	161	171	181	191
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/*
#include<stdio.h>

void main() {

     int i ,j, year,marks;
                printf("ENter Student's year ");
                     scanf("%d",&year);

                printf("Enter marks of student ");
                             scanf("%d" ,&marks);

				switch(year) {

					case 1 : printf("1st year Student is not  eligible for education scholarship \n");
                                        		break;    
                                        
					case 2 : printf("2nd year Student is not  eligible for education scholarship \n");
                                        		break;    


					case 3 :switch(marks) {
					
						case 67 : printf(" 1st year students are not eligible for education scholarship \n");
									break;

						case 72: printf(" 2nd year students are not eligible for education scholarship \n");
									break;

						case 90 : if( (year==3) && (marks> 75)) {

											 printf("STudent is eligible for education scholarship \n");
											}
										break;
					}

					
				}

				}
O/p:

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 10aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter Student's year 1
Enter marks of student 67
1st year Student is not  eligible for education scholarship 
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 10aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter Student's year 3 
Enter marks of student 90
STudent is eligible for education scholarship 
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ 

*/

/*
#include<stdio.h>

void main() {

	int i , j ,num,sum=0 ;

	printf("Enter the number  :");
	scanf("%d",&num);
do{
	for(i =1 ; i<num ;i++) {

		if(num%i==0){

			printf("%d\t",i);
			sum = sum + i;
		}

	}
		
		printf("\n");
		printf("Sum of all factorials of the given number is %d \n",sum);
		if(sum == num) {
			printf("%d is a perfect number \n",num);
		}else {
			printf("%d is not a  perfect number \n",num);

		}
		printf("Do want to continue ?1 =YES  2 = N0");
		scanf("%d",&j);
}while(j==1);
}

O/p :

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter the number  :6
1	2	3
Sum of all factorials of the given number is 6
6 is a perfect number
Do want to continue ?1 =YES  2 = N02
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter the number  :28
1	2	4	7	14
Sum of all factorials of the given number is 28
28 is a perfect number
Do want to continue ?1 =YES  2 = N02
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter the number  :10
1	2	5
Sum of all factorials of the given number is 8
10 is not a  perfect number
Do want to continue ?1 =YES  2 = N02
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$

*/


/*
#include<stdio.h>

void main() {

	int i , j , num ;

	printf("Enter any number :");
	scanf("%d" , &num);

	i = num;

	while(i>=10) {

		i = i /10;

	}

	printf("First digit : %d \n",i);	

	num = num % 10;

	printf("Last Digit : %d \n" , num);

}
O/p:
etan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter any number :125
First digit : 1
Last Digit : 5
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ vim 10aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ 1449
1449: command not found
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter any number :1449
First digit : 1
Last Digit : 9
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter any number :83467
First digit : 8 
Last Digit : 7 

*/

/*
#include<stdio.h>

void main() {

	char a= 'A';

	if(a)
	  printf("Size of character data type is %ld . Hence , given variable is a character variable \n",sizeof(char));
}

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Size of character data type is 1 . Hence , given variable is a character variable
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/*
#include<stdio.h>

void main() {

		int i, n ;
		printf("ENter no. of rows");
		scanf("%d" ,&n);

		for(i = 0 ; i< n;i++) {

			int l =i , k=0;

			for(int j=1 ; j<=5 ;j++) {

				if(i>=j) {

					printf("\t");

					k++ , l++;
				
				} else {

					printf("%d\t",k*l);

					k++ , l++;
				}
			}

			printf("\n");

		}
}

O/p:


ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 10aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter no. of rows 5
0	1	4	9	16
	2	6	12	20
		8	15	24
			18	28
				32
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
*/

/*
#include<stdio.h>


void main() {

	 int i, n , k ;
	 char x ='A';
                printf("ENter no. of rows");
                scanf("%d" ,&n);

                for(i = 1 ; i<=n;i++) {

                        x ='A' ;

			for ( k =1 ; k<i ;k++) {

				printf("\t");
				x = x +2;


			}

                        for(int j=i ; j<=n*2-i ;j++) {

                                if(i%2==1) {

                                        printf("%c\t",x);

                                        x++;
                                
                                } else {

                                        printf("=\t");

                                        
                                }
                        }

                        printf("\n");

		}


}


O/p:


ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 10aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter no. of rows5
A	B	C	D	E	F	G	H	I
	=	=	=	=	=	=	=
		E	F	G	H	I
			=	=	=
				I
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/


/*
			
#include<stdio.h>
 
void main()
 
{
 
 int num,f,i,fact,r,sum=0,strong;
 
 do {

 	printf("Please enter a number to find strong number");
  	scanf("%d",&num);
 	strong=num;
 while(num!=0)
 
 {
 
     	fact=1;
 
     r=num%10;
 
    for(i=1 ;i<=r ; i++) {
 
        fact=fact*i;
 	}
 
     sum=sum+fact;
 
     num=num/10;
 
}
 
 
 
 if(sum==strong)
 
  printf("\n %d is a strong number \n",strong);
 
 else
 
  printf("\n %d is not a strong number \n",strong);


  printf("Do you want to continue 1 = YES  , 2 = NO \n");
  scanf("%d",&f);
 
  }while(f==1);
 
}


O/p:

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 10aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Please enter a number to find strong number145

 145 is a strong number
Do you want to continue 1 = YES  , 2 = NO
1
Please enter a number to find strong number125

 125 is not a strong number
Do you want to continue 1 = YES  , 2 = NO
2
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/


