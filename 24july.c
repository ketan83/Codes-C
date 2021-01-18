#include<stdio.h>

void main() {

	/*
	int i , j ,k, rows =5,cols =5, x ;
       // printf("Enter no. of rows & columns ");
        //scanf("%d%d",&rows,&cols);


        for( i=1; i<= rows ;i++) {
			x=1;
		for(j=4 ;j>=i ;j--) {

			printf("  ");
			x++;
		}
                              
                for( j= 1; j<=i ;j++) {
                                
			printf("%d ",x*x);
			x++;

                }
                                printf("\n");
        }


Output :

	ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
        25
      16 25
    9 16 25
  4 9 16 25
1 4 9 16 25
*/

	/*
		 int i , j ,k, rows =5,cols =5;
		 char ch ;
       // printf("Enter no. of rows & columns ");
        //scanf("%d%d",&rows,&cols);


        for( i=1; i<= rows ;i++) {
                        ch='A';
                for(j=4 ;j>=i ;j--) {

                        printf("  ");
                        ch++;
                }
                              
                for( j= 1; j<=i ;j++) {
                                
                        printf("%c ",ch);
                        ch++;

                }
                                printf("\n");
        }

Output :
	ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
        E
      D E
    C D E
  B C D E
A B C D E
ketan@ketan-tuf-fx505dt:~/ppa5/da
*/
                


	/* Program 1 
	  int i , j , k,x;

         for(i =1 ;i<=5;i++){
             
       char ch='A' ;

                for(k=4;k>=i;k--) {

                        printf("  ");
                }

                for(j=1;j<=i;j++) {

                        printf("%c ",ch+i-1);
                        ch++;
                        }

                        printf("\n");

		 }

	
}

Output :
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 24july.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
        A
      B C
    C D E
  D E F G
E F G H I
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/* Program2 	 
          int i , j , k,x;

         for(i =1 ;i<=5;i++){
             
       char ch='A' ;

                for(k=4;k>=i;k--) {

                        printf("  ");
                }

                for(j=1;j<=i;j++) {

                       	if(j%2==1) {
			       printf("0 ");
			}else {
			       printf("1 ");
			}
		 				
                       }
		printf("\n");

        
}
Output :

etan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
        0
      0 1
    0 1 0
  0 1 0 1
0 1 0 1 0
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/*
	  int i , j ,k, rows =5,cols =5, x ;
       // printf("Enter no. of rows & columns ");
        //scanf("%d%d",&rows,&cols);


        for( i=1; i<= 5 ;i++) {
                        x=1;
			
                //for(k=4 ;k>=i;j--) {

                  //      printf("  ");
                    //x++; 
                //}
                
                              
                for( j= i; j>=1 ;j--) {
                                
                        printf("%d ",j);
                        x = x +1;

                }
                                printf("\n");

                
		}

Output :
 ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
*/
}

