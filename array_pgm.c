#include<stdio.h>

void main() {

	int jersey_no[5] = {18, 7 , 45 ,12, 10 };
	float avg[5] = { 49.90 , 54.65, 45.99 , 56.77 , 60.99 };
	int x =10;
	int y =20;

	int runs[5];

	printf("%f\n",avg[5]);	
	printf("%d\n",runs[6]); // Garbage Value ...	
	printf("%d\n",jersey_no[5]);	
//	printf("%ld\n",sizeof(avg));	


	printf("%p\n", &x); //  address of value  stored will get printed
	printf("%p\n", &y); // address of value stored will get printd
}
