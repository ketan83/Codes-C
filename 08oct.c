
	#include<stdio.h>
	/*
	void main() {

		int i , j ,r ,c ;

		printf(" Enter no. of rows and columns \n");
		scanf("%d%d",&r,&c);

		int a[r][c];

		printf("Enter elements in an array \n");
		for(i=0 ; i<r ; i++) {
			for(j=0 ; j<c ;j++) {
				scanf("%d",&a[i][j]);
			}
		}

		printf(" elements in a 2D array  are \n");
		for(i=0 ; i<r ; i++) {
			for(j=0 ; j<c ;j++) {
				printf("  %d  ", a[i][j]);
			}
			printf("\n");
		}

		
		printf("Transpose of a matrix \n");
		for(i=0 ; i<r ; i++) {
			for(j=0 ; j<c ;j++) {
				printf("  %d  ",a[j][i]);
			}
			printf("\n");
		}
	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 08oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter no. of rows and columns 
3
3
Enter elements in an array 
1    
2
3
4
5
6
7
8
9
 elements in a 2D array  are 
  1    2    3  
  4    5    6  
  7    8    9  
Transpose of a matrix 
  1    4    7  
  2    5    8  
  3    6    9  
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ^C
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ vim 08oct.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ 
*/

	/*
	void main() {

		int n;
	printf("Enter size of array ");
	scanf("%d",&n);

	int a[n] ,i ;

	printf(" Enter elements in an array ");
	for(i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	printf(" Elements in an array ");
	for(i=0 ; i<n ; i++){
		printf(" %d ",a[i]);
	}

		printf("\n");
	
	}
*/
	/*
	 void main() {

                int i , j ,r ,c ;

                printf(" Enter no. of rows and columns \n");
                scanf("%d%d",&r,&c);

                int a[r][c];

                printf("Enter elements in an array \n");
                for(i=0 ; i<r ; i++) {
                        for(j=0 ; j<c ;j++) {
                                scanf("%d",&a[i][j]);
                        }
                }

                printf(" elements in a 2D array  are \n");
                for(i=0 ; i<r ; i++) {
                        for(j=0 ; j<c ;j++) {
                                printf("  %d  ", a[i][j]);
                        }
                        printf("\n");
                }

                
               // printf("Transpose of a matrix \n");
                for(i=0 ; i<r ; i++) {
                        for(j=0 ; j<c ;j++) {
				if(a[i][j] == -a[j][i] ){ 
                                printf(" The matrix made is skew symmetric matrix \n");
				} else {
                                printf(" The matrix made is not a skew symmetric matrix \n");
					}
                        }
                        printf("\n");
                }
        }
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Enter no. of rows and columns
3
3
Enter elements in an array
0
2
-45
2
0
4
-45
-4
0
 elements in a 2D array  are
  0    2    -45
  2    0    4
  -45    -4    0
 The matrix made is skew symmetric matrix
 The matrix made is not a skew symmetric matrix
 The matrix made is not a skew symmetric matrix

 The matrix made is not a skew symmetric matrix
 The matrix made is skew symmetric matrix
 The matrix made is skew symmetric matrix

 The matrix made is not a skew symmetric matrix
 The matrix made is skew symmetric matrix
 The matrix made is skew symmetric matrix

ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/
	void main() {

	int a, b;
	printf(" Enter 2 numbers from the users \n");
	scanf("%d%d",&a,&b);

	int *iptr1 = &a;	
	int *iptr2 = &b;

	int 	
