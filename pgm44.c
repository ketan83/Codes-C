#include<stdio.h>

void main() {

		int  i=1 ;
		while (i<=21) {

			if(i%5==0) {
				
				i++;
				continue;
			
			} else {

				printf(" %d ",i);
			}
			i++;

		}
		printf("\n");

}

ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc pgm44.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 1  2  3  4  6  7  8  9  11  12  13  14  16  17  18  19  21
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$

