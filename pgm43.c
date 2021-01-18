#include<stdio.h>

void main() {

	int i=0;

	while(i<15) {

	    if(i%2==0) {
		 
		 i++;
		continue;
	} else {

		printf(" %d ",i);
	}
	i++;
	}
	printf("\n");
}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 1  3  5  7  9  11  13
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$


