
/*   ARMSTRONG NUMBER 
 
     	153 = 1'S CUBE + 5'S CUBE  + 3'S CUBE = 153

   */
	#include<stdio.h>
/*	
	void main() {

		int num =153;
		int dup = num;
		int rem =0;
		int sum = 0;

		while(num!=0) {

			rem = num % 10;

			sum  = sum + ( rem * rem * rem);

			num = num / 10;
		}

		if(dup == sum ) {
			printf(" %d is an Armstrong no. \n" ,dup);
		} else {
			printf(" %d is not an Armstrong no. \n" ,dup);
		}
	}
o/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc ArmstrongNumber.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 153 is an Armstrong no.
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/

 /*
	void main() {

                int num =370;
                int dup = num;
                int rem =0;
                int sum = 0;

                while(num!=0) {

                        rem = num % 10;

                        sum  = sum + ( rem * rem * rem);

                        num = num / 10;
                }

                if(dup == sum ) {
                        printf(" %d is an Armstrong no. \n" ,dup);
                } else {
                        printf(" %d is not an Armstrong no. \n" ,dup);
                }
        }
	O/p;
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc ArmstrongNumber.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 370 is an Armstrong no.
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/
