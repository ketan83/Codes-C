#include<stdio.h>

void main() {

	int a[5] = { 10 ,20 ,30 ,40 ,50 };

	printf("%ld\n" ,sizeof(a)); // 20;

	char c[2+3] = { 'A' ,'B' ,'C'  }; //5

	printf("%ld\n",sizeof(c));

	printf("%c\n",c[3]); //blank space;
	printf("%c\n",c[4]); //black space

	float n=5.0f;
	float f[n] = { 10.5 , 4.5 , 5.5 , 20.5 , };
	/* this will give error as  :->
	float n=5.0f;
	float f[n] = { 10.5 , 4.5 , 5.5 , 20.5 , };
	 * ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ vim array15sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc array15sep.c
array15sep.c: In function ‘main’:
array15sep.c:17:8: error: size of array ‘f’ has non-integer type
  float f[n] = { 10.5 , 4.5 , 5.5 , 20.5 , };
        ^
array15sep.c:17:2: error: variable-sized object may not be initialized
  float f[n] = { 10.5 , 4.5 , 5.5 , 20.5 , };
  ^~~~~
array15sep.c:17:17: warning: excess elements in array initializer
  float f[n] = { 10.5 , 4.5 , 5.5 , 20.5 , };
                 ^~~~
array15sep.c:17:17: note: (near initialization for ‘f’)
array15sep.c:17:24: warning: excess elements in array initializer
  float f[n] = { 10.5 , 4.5 , 5.5 , 20.5 , };
                        ^~~
array15sep.c:17:24: note: (near initialization for ‘f’)
array15sep.c:17:30: warning: excess elements in array initializer
  float f[n] = { 10.5 , 4.5 , 5.5 , 20.5 , };
                              ^~~
array15sep.c:17:30: note: (near initialization for ‘f’)
array15sep.c:17:36: warning: excess elements in array initializer
  float f[n] = { 10.5 , 4.5 , 5.5 , 20.5 , };
                                    ^~~~
array15sep.c:17:36: note: (near initialization for ‘f’)
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$

	 */

	printf("%ld\n",sizeof(f));
}
