#include<stdio.h>

/*
void main() {

char ch[10] = { 'J' , 'a' , 'E' ,'k'};
int x=0 , y=0;

for (int i = 0; i <=4; i++)
{
    if( ch[i] == 'A'|| ch[i]=='O' || ch[i]== 'I' || ch[i]=='E' || ch[i]=='U' || ch[i]== 'a'|| ch[i]=='o' || ch[i]=='i' || ch[i]=='e' || ch[i]=='u' ){
        printf("%d . %c is a vowel \n",++x,ch[i]);
    }else {
        printf("%d . %c is a consonant \n",++y,ch[i]);
    }
}

}

ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
1 . J is a consonant
1 . a is a vowel
2 . E is a vowel
2 . k is a consonant
3 .  is a consonant
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ vim 12sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/*
void main() {

int a[] = {10 ,20,30 ,40 ,50 };

for(int i=0 ; i<5 ; i++) {

	printf("%d\t",a[i]);
}

	printf("\n");
}

O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 12sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
10	20	30	40	50
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/


/*
	void main() {

	int a[10] ,sum=0;

	printf("Enter numbers \n");
	 for(int i=0 ; i<7 ; i++) {

                scanf("%d",&a[i]);
	}


		for(int i=0 ; i<7 ; i++) {

        	printf("%d\t",a[i]);
		}

        printf("\n");
		 for(int i=0 ; i<7 ; i++) {

                	sum = sum + a[i];
                }

		 double  mean = sum / 7;

		 printf("Mean = %lf \n",mean);


        printf("\n");


	}
O/p
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter numbers
1 2 3 4 5 6 7
1	2	3	4	5	6	7
Mean = 4.000000

ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/

/*
	void main() {

	int a[10] = {11 , 20 ,25, 49 ,55,60 };

	 printf(" Numbers which are divisible by 5 are \n");
	for (int i =0; i<6 ;i++) {

		if(a[i]%5==0){
			printf(" %d ",a[i]);
	}
		printf("\n");

	}
	}
O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ cc 12sep.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
 Numbers which are divisible by 5 are

 20
 25

 55
 60
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$
*/


	/* C program to find all prime numbers from the inputted array 

	int  main()
{
     int ar[100],i,n,j,counter;
     
     printf("Enter the size of the array ");
     scanf("%d",&n);
     printf("\n Now enter the elements of the array");
     for(i=0;i<n;i++)
     {
           scanf("%d",&ar[i]);
     }
     
     printf(" Array is -");
     for(i=0;i<n;i++)
     {
           printf("\t %d",ar[i]);
     }
     
     printf("\n All the prime numbers in the array are -");
     for(i=0;i<n;i++)
     {
           counter=0;
           for(j=2;j<ar[i];j++)
           {
                 if(ar[i]%j==0)
                 {
                       counter=1;
                       break;
                 }
           }
           if(counter==0)
           {
                 printf("\t %d \n",ar[i]);
           }
     }
     return 0;
}

O/p;
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$ ./a.out
Enter the size of the array 5

 Now enter the elements of the array23 5 7 72 24
 Array is -	 23	 5	 7	 72	 24
 All the prime numbers in the array are -	 23
	 5
	 7
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5/dailyflash$

*/
