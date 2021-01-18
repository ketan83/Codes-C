#include<stdio.h>

	enum days {

		sun=10 ,
		mon=10,
		tues=10
	};


	void main() {

		enum days e1 = 5;
		printf("%d\n",e1);
		enum days e2;
		printf("%d\n",e2);
		printf("%d\n",sun); 		
		printf("%d\n",mon); 		
		printf("%d\n",tues);		
		}
