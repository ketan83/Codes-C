
#include<stdio.h>

	/*
	void main() {

	int x=0 ,i , j,y;

	for(i=0 ; i<5 ;i++) {
		y = i+1;
		for(j=0 ; j<5 ; j++) {

			if(i%2==0)
			       printf(" %d ",i+1);
				else
				printf(" %d ",y++);

		}
	printf("\n");
	}
}

	O/p;
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc patterns.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 1  1  1  1  1
 2  3  4  5  6
 3  3  3  3  3
 4  5  6  7  8
 5  5  5  5  5
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$

*/


	/*
	void main() {

        int x=1 ,i , j,y;
	char ch = 'A';
        for(i=0 ; i<5 ;i++) {
                y = i+1;
                for(j=0 ; j<5 ; j++) {

                        if(i==0 || i==2 || i==4)
                               printf(" %c ",ch);
                                else
                                printf(" %d ",x++);

                }
        printf("\n");
        }
}
	O/P;
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc patterns.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 A  A  A  A  A
 1  2  3  4  5
 A  A  A  A  A
 6  7  8  9  10
 A  A  A  A  A
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/
/*
		 void main() {

        int x=1 ,i , j,y;
        char ch = 'A';
        for(i=0 ; i<5 ;++i) {
		x =x+5;                
                for(j=0 ; j<4 ; ++j) {

                                printf(" %2d ",x*(j+1));
			

                }
        printf("\n");
        }
}

*/
	/*
	void main() {

        int x=1 ,i , j,y;
        char ch = 'A';
        for(i=0 ; i<5 ;i++) {
                y = i+1;
                for(j=0 ; j<5 ; j++) {

                        if(i==0 || i==2 || i==4)
                               printf(" %c ",ch++);
                                else
                                printf(" %d ",x++);

                }
        printf("\n");
        }
}
	O/p;
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc patterns.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 A  B  C  D  E
 1  2  3  4  5
 F  G  H  I  J
 6  7  8  9  10
 K  L  M  N  O
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/


/*
	void main () {

		int i , j;

		for(i=1 ; i<=5 ; i++) {

			for(j=5 ; j>=1 ; j--) {

				printf(" %d ",j);
			}
			printf("\n");
		}
	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 5  4  3  2  1
 5  4  3  2  1
 5  4  3  2  1
 5  4  3  2  1
 5  4  3  2  1
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/


	/*
	 void main () {

                int i , j ,x=5;

                for(i=1 ; i<=5 ; i++) {

                        for(j=5 ; j>=1 ; j--) {

                                printf(" %d ",x);
                        }
				x--;
                        printf("\n");
                }
        }
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc patterns.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 5  5  5  5  5
 4  4  4  4  4
 3  3  3  3  3
 2  2  2  2  2
 1  1  1  1  1
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/

	/*
	void main() {

		int i , j,x;

		for(i=1 ; i<=5 ; i++) {
			x=5;
			for(j=1 ; j<=5 ; j++) {

				if(i==1 || i==5){
					printf(" %d ",x);
					x--;
				} else {
					printf(" %d ",j);
				}
			}
			printf("\n");

		}
	}

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc patterns.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 5  4  3  2  1
 1  2  3  4  5
 1  2  3  4  5
 1  2  3  4  5
 5  4  3  2  1
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$

*/

	/*
	void main() {

		int i , j;

		for(i=0 ; i<5 ; i++) {

			for(j = 0  ; j<5    ; j++) {

				printf(" %d ",i +j);
			}
			printf("\n");
		}

	}

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc  patterns.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 0  1  2  3  4
 1  2  3  4  5
 2  3  4  5  6
 3  4  5  6  7
 4  5  6  7  8
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/

		void main() {

		int i , j;

		for(i=1 ; i<=5 ; i++) {
		char c = 'E';

			for(j=5 ; j>= i ; j--) {

				printf(" %c " , c);
				c--;
			}
		printf("\n");
		}
		}	
