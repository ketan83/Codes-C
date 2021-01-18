
// C PROGRAM TO CHECK NUMBER IS PRIME OR NOT ...........
#include <stdio.h> 

void main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

    for (i = 10; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  printf("%d is a Prime number \n",n);
  }
  else {
  printf("%d is not a Prime number \n", n);
  }
      
}
/*
O/p:

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter any number n:13
13 is a Prime numberketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ vim 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter any number n:15
15 is not a Prime number
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ vim 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/*
#include<stdio.h>

void main() {

	int i , num ,avg, n, sum=0 ,rem ;

	printf("Enter number ");
	scanf("%d",&num);

	printf("Enter number of digits in  the number ");
	scanf("%d",&n);

	for ( i=1; i<=n ;i++) {

	
		if(num!=0){	
			rem = num % 10;
			num = num /10;
			sum = sum + rem;
			}


		}

			avg = sum/n;
			printf("Sum of digits of the number is %d \n",sum);
			printf("Average of digits of given  number is %d \n ", avg);
}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter number 12345
Enter number of digits in  the number 5
Sum of digits of the number is 15
Average of digits of given  number is 3
 ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ vim 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$

*/

/*
#include<stdio.h>

void main() {

        int i=0 , num ,avg, n, sum=0 ,rem ;

        printf("Enter number ");
        scanf("%d",&num);

      //  printf("Enter number of digits in  the number ");
        //scanf("%d",&n);

	
        while(num!=0) {

			if(num!=0){
                        rem = num % 10;
                        num = num /10;
                        }


                        printf(" Each  digit number in  the inputted  number are %d \n",rem);
			i++;
                        sum = sum + rem;
                }
		
		printf("Number of digits in the given number are %d \n",i);  

}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter number 12345
At counter 0 Each  digit number in  the inputted  number are 5
At counter 1 Each  digit number in  the inputted  number are 4
At counter 2 Each  digit number in  the inputted  number are 3
At counter 3 Each  digit number in  the inputted  number are 2
At counter 4 Each  digit number in  the inputted  number are 1
Number of digits in the given number are 5
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ vim 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter number 672768
At counter 0 Each  digit number in  the inputted  number are 8
At counter 1 Each  digit number in  the inputted  number are 6
At counter 2 Each  digit number in  the inputted  number are 7
At counter 3 Each  digit number in  the inputted  number are 2
At counter 4 Each  digit number in  the inputted  number are 7
At counter 5 Each  digit number in  the inputted  number are 6
Number of digits in the given number are 6
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ vim 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 07aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
Enter number 123456789
 Each  digit number in  the inputted  number are 9
 Each  digit number in  the inputted  number are 8
 Each  digit number in  the inputted  number are 7
 Each  digit number in  the inputted  number are 6
 Each  digit number in  the inputted  number are 5
 Each  digit number in  the inputted  number are 4
 Each  digit number in  the inputted  number are 3
 Each  digit number in  the inputted  number are 2
 Each  digit number in  the inputted  number are 1
Number of digits in the given number are 9
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ vim 07aug.c
*/

/*
#include<stdio.h>
void main() {

	int i=0 , num ,avg, n, sum=0 ,rem ;

        printf("Enter number ");
        scanf("%d",&num);

      //  printf("Enter number of digits in  the number ");
        //scanf("%d",&n);

        
        while(num!=0) {

                        if(num!=0){
                        rem = num % 10;
                        num = num /10;
                        }

			printf(" Each  digit number in  the inputted  number are %d \n",rem);
                        i++;
                        sum = sum + rem;
                }
                
		
                printf("Number of digits in the given number are %d \n",i);  

}

*/

