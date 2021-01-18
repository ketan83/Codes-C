
#include<stdio.h>
void main(){
/*
	int i,j;

	i = 0 , j =0;
	while(i<=10){
		printf("%d\t%d\n",i,j);
		i++;
		j--;
	}
O/p:
ketan@ketan-tuf-fx505dt:~/ppa5/logic_building$ ./a.out
0	0
1	-1
2	-2
3	-3
4	-4
5	-5
6	-6
7	-7
8	-8
9	-9
10	-10

*/
	char ch1 = 'A';
	char ch2 ='y';
	int i =1;
	while(i<=7) {
		if(i%2==0){
			printf("%c\t ",ch1);
			ch1++;
		}
		else{
			printf("%c\t ",ch2);
			ch2--;
		}
		i++;
	//	printf("\n");

	}

}	



