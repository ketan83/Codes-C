/*  SPY NUMBER EXAMPLE 
 *  1 . 1412 = [(1+4+1+2 =8)] && (1*4*1*2 =8)]
 *  2 . 132 = [(1+3+2 =6)] && (1 * 3 * 2 = 8)]
 *
 *
 * */



#include<stdio.h>

/*
void main() {

	int num =1412;
	int sum = 0;
	int mult =1;
	int rem = 0;
	int x =num;
	while(num!=0) {

		rem = num % 10;
		sum = sum + rem;
		mult  = mult * rem;

		num = num /10;
	}

	if(sum == mult) {

		printf(" %d is a spy number \n",x);
	} else {
		printf(" %d is not a  spy number \n" ,x);
	}
} O/p;

	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc spyNumberpgm.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 1412 is a spy number 
 */

/*
	void main() {

        int num =132;
        int sum = 0;
        int mult =1;
        int rem = 0;
        int x =num;
        while(num!=0) {

                rem = num % 10;
                sum = sum + rem;
                mult  = mult * rem;

                num = num /10;
        }

        if(sum == mult) {

                printf(" %d is a spy number \n",x);
        } else {
                printf(" %d is not a  spy number \n" ,x);
        }
} 

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc spyNumberpgm.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 132 is a spy number
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/
