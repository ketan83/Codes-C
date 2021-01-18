#include<stdio.h>

/*
void main() {

	// deficient number 
	// 
	// 12-> 1,2,3,4,6 --> 1  +  2 + 3 + 4 + 6 --> 16 is  an abundunt  number 
	// 22-> 1 ,2 ,11 --> 1 + 2 +11 ==> 13 is a deficient number 
	
	int i ,n=22 ,sum=0;

	for(i=1 ; i<n ;i++) {

		if(n%i==0)
			sum = sum + i;

	}

	printf("sum = %d \n",sum);

	if(n > sum) {
		printf(" %d is a deficient number \n", n);
	} else {
		printf(" %d is a deficient number \n", n);
	}
}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc deficient_abunduntNumberpgm.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
sum = 14
 22 is a deficient number
*/

	/*
	void main() {

        // abundunt number 
        // 
        // 12-> 1,2,3,4,6 --> 1  +  2 + 3 + 4 + 6 --> 16 is an abundunt  number 
        // 22-> 1 ,2 ,11 --> 1 + 2 +11 ==> 14 is a deficient number  
        
        int i ,n=12 ,sum=0;

        for(i=1 ; i<n ;i++) {

                if(n%i==0)
                        sum = sum + i;

        }

        printf("sum = %d \n",sum);

        if(n < sum) {
                printf(" %d is an  abundunt number \n", n);
        } else { 
                printf(" %d is not an abundunt  number \n", n);
        }
}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc deficient_abunduntNumberpgm.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
sum = 16
 12 is an  abundunt number
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
	*/
