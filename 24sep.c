#include<stdio.h>

/*
	void main() {

	int a =10;
	int *p;

	p=&a;
	printf("*p = %d\n",*p );
	*p = 20;
	printf("*p = %d\n",*p );
	printf("a = %d\n", a);
}

  ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 24sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
*p = 10
*p = 20
a = 20
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ 


   */

	/*
	void main() {

		int i ,n;

		printf(" Enter no. to create table ");
		scanf("%d",&n);

		int *p;
		p = &n;

		for(i = 1 ; i<=10 ; i++) {

			printf("%d x %d = %d \n" ,  *p ,i, i*(*p));
		}

		printf(" \n ");



	}

  O/p:
  ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 24sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter no. to create table 4
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40

 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter no. to create table 3
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30

 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/*
	void main() {

		int const i = 10;
		int j = 20;
		int const *ptr = &i;
		printf("ptr : %d \n",*ptr);
		*ptr = 100;
		ptr  =&j;
		printf("ptr :%d\n",*ptr);

		}

    After Compiling we see error :
    ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 24sep.c
24sep.c: In function ‘main’:
24sep.c:85:8: error: assignment of read-only location ‘*ptr’
   *ptr = 100;
        ^
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$


 here in this snippet the compiler has shown this error ,bcoz  pointer variable is declared as const also variable i is declared const so ptr variable will store address of that variable which is declared const as *ptr = 100 i.e ptr is now storing new value 100 at the address of 'a' but 'a' is const variable also it is trying to get address of another variable i.e j but ptr will point only to 'a' as both are const variables pf type integer  
*/

	/*
	void main() {

		int y , r ;
		int  bl ;
		float c ;

		int *ip ;
		char *cp;
		float *fp;

		printf("ENter student details \n");
		printf(" ENter Year of your College  , Roll No \n");
		scanf("%d%d",&y,&r);

		printf("Do you have backlogs if yes then print no. of backlogs  and at last write your CGPA \n");
		scanf("%d%f",&bl,&c);

		//printf("Do you have backlogs if yes then print no. of backlogs  and at last write your CGPA \n");
		//scanf("%c%f",&bl,&c);
		ip = &y;
			printf(" Year of College = %d \n",*ip);
		ip = &r;
			printf(" Roll No  = %d \n",*ip);
		ip = &bl;
		printf(" No. of Backlogs = %d \n",*ip);
		
		fp = &c;
		printf(" CGPA = %f \n",*fp);
	}

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 24sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter student details
 ENter Year of your College  , Roll No
2020 40
Do you have backlogs if yes then print no. of backlogs  and at last write your CGPA
0 6.99
 Year of College = 2020
 Roll No  = 40
 No. of Backlogs = 0
 CGPA = 6.990000
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

 */

	void main() {

		 int y , r ;
                int  bl ;
                float c ;

                int *ip ;
                char *cp;
                float *fp;

                printf("ENter student details \n");
                printf(" ENter Year of your College  , Roll No \n");
                scanf("%d%d",&y,&r);

                printf("Do you have backlogs if yes then print no. of backlogs  and at last write your CGPA \n");
                scanf("%d%f",&bl,&c);

                //printf("Do you have backlogs if yes then print no. of backlogs  and at last write your CGPA \n");
                //scanf("%c%f",&bl,&c);
                ip = &y;
                        printf(" Year of College = %d \n",*ip);
                ip = &r;
                        printf(" Roll No  = %d \n",*ip);
                ip = &bl;
                printf(" No. of Backlogs = %d \n",*ip);

                fp = &c;
                printf(" CGPA = %f \n",*fp);




