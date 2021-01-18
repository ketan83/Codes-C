

	#include<stdio.h>
/*
	void armstrong( int num , int sum , int rem) {

			int x = num;
		while(num!=0) {

			rem = num % 10;
			sum = sum + rem * rem * rem;
			num = num / 10;

		}
	
		if(x==sum)
	
			printf("%d is an armstrong number \n",sum) ;
			else
			printf("%d is not an armstrong number \n",sum) ;
			

	}

	void main() {

		int  num , sum =0 , rem = 0;

		printf(" Enter number ");
		scanf("%d",&num);

		armstrong(num , sum , rem);

	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 20oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter number 153
153 is an armstrong number
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ vim 20oct.c
*/

	/*
	void fact(int num){ 

			int i , fact1 = 1;

			for(i=num ; i>=1 ; i--) {

				fact1 = fact1 * i;
			}

			printf(" Factorial of %d is %d \n" , num , fact1);
	}


	

	void main() {

			int num;
		printf(" Enter number ");
		scanf("%d",&num);

		fact(num);
	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 20oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter number 6
 Factorial of 6 is 720
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter number 10
 Factorial of 10 is 3628800
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter number 5
 Factorial of 5 is 120
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/*	
	void prime(int a[]) {

		int i , flag=0 ,j;
		for(i=0 ; i<5 ; i++) {
			
			for(j=2 ; j<=a[i]/2 ; j++) {

				if(a[i]%j==0){
					flag++;
				}
			}

			if(flag == 0) {
				printf(" %d is prime no. \n",a[i]);
			} else {
				printf(" %d is not a prime no. \n",a[i]);
			}
		}
	}

	void main() {

		int a[] = { 1,2,3,4,5};
		
		prime(a);
	}
O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 20oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 1 is prime no.
 2 is prime no.
 3 is prime no.
 4 is not a prime no.
 5 is not a prime no.
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/
	
/*
	void pallindrome( int num) {

		int dup ;
		dup = num ;
		int rem = 0;
		int reversedN = 0;

		while(num!=0) {
			rem = num % 10 ;
			reversedN = reversedN * 10  + rem ;

			num /=10;
				}
		if(dup == reversedN ) {
			printf("%d is a paalindrome number \n",dup);
		} else {
			printf("%d is not a paalindrome number \n",dup);
		}
	}

	void main() {

		int num ;
		printf(" Enter number ");
		scanf("%d",&num);

		pallindrome(num);
	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 20oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter number 101
101 is a paalindrome number
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter number 1223
1223 is not a paalindrome number
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ vim 20oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 20oct.c

*/

	/*
		void neon (int num ) {

			int rem = 0 , sum=0 , x ,square =0;
				square = num * num;
			       x =square;	
			while(square!=0) { 
				rem = square % 10;
				sum = sum + rem ;
				square /= 10;
			}

			if(num == sum ) 
				printf(" %d is a neon number \n", num) ;
				else
				printf(" %d is not a neon number \n", num) ;
		}
		
	     void main() {

                int num ;
                printf(" Enter number ");
                scanf("%d",&num);

                neon(num);
        }

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 20oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter number 9
 9 is a neon number
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter number 12
 12 is not a neon number
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/
