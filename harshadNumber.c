/* HARSHAD NUMBER 

27 : [ 2+7 = 9] and [ 27 % 9==0]( 27 /9 =3 )

111 :[ 1 +1 +1 =3] and [ 111%3 ==0](111 / 3 =37)

198 : [1 + 9 + 8 = 18 ] and [ 198 % 18 ==0 ] ( 198 / 18 =11)

   */

 #include<stdio.h>
/* 
void main() {

	 int num =27 ;
	 int sum = 0;
	 int rem = 0;
	 int x =num;

	 while(num!=0) {

		 rem = num  % 10;
		 sum = sum + rem ;
		 num = num  / 10;

	 }

	 if(x % sum ==0 ) {
		 printf(" %d is a harshad number \n ",x);
	 } else { 
		 printf(" %d is not  a harshad number \n ",x);
		}
 }
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc harshadNumber.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 27 is a harshad number
 

	void main() {

         int num =111 ;
         int sum = 0;
         int rem = 0;
         int x =num;

         while(num!=0) {

                 rem = num  % 10;
                 sum = sum + rem ;
                 num = num  / 10;

         }

         if(x % sum ==0 ) {
                 printf(" %d is a harshad number \n ",x);
         } else { 
                 printf(" %d is not  a harshad number \n ",x);
                }
 }

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ cc harshadNumber.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 111 is a harshad number
 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
*/

	/*
	void main() {

         int num =29 ;
         int sum = 0;
         int rem = 0;
         int x =num;

         while(num!=0) {

                 rem = num  % 10;
                 sum = sum + rem ;
                 num = num  / 10;

         }

         if(x % sum ==0 ) {
                 printf(" %d is a harshad number \n ",x);
         } else { 
                 printf(" %d is not  a harshad number \n ",x);
                }
 }
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$ ./a.out
 29 is not  a harshad number
 ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/logicbuilding$
 */

