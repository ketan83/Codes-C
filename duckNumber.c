 

	#include<stdio.h>
	void main() {

		//12345 --> False
		// 0012345 --> False
		// 120345 --> True
		
		int num ;
		int rem = 0;
		printf(" Enter no. ");
		scanf("%d",&num);
		int x =num;
		while(num!=0) {

			rem = num % 10;

			if(rem ==0 ) { 
			
				printf(" %d is a duck no \n ",x);
				break;
	}

			    num =num / 10;
		}
	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc duckNumber.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 Enter no. 120345
 120345 is a duck no
 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$

