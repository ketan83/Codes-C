/*
#include<stdio.h>

void main() {

	int i , j, k;
	char ch='A';

	for(i =1;i<=5 ;i++) {

		for(k=4;k>=i;k--) {

			printf("  ");
		}

		for(j=1 ; j<=i*2-1; j++) {

			printf("%c ",ch);
		}
		ch++;
		printf("\n");
	}


}
O/p:

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
        A
      B B B
    C C C C C
  D D D D D D D
E E E E E E E E E
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$

*/


/*
#include<stdio.h>

void main() {

        int i , j, k;

        for(i =1;i<=5 ;i++) {

        int x=1;
                for(k=4;k>=i;k--) {

                        printf("  ");
                }

                for(j=1 ; j<=i*2-1; j++) {

                        printf("%d ",x);
                x++;
                }
                printf("\n");
        }


}

O/p:

etan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$

*/


#include<stdio.h>
void main() {

        int i , j, k,count;

        for(i =1;i<=5 ;i++) {

         count=1;
	
                for(k=4;k>=i;k--) {

                        printf("  ");
			//x++;
                }

                for(j=1;j<=i*2-1;j++) {
				if(i<=j) {
					printf("%d ",count*count);
				count++;
				}else {
					printf("%d ",count*count*count);
					count++;
				}
                        }
         printf("\n");
        }
}


/* Clean Approach
#include<stdio.h>
void main() {
int row , col ;

for(row  = 0 ; row<=4 ; row++) {

	for(col=-3 ; col<=3; col++) {
	if(col <0){
		
		if((-col)<=row)
			printf("* ");
		else
			printf("  ");
	}
	else
	{
		if(col <= row )
			printf("* ");
		else
		   printf("  ");
	}
        }
	printf("\n");
	}
      }
ketan@ketan-tuf-fx505dt:~/ppa5$ ./a.out
      *       
    * * *     
  * * * * *   
* * * * * * * 
* * * * * * * 
*/
