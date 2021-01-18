
	//concept of function pointer 	
	#include<stdio.h>
	void add( float x , float y) {

		printf("%f\n",x+y);
	}

	void sub( float x , float y) {

		printf("%f\n",x-y);
	}

	void main() {

		void (*fptr)(float , float) = NULL ;

		fptr = &sub;              // another alternative fptr = sub
		sub(20.5f  ,10.5f);
		fptr = &add ;		// fptr = sub another alternative 
		add(20.5f ,10.f);

	}