/*
#include<stdio.h>
void main() {

	int x ,y,z,ch1 ,ch2 ,ch3 ;

	do{
		printf("************************BURGER BARN*************************** \n");
		printf("****************************MENU***************************** \n");
		printf("1.VEG BURGER MENU\n");
		printf("2.NON-VEG BURGER MENU \n");
		printf("Enter your choice \n ");
		scanf("%d",&ch1);

		switch(ch1){

			case 1 : do {
					 printf("1. VEG BURGER \n");
					 printf("2. VEG CHEESE BURGER \n");
					 printf("3. VEG SPECIAL BURGER \n");
					 printf("4. VEG BURGER JUMBO WITH CHEESE \n");
					 printf("Enter your choice \n");
					 scanf("%d",&ch2);

						switch(ch2) {
						
							case 1 : printf("Veg Burger Rate : 60/-");
								break; 

							case 2 : printf("Veg Cheese Burger Rate : 70/-");
								break; 

							case 3 : printf("Veg Special Burger Rate : 75/-");
								break;
								 
							case 4 : printf("Veg Burger Jumbo with Cheese  Rate : 100/-");
								break; 

							}
					printf("Do you want to continue 1=YES 2=NO ");
					scanf("%d", &y);

				 }while(y==1);

						break;

		 case 2 : do {
                                         printf("1. CHICKEN BURGER \n");
                                         printf("2. CHICKEN CHEESE BURGER \n");
                                         printf("3. CHICKEN HAM  SPECIAL BURGER \n");
                                         printf("4. CHICKEN BURGER JUMBO WITH CHEESE \n");
                                         printf("Enter your choice \n");
                                         scanf("%d",&ch3);

                                                switch(ch3) {

                                                        case 1 : printf("Chicken Burger Rate : 80/-");
                                                                break;

                                                        case 2 : printf("Chicken Cheese Burger Rate : 90/-");
                                                                break;

                                                        case 3 : printf("Chicken Ham  Special Burger Rate : 95/-");
                                                                break;

                                                        case 4 : printf("Chicken Burger Jumbo with Cheese  Rate : 100/-");
                                                                break;

                                                        }
                                        printf("Do you want to continue 1=YES 2=NO ");
                                        scanf("%d", &z);

                                 }while(z==1);

                                               
		} 
printf("Do you want to continue 1=YES 2=NO ");
scanf("%d", &x);

	}while(x==1);
}


O/p:

etan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
************************BURGER BARN***************************
****************************MENU*****************************
1.VEG BURGER MENU
2.NON-VEG BURGER MENU
Enter your choice
 1
1. VEG BURGER
2. VEG CHEESE BURGER
3. VEG SPECIAL BURGER
4. VEG BURGER JUMBO WITH CHEESE
Enter your choice
1
Veg Burger Rate : 60/-Do you want to continue 1=YES 2=NO 2
Do you want to continue 1=YES 2=NO 1
************************BURGER BARN***************************
****************************MENU*****************************
1.VEG BURGER MENU
2.NON-VEG BURGER MENU
Enter your choice
 2
1. CHICKEN BURGER
2. CHICKEN CHEESE BURGER
3. CHICKEN HAM  SPECIAL BURGER
4. CHICKEN BURGER JUMBO WITH CHEESE
Enter your choice
4
Chicken Burger Jumbo with Cheese  Rate : 100/-Do you want to continue 1=YES 2=NO 2
Do you want to continue 1=YES 2=NO 2
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$

*/
/*
#include<stdio.h>

void main() {

	int i , num ,avg, n, sum=0 ,rem ;

        printf("Enter number ");
        scanf("%d",&num);

        printf("Enter number of digits in  the number ");
        scanf("%d",&n);

        for ( i=1; i<=n ;i++) {

        
                if(num!=0){     
                        rem = num % 10;
                        num = num /10;
                        sum = sum + rem;
                        }


                }

                        avg = sum/n;
                        printf("Sum of digits of the number is %d \n",sum);
                        printf("Average of digits of given  number is %d \n ", avg);


			 while(num!=0) {

                        if(num!=0){
                        rem = num % 10;
                        num = num /10;
                        }

                      //  printf(" Each  digit number in  the inputted  number are %d \n",rem);
                        i++;
                        sum = sum + rem;
                }

                printf("Number of digits in the given number are %d \n",i);

}

*/
