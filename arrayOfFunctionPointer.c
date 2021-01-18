#include<stdio.h>
	void add( int x,int y) ;
	void sub( int x,int y) ;
	void mul( int x,int y) ;
	void div( int x,int y) ;


	void main() {


		void (*arrptr[4])(int , int )= { add , sub ,mul , div } ;

		int i;
		for(i=0 ; i<4  ; i++) {

			&arrptr[i](40,20);
		}
	}


	void add( int x,int y) {
		printf("sum = %d\n",x+y);
	}
	void sub( int x,int y) {
		printf("sub = %d\n",x-y);
	}
	void mul( int x,int y) {
		printf("mul = %d\n",x*y);
	}
	void div( int x,int y) {
		printf("div = %d\n",x/y);
	}
