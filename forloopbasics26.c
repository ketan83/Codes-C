
// PROGRAM TO CHECK WHETHER THE NUMBER IS PRIME OR NOT
#include<stdio.h>

void main() {

	int i ,j ,num ,flag;  // flag variable used for indication

	printf("Enter  a no.");
	scanf("%d",&num);

	for(i=2  ; i<=num/2 ;i++) {

		if(num%i==0) {

		flag =1;
		}
	}


	if(flag==1)
	printf("%d is not a prime number \n",num);
	else
	printf("%d is  a prime number \n",num);	
}
/*
O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ cc forloopbasics26.c
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ ./a.out
Enter  a no.13
13 is  a prime number
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ ./a.out
Enter  a no.15
15 is not a prime number
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ ./a.out
Enter  a no.2
2 is  a prime number
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ ./a.out
Enter  a no.1
1 is  a prime number
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ ./a.out
Enter  a no.0
0 is  a prime number
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$ ./a.out
Enter  a no.16
16 is not a prime number
ketan@ketan-tuf-fx505dt:~/ppa5/logicbuilding$
*/
