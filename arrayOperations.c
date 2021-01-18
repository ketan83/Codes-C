#include<stdio.h>
	/*
	void main() {

                int i , j ,r ,c ;

                printf(" Enter no. of rows and columns \n");
                scanf("%d%d",&r,&c);

                int a[r][c], sum=0;

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

		for(i=0 ; i<r ; i++) {
			sum=sum+a[i][i];
		}

		if(sum%2==0){
			printf(" As the ssum is even transpose of matrix operation will be performed \n");
			  for(i=0 ; i<r ; i++) {
                        for(j=0 ; j<c ;j++) {
                                printf("  %d  ", a[j][i]);
                        }
                        printf("\n");
                }
		} else {

			printf("Sum is odd so no transpose operation will be done \n");
			
			}

	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
 Enter no. of rows and columns
3
3
Enter elements in an array
12
14
16
21
24
26
6
18
10
 elements in a 2D array  are
  12    14    16
  21    24    26
  6    18    10
 As the ssum is even transpose of matrix operation will be performed
  12    21    6
  14    24    18
  16    26    10
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$
*/
/*
	 void main() {

                int i , j ,r ,c ;

                printf(" Enter no. of rows and columns \n");
                scanf("%d%d",&r,&c);

                int a[r][c], sum=0;
		int max =0;

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
				if(max < a[r][c]){
					max = a[r][c];
				}
                        }
                        printf("\n");
                }
		printf(" Largest no. in an array is %d \n ",max);
	 }

*/

	/*
	  void main() {

                int i , j ,r ,c ;
		int count;

                printf(" Enter no. of rows and columns \n");
                scanf("%d%d",&r,&c);

                int a[r][c], sum=0;
                int max =0;

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
                for(i=0 ; i<r ; i++) {
                        for(j=0 ; j<c ;j++) {

				if(a[i][j]<0) {
				count++;
				}
			}
		}
		printf(" No. of -ve elements in an array is %d ",count); 		
	  }
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc arrayOperations.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
 Enter no. of rows and columns
3
3
Enter elements in an array
1
2
3
-4
-1
5
5
-4
0
 elements in a 2D array  are
  1    2    3
  -4    -1    5
  5    -4    0
 No. of -ve elements in an array is 3 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$
*/

	/*
	 void main() {

                int i , j ,r ,c ;
                int count;

                printf(" Enter no. of rows and columns \n");
                scanf("%d%d",&r,&c);

                int a[r][c], sum=0;
                int temp =0;

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
                for(i=0 ; i<r ; i++) {
                        for(j=0 ; j<1 ;j++) {

				a[i][j] = a[i][j] + a[i][c-1];
				a[i][c-1] = a[i][j] - a[i][c-1];
				a[i][j] = a[i][j] - a[i][c-1];

                        }
                }

		  printf(" elements in a 2D array  are \n");
                for(i=0 ; i<r ; i++) {
                        for(j=0 ; j<c ;j++) {
                                printf("  %d  ", a[i][j]);
                        }
                        printf("\n");
                }

          }
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc arrayOperations.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
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
 elements in a 2D array  are
  3    2    1
  6    5    4
  9    8    7
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$
*/



	void main() {

		int a[] = { 10 ,20, 30,40,50 };
		int n = 5;
		int i;

		int index =3;

		printf(" Displaying elements of an array \n");
		for(i=0 ; i <n ; i++) {

			printf(" %d ",a[i]);
		}
		printf("\n");
	

	printf(" removing element at index  = %d \n ",index);
	for(i=index ; i<n ; i++){
		a[i] = a[i+1];
	}
		printf(" Displaying elements of an array after deletion  \n");
		n = n-1;
		for(i=0 ; i <n ; i++) {

			printf(" %d ",a[i]);
		}
		printf("\n");
		int element = 60;
		for(i=n ; i>=index ; i--) {
			a[i+1] = a[i];
		}
		a[index] = element;
		printf(" Displaying elements of an array after insertion \n");
		n = n+1;
		for(i=0 ; i <n ; i++) {

			printf(" %d ",a[i]);
		}
		printf("\n");
		 index = 2;
		 element = 70;
                for(i=n ; i>=index ; i--) {
                        a[i+1] = a[i];
                }
                a[index] = element;
                printf(" Displaying elements of an array after insertion \n");
                n = n+1;
                for(i=0 ; i <n ; i++) {

                        printf(" %d ",a[i]);
                }
                printf("\n");

	

		}

