#include<stdio.h>
void main() {

	// for (initializatio ;condition ;increment/dcrement) {
	// statements
	// }
	
//	for (int i=97 ;i<=122 ;i++) {

	//	printf("%c\n",i); //if format specifier is %d it print from 97 to 122 but it is %c it will print alphabets from a to z
	//	}
	
//	for( ;  ; ) {    // Here in this case compiler will not give error as their is no condition to be  checked 

//	}
//		int i =97;     //condition
//	for (;i<=122 ; ){     // in this case it will print 'a' infinite times b'coz there is no increment/decrement ,condition 
 //	      printf("%c\n",i);
//	      i++;              //increment
//	}
      
	 int i=97;
	 for( ; i<=122;i++); { 
		 printf("In for loop\n");
		 printf("%c\n",i);
	 }
}
