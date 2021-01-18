#include<stdio.h>

/* PROGRAM 1
 *
void main() {

	char ch ;
	printf("ENter a character :");
	scanf("%c",&ch);

	if((ch>=97) && (ch<=122) || (ch>=65) && (ch<=90))
					printf("%c is an alphabet \n" ,ch);
				   else
					printf("%c is not an alphabet \n" ,ch);
					
}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :d
d is an alphabet
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :G
G is an alphabet
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :{
{ is not an alphabet
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/*
void main() { PROGRAM 2

	char ch ;
        printf("ENter a character :");
        scanf("%c",&ch);

	if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'))
													     printf("%c is a vowel \n" , ch);
													   else
													      printf("%c is a consonant \n",ch);
					}

O/p;
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :a
a is a vowel
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :D
D is a consonant
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :I
I is a vowel
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :J
J is a consonant
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/* PROGRAM 3
 
void main() {

	 char ch ;
        printf("ENter a character :");
        scanf("%c",&ch);

	if((ch>=97) && (ch<=122) || (ch>=65) && (ch<=90))
			printf("%c is a  character \n",ch);
		else if(ch>=122)
			printf("%c is a special character \n",ch);
		else if(ch>='0' && ch<='9')
			printf("%c is a digit \n",ch);
}
O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 18aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :{
{ is a special character

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ vim 18aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ cc 18aug.c
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :9
9 is a digit

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
ENter a character :a
a is a  character

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/



/* PROGRAM 4
 *
void main() {

	int i , j;

	for(i=1; i <=4 ; i++) {
		for(j=1; j<=4 ;j++) {

			printf(" 1 ");

		}
		printf("\n");
	}
}

O/p:

ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
 1  1  1  1
 1  1  1  1
 1  1  1  1
 1  1  1  1
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/

/* PROGRAM 5
 *
void main() {

	int x =1 ,y =4 , z=2;

	if(x>y)
		printf("x is greater than y \n");
	else if(y<z)
		printf("z is greater than y \n");
	else if((x<y) && (y>z) &&(x<z)) 
		printf("%d is max number among %d %d & %d \n",y,x,y,z);
}

O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$ ./a.out
4 is max number among 1 4 & 2
ketan@ketan-tuf-fx505dt:~/ppa5/dailyflash$
*/
