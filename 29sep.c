#include<stdio.h>
  /*
	void main() {

	int a[] = { 10 ,20 ,30 ,40 ,50 };

	int  i;
	for(i=0 ; i <5 ;i++) {

		printf(" %d ",*(a+i) );
	}

printf("\n");

	O/p:
        ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 10  20  30  40  50 
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ }
*/

/*
	void main() {

		char ch1 ,ch2 ;
		char *cptr1 = 0;
		char *cptr2 = 0;

		printf("Enter 2 characters \n");
		scanf("%c%c",&ch1,&ch2);

		cptr1 = &ch1;
		cptr2 = &ch2;

		cptr1 = cptr1 + 1; //cptr1 = cptr1 + (1*(sizeof data type of pointer variable)) = 100(say address) + (1*1) = 101 at this address 'B' is there so this will print 'B' 
		printf("After incrementing *cptr1 = %c\n",*cptr1);
		cptr2 = cptr2 + 1; // cptr2 = cptr2 + 1 = 101(say address) + (1*1) = 102 at this address no character alphabet is there & since the pointer is pointing to NULL so this will print nothing
		printf("After incrementing *cptr2 = %c\n",*cptr2);
	}
	O/p;
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 29sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter 2 characters
AB
After incrementing *cptr1 = B
After incrementing *cptr2 = 
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ vim 29sep.c

	EXPLANATION :  As we know  variable is used to store value , so variable is having some address in memory (RAM) so if one charcter variable is having address say 100 so another variable will have address                        101 and in this way variables are allocated address in memory 
*/

 /*
	void main() {

		int a[] = { 10 ,20 ,30 ,40 ,50};
		int *iptr = a; // array name itself is address of 1st element

		iptr =iptr +2;  // iptr = iptr + (2*(sizeof data type of pointer variable)) = 100(say) + (2*4) = 100 + 8 = 108
		printf("Address of iptr = %p\n",&iptr);
		printf("%d\n",*iptr); 

		iptr =iptr +3;  // iptr = iptr + 3 = 108 + (3*4) = 120 and at this no value is there so garbage value will be there
		printf("Address of iptr = %p\n",&iptr);
		printf("%d\n",*iptr);

		iptr =iptr +1; // iptr = iptr + 1 = 120 + (1*4) = 124 so garbage value will be there at this address
		printf("Address of iptr = %p\n",&iptr);
		printf("%d\n",*iptr);
	}

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 29sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Address of iptr = 0x7fff509fe258
30
Address of iptr = 0x7fff509fe258
32767
Address of iptr = 0x7fff509fe258
1341076736
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ vim 29sep.c
 */
	/*
	void main() {

		int n;
		printf("ENter array size ");
		scanf("%d",&n);

		char a[n] ;
		char *iptr = a;
		int i;
		for(i=0 ; i<n ; i++) {
			scanf("%c",&a[i]);
		}
		for(i=0 ; i<n ; i++) {
			printf(" %c",a[i]);
		}
		printf("\n");

		for(i= 0 ; i<n ;i++) {
			
			if(a[i]>=65  && a[i]<=96) {
				printf(" %c",(*iptr) + 32);
				iptr++;
			} else {
				printf(" %c",(*iptr) - 32);
				iptr++;
			}
		}
	}	
O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 29sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
ENter array size 5
COre
 
 C O r e
 � c o R E ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ 

*/

	

/*
	void main() {
		int a[] = { 1,2,3 ,4,5};
		int *iptr = a;
		int i;
		for(i=0 ; i<5 ;i++) {

			if(a[i]%2==0)
				printf(" %d ",*(a+i) + 10);
				else
				printf(" %d ",a[i]);
		}
	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 1  12  3  14  5 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ clear

*/
