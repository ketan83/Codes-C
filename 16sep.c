#include<stdio.h>

/*
void main() {

	int a[] = { 10 ,20 ,15,30 ,60};

	int i,largest1,largest2;

	largest1 = a[0];
	largest2 = 0;
	for(i=0 ; i<5 ;i++) {

		if(largest1 <a[i]) {
			largest1 = a[i];
		}

	}

	printf("largest no, in array a is %d \n ",largest1);
	printf("2nd largest no, in array a is %d \n ",largest2);

}
*/

/*
	void main() {

		int i , j,t, a[] = { 2,5,3,7,8,1,4,6,9,0};

		printf("Unsorted Elements ");
  for(i = 0 ; i<=9 ; i++) {

                        printf(" %d ",a[i]);
                }
                printf("\n");

		for(i = 0 ; i<=10-1 ; i++) {

			for(j=0 ; j<=10-i-1 ; j++) {

				if(a[j] > a[j+1]) {
				
					t =a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
			}
		}

		printf("Sorted Elements ");
		for(i = 0 ; i<=9 ; i++) {

			printf(" %d ",a[i]);
		}
		printf("\n");
	}
O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Unsorted Elements  2  5  3  7  8  1  4  6  9  0
Sorted Elements  0  1  2  3  4  5  6  7  8  9
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/*
	void main() {

		int a[] = { 9 ,12, 153 , 1,2,370 ,5,67,3 };
		int  i, sum =0 ,rem=0 ,num ,n2,b[10] ;

		printf(" Array elements ");
		for(i = 0 ; i<9 ; i++) {

			printf(" %d ",a[i]);
		}
		printf("\n");

		for(i = 0 ; i<9 ; i++) {
		
			num = a[i];		
			n2 = num;
			while(num!=0) {

				rem = num % 10;
				sum = sum + (rem*rem*rem);
				num = num /10;
				}
				
			if(n2 == sum) {
					b[i] = a[i];
					}
		
		}	
		for(i = 0 ; i<9 ; i++) {

			printf(" %d ",b[i]);
		}
	}
*/

	void main() {

        int a[] = { 10 ,20 ,15,30 ,60};

        int i,largest1,small;

        largest1 = a[0];
        small = 0;
        for(i=0 ; i<5 ;i++) {

                if(largest1 <a[i]) {
                        largest1 = a[i];
                }

		if(smal a[i]) {


        }

        printf("largest no, in array a is %d \n ",largest1);

