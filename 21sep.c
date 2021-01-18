#include<stdio.h>
/*
void main() {

	int i, j;
	char a[] = {'S','T','A','C','K'};

	for(i=0 ; i<5 ;i++) {

		for(j=0 ;j<=i ;j++) {

			printf(" %c ",a[j]);
		}
		printf("\n");
	}
}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 21sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 S
 S  T
 S  T  A
 S  T  A  C
 S  T  A  C  K
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/*
	void main() {

		int i ,a[] = { 4,9 ,16 ,36,49 };
		int b[] = { 2 ,3 ,4 ,5 ,7 };

		printf(" array a elements ");
		for(i=0 ; i<5 ;i++) {
			printf(" %d ",a[i] );
		}
		printf("\n");
		printf(" array b elements ");
		for(i=0 ; i<5 ;i++) {
			printf(" %d ",b[i] );
		}
		printf("\n");
		for(i=0 ; i<5 ;i++) {

			if(a[i]%b[i] ==0) {
				printf ( " 1 ");
			} else {
				printf ( " -1 ");
			}
		}
		printf("\n");
		printf("Note : 1 indicates that elements of first array is square of elements of second array \n");
		printf("Note : -1 indicates that elements of first array is not a square of elements of second array \n");
	}
O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 21sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 array a elements  4  9  16  36  49
 array b elements  2  3  4  5  7
 1  1  1  -1  1
Note : 1 indicates that elements of first array is square of elements of second array
Note : -1 indicates that elements of first array is not a square of elements of second array
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


void main() {

	int n;
	printf("ENter size of array \n");
	scanf("%d",&n);
	int i,t,j,k, a[n] ;

       	for(i=0;i<n;i++) {
                scanf(" %d ",&a[i]);
        }

	printf("array a elements \n");
	for(i=0;i<n;i++) {
		printf(" %d ",a[i]);
	}

	printf("\n");
	/*
	 int i=0,temp=0;

    for(i=0 ; i<n/2 ; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
*/
	printf("array a elements after swapping \n");
	for(i=0;i<6;i++) {
		printf(" %d ",a[i]);
	}
	printf("\n");
}

/*
	void main() {

		int a[] = {1,0,2,1};
		int i ,j,count;

		for(i=0 ;i<4 ; i++) {

			for(j=i+1 ;j<4 ;j++) {

				if(a[i] == a[j]) {
					count++;
				}
				printf("%d occurs %d times \n",a[i] ,count);
			}
		}
	}
	*/
