#include<stdio.h>
void main() {

	
/*	
	for(x=0 ; x<1000; x++){

	printf("%d\n",x);
	}
*/

	/*
	for(i=5 ; i>=1;i--) {

	printf("%d\n",i);
	}
	*/

/*
 	To print odd & even numbers alternatively from 1 to 20	
	for ( i=1 ; i<=20 ;i++) {
	
		if(i%2==0) {

			printf("even=%d\n",i);
		}
		else
		{
			printf("odd=%d\n",i);

		}
}
	O/p :
ketan@ketan-tuf-fx505dt:~/ppa5$ vim forlooppgm.c
ketan@ketan-tuf-fx505dt:~/ppa5$ cc forlooppgm.c
ketan@ketan-tuf-fx505dt:~/ppa5$ ./a.out
odd=1
even=2
odd=3
even=4
odd=5
even=6
odd=7
even=8
odd=9
even=10
odd=11
even=12
odd=13
even=14
odd=15
even=16
odd=17
even=18
odd=19
even=20


*/

/*
  To check whether the numbers ranging from 0 to 50 are divisible by 50 or not  
	 for ( i=1 ; i<=50 ;i++) {

                if(i%5==0) {
			
			 printf("\n");	
                         printf("%d is divisible by 5 \n",i);
			 printf("\n");
                }
                else
                {
                        printf("%d is not divisible by 5 \n",i);

                }
}

Output :

ketan@ketan-tuf-fx505dt:~/ppa5$ vim forlooppgm.c
ketan@ketan-tuf-fx505dt:~/ppa5$ cc forlooppgm.c
ketan@ketan-tuf-fx505dt:~/ppa5$ ./a.out
1 is not divisible by 5
2 is not divisible by 5
3 is not divisible by 5
4 is not divisible by 5

5 is divisible by 5

6 is not divisible by 5
7 is not divisible by 5
8 is not divisible by 5
9 is not divisible by 5

10 is divisible by 5

11 is not divisible by 5
12 is not divisible by 5
13 is not divisible by 5
14 is not divisible by 5

15 is divisible by 5

16 is not divisible by 5
17 is not divisible by 5
18 is not divisible by 5
19 is not divisible by 5

20 is divisible by 5

21 is not divisible by 5
22 is not divisible by 5
23 is not divisible by 5
24 is not divisible by 5

25 is divisible by 5

26 is not divisible by 5
27 is not divisible by 5
28 is not divisible by 5
29 is not divisible by 5

30 is divisible by 5

31 is not divisible by 5
32 is not divisible by 5
33 is not divisible by 5
34 is not divisible by 5

35 is divisible by 5

36 is not divisible by 5
37 is not divisible by 5
38 is not divisible by 5
39 is not divisible by 5

40 is divisible by 5

41 is not divisible by 5
42 is not divisible by 5
43 is not divisible by 5
44 is not divisible by 5

45 is divisible by 5

46 is not divisible by 5
47 is not divisible by 5
48 is not divisible by 5
49 is not divisible by 5

50 is divisible by 5

*/ /*
	int startNum =0;
	int endNum=0;
	printf(" Enter starting & ending no.s");
	scanf("%d%d",&startNum,&endNum);
	i =startNum;
    int sum =0;
	while(i<=endNum) {

		sum = sum + i;
		printf("sum =%d\n",sum);
		i++;
	}
	 
		printf("%d\n",sum);
*/

    
	 /*
	 for(float i=0.0f;i<=10.0f;i++) {
		
		 printf("%f\t",i);

	 }
		Output : 0.000000	0.200000	0.400000	0.600000	0.800000	1.000000	1.200000	1.400000	1.600000	1.800000	2.0000002.200000	2.400000	2.600000	2.800000	3.000000	3.200001	3.400001	3.600001	3.800001	4.000000	4.2000004.400000	4.600000	4.800000	5.000000	5.199999	5.399999	5.599999	5.799999	5.999999	6.199998	6.3999986.599998	6.799998	6.999998	7.199997	7.399997	7.599997	7.799997	7.999997	8.199997	8.399997	8.5999978.799996	8.999996	9.199996	9.399996	9.599996	9.799995	9.999995	ketan@ketan-tuf-fx505dt:~/ppa5$ 
*/

/*
	float i=0.0f;
	float j=0.0f;
	printf("i \t j \n");

	for (int num =0 ;num<=10;num++) {

		printf("%.2f \t %.2f\n",i,j);
		i=1 +0.20; //i+=0.20
		j=j+0.20; //j+=0.20
	}

	Output :
	ketan@ketan-tuf-fx505dt:~/ppa5$ ./a.out
i 	 j 
0.00 	 0.00
1.20 	 0.20
1.20 	 0.40
1.20 	 0.60
1.20 	 0.80
1.20 	 1.00
1.20 	 1.20
1.20 	 1.40
1.20 	 1.60
1.20 	 1.80
1.20 	 2.00
	
	
*/
/*
	int sum=0 ;
	for (int i=1; i<=15;i++) {

		sum =sum + i;
	}
		printf("%d\n",sum);

	Output : 120
	*/
		
	}
