	#include<stdio.h>

	void main() {

		int i ,j, a[10][10] , r, c ;

		printf(" Enter number of rows and columns ");
		scanf("%d%d",&r,&c);

		printf("Enter elements in the matrix \n");

		for(i=0 ; i <r ; i++) {

			for(j=0 ; j<c ;j++) {

				scanf("%d",&a[i][j]);
			}
			printf("\n");
		}


			printf("Elements in the matrix \n");
			 for(i=0 ; i <r ; i++) {
                        
                        for(j=0 ; j<c ;j++) {
                                
                                printf(" %d ",a[i][j]);

                        }       
                        printf("\n");

			if(i==1 && j==1){
				printf(" Given matrix is an identity matrix \n");
			
			}
                    }       
                                       
	}
