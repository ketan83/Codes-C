#include<stdio.h>


/* PROGRAM 1
	void main() {



		int n ,i=1;

		printf("ENter number ");
		scanf("%d",&n);

		for(n = 100 ; n>=i ; n--) {

			printf("%d\t",n);
		}
	}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter number 100
100	99	98	97	96	95	94	93	92	91	90	89	88	87	86	85	84	83	82	81	80	79	78	77	76	75	7473	72	71	70	69	68	67	66	65	64	63	62	61	60	59	58	57	56	55	54	53	52	51	50	49	48	4746	45	44	43	42	41	40	39	38	37	36	35	34	33	32	31	30	29	28	27	26	25	24	23	22	21	2019	18	17	16	15	14	13	12	11	10	9	8	7	6	5	4	3	2	1	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$


*/


/* PROGRAM 2
	void main() {

	

                int n ,i=1;

                printf("ENter number ");
                scanf("%d",&n);

                for(n = 100 ; n>=i ; n--) {

			if(n%2==0)
                        printf("%d\t",n);
                }


	}
O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter number 100
100	98	96	94	92	90	88	86	84	82	80	78	76	74	72	70	68	66	64	62	60	58	56	54	52	50	4846	44	42	40	38	36	34	32	30	28	26	24	22	20	18	16	14	12	10	8	6	4	2	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/



/* PROGRAM 3
void main() {

	

                int n ,m ,s ;

                printf("ENter number of hours ");
                scanf("%d",&n);

		m = n*60 ; // converting hours into minutes	
		s = m * 60 ; // converting minutes into seconds	
			
		printf("%d seconds",s);
	}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 09sept.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter number of hours 2
7200 secondsketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyfl
*/


/* PROGRAM 4
	void main() {

	int i , j;

	for(i = 1 ;i<=4 ; i++) {

		for( j =4 ;j>=i ;j--) {

			if(j==1 || j ==3)
				printf( "  =  " );
			else
				printf( "  +  " );
		}
		printf("\n");
	}

	}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 09sept.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
  +    =    +    =
  +    =    +
  +    =
  +
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/






/* PROGRAM 5
	void main() {
	
	 

                int n1 ,n2,m ,s,gcd=0 ;

                printf("ENter two numbers to find out GCD  ");
                scanf("%d",&n1);
                 scanf("%d",&n2);

		int i=1;

		while(i <= n1 && i<= n2) {

			if(n1%i==0 && n2%i==0) {
					gcd =i;
				}
			i++;
		}

		printf("GCD of two numbers is %d \n", gcd);

		}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 09sept.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter two numbers to find out GCD  25 15
GCD of two numbers is 5
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter two numbers to find out GCD  81 153
GCD of two numbers is 9
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

