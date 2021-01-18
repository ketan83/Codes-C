	#include<stdio.h>
	void main() {

	int a1[10] = { 1 ,2,3,4,5 };
	int a2[10], i ;

	printf("%d %d %d \n",a1[0],a1[1],a1[2] );
	printf("%d %d %d \n",a2[0],a2[1],a2[2] );

	// a2 =a1 ; assiging an array into another array using this method is wrong way and will give ERROR, the one which is below is the correct way to assign array values 

	for (i=0 ; i<5 ; i++) {

		a2[i] = a1[i];
	}

	for (i=0 ; i<5 ; i++) {
	
		printf("%d  \n",a2[i] );
	}

	for (i=0 ; i<5 ; i++) {
	if(a1[i] == a2[i])                  // if(a1 == a2) we know that array name itself is address of 1st element so say address of a1 =100 , a2 =200 so this will print else statement as their addresses are fifferent 
		printf("Both arrays are same\n");
		else
		printf("both arrays are different \n");	
	}
/*
	printf(" %p\n",&a1[0]);
	printf(" %p\n",a1); // name of the array itself is the address of first element of its array  So , printf(" %p\n",a1) ==  printf(" %p\n",&a1[0]) (ABOVE STATEMENT) both these will print same line.
	*/
	}
