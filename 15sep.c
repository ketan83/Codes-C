#include<stdio.h>

void bubble (int a[10] , int n) {
	int i,j,t;
 for (i=0 ; i<n ; i++) {

                for(j=0 ; j<n-i-1 ; j++) {

                        if(a[j] > a[j+1]) {

                                t = a[j] ;
                                a[j] = a[j+1] ;
                                a[j+1] =t;
                           printf(" %d ", a[i] );
                        }
                }
        }
}


	void display(int a[10] , int n) {

			int i;
 for(i=0 ; i<=n-1 ; i++) {

                printf(" %d ", a[i] );

        }


	}	
	void main() {

	int i , j ,t;
	int n;
	printf("Enter size ");
	scanf("%d",&n);

	int a[n];

	printf("Enter elements ");
	 for(i=0 ; i<=n-1 ; i++) {

                scanf(" %d ", &a[i] );

        }


	bubble(a,n);
	display(a,n);





}
