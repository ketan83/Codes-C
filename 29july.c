
#include<stdio.h>

void main() {

/* Program2 :
	int i , j,k,count;

	for (i=1;i<=5;i++) {
		count  =1;
		for(k=1;k<=i;k++){
			printf("  ");
			count++;
		}

		for(j=5;j>=i;j--) {
				
			printf(" %d",count+i-2);
			count++; 
		}
		printf("\n");
	}


}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
   1 2 3 4 5
     3 4 5 6
       5 6 7
         7 8
           9
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/* Program 1:
  int i , j,k,count;
		count=0;
        for (i=1;i<=5;i++) {
                for(k=1;k<=i;k++){
                        printf("  ");
                       count++;
                }

                
                for(j=5;j>=i;j--) {
                        
		if( j==1 ) {	
                        printf(" %d",count*i);
                         count++;
		}
		if( j==2 ) {	
                        printf(" %d",count*i);
                         count++;
		}
		if( j==3 ) {	
                        printf(" %d",count*i);
                         count++;
		}
		if( j==4 ) {	
                        printf(" %d",count*i);
                         count++;
		}
		if( j==5 ) {	
                        printf(" %d",count*i);
                         count++;
		}
                }
                printf("\n");
        }
}
*/


/* Program4 :
        int i , j,k,count;

                count  =1; 
        for (i=1;i<=5;i++) {
                for(k=1;k<=i;k++){
                        printf("   ");
                 //       count++;
                }

                for(j=5;j>=i;j--) {
			
			if( i==1 || i==3 ||i==5) {

			printf(" %d ",count*count);
				count++;
		
			}

			if( i==2 || i==4) {

			printf("  %d",count*count*count);
				count++;
		
			}
                }
                printf("\n");
        }


}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
    1  4  9  16  25
        216  343  512  729
          100  121  144
              2197  2744
*/

int i , j,k,count,num;

        for (i=1;i<=5;i++) {
                count  =1;
                for(k=1;k<=i;k++){
                        printf("  ");
                      //  count++;
                }
			
                for(j=5;j>=i;j--) {

                        printf(" %d",factorial(i));
                        count++;
                }
                printf("\n");
        }



		int factorial(int n) {

			int res =1,l,m;
			for(m=2;m<=n;m++){
				res*=m;
			}
		}
}
