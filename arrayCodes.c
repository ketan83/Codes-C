
	#include<stdio.h>


/*

	// Swapping elements of array
	// I/p : 3 61 23 9 87 0
	// O/p:  0 87 9 23 61 3

	void main() {

		int n,t;
		printf("Enter array size \n");
		scanf("%d",&n);

		int i ,a[n];

		printf("Enter elements of  array");
		for(i=0 ; i<n ;i++){
		
			scanf("%d",&a[i]);
		}

		  printf(" elements of  array");
                for(i=0 ; i<n ;i++){

                        printf(" %d ",a[i]);
                }
		printf("\n");

		int first =0;
		int last = n-1;

		while(first <last) {

		t = a[first];
		a[first] = a[last];
		a[last] = t;

		first++;
		last--;	
		}
		printf(" elements of  array after swapping");
                for(i=0 ; i<n ;i++){

                        printf(" %d ",a[i]);
                }

		printf("\n");
	}

	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc arrayCodes.c
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
Enter array size
6
Enter elements of  array 3 61 23 9 87 0
 elements of  array 3  61  23  9  87  0
 elements of  array after swapping 0  87  9  23  61  3
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$

*/

/*
	void main() {

		 int n,t;
                printf("Enter array size \n");
                scanf("%d",&n);

                int i ,j;
		char a[n];

                printf("Enter elements of  array");
                for(i=0 ; i<n ;i++){
                
                        scanf("%c",&a[i]);
                }

                  printf(" elements of  array");
                for(i=0 ; i<n ;i++){

                        printf(" %c ",a[i]);
                }
                printf("\n");

		for(i=0 ; i<n ;i++) {

			for(j=0 ; j<=i ; j++) {

				printf(" %c ",a[j]);
			}
			printf("\n");
		}
	
	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc arrayCodes.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
Enter array size
6
Enter elements of  arraySTACK
 elements of  array
  S  T  A  C  K



  S

  S  T

  S  T  A

  S  T  A  C

  S  T  A  C  K
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$
*/

/*
	// to calculate  frequency of occurance of elements in an array
	void main() {

		 int n,t;
                printf("Enter array size \n");
                scanf("%d",&n);

                int i ,j,a[n] ,b[n];

                printf("Enter elements of  array");
                for(i=0 ; i<n ;i++){
                        
			printf("position-%d \n",i);
                        scanf("%d",&a[i]);
			b[i] = -1;
                }

                  
                for(i=0 ; i<n ;i++){
			t =1;
                        for(j=i+1 ;j<n;j++) {

				if(a[i] == a[j]) {
					t++;
					b[j] =0;
				}
			}
			if(b[i]!=0) {

				b[i]=t;
			}
                }

		printf(" Frequency of elements of array \n");

                for(i=0 ; i<n; i++) {

			if(b[i]!=0) {
				printf(" %d occurs %d times \n",a[i],b[i]);
			}
		}
	}
O/p:
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc arrayCodes.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
Enter array size
4
Enter elements of  arrayposition-0
1
position-1
0
position-2
2
position-3

1
 Frequency of elements of array
 1 occurs 2 times
 0 occurs 1 times
 2 occurs 1 times
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$
*/

	/* // program to print factorial of each element of array
	 *
	void main() {

		                int n,t;
                printf("Enter array size \n");
                scanf("%d",&n);

                int i ,j,a[n],k,fact;

                printf("Enter elements of  array");
                for(i=0 ; i<n ;i++){
                
                        scanf("%d",&a[i]);
                }

                  printf(" elements of  array");
                for(i=0 ; i<n ;i++){

                        printf(" %d ",a[i]);
                }
                printf("\n");

		for(k=0 ; k<n ;k++) {

				fact =1;
			for(j = a[k] ; j>=1 ;j--) {

			fact = fact * j;
			
			}
			printf("factorial of %d is %d \n", a[k] , fact);
		}
			

	}
o/p;
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc arrayCodes.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
Enter array size 
5
Enter elements of  array1 2 3 4 5 
 elements of  array 1  2  3  4  5 
factorial of 1 is 1 
factorial of 2 is 2 
factorial of 3 is 6 
factorial of 4 is 24 
factorial of 5 is 120 
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ 
	*/

/*
	
		// program to find largest and  second largest element of an array 
		void main() {

		int i,j,n;

		 printf("Enter array size \n");
                scanf("%d",&n);

                int a[n],k,fact;

                printf("Enter elements of  array");
                for(i=0 ; i<n ;i++){

                        scanf("%d",&a[i]);
                }

                  printf(" elements of  array");
                for(i=0 ; i<n ;i++){

                        printf(" %d ",a[i]);
                }
                printf("\n");

		int large1 = a[0];
		int large2 =a[1];
		int temp;

		if(large1 < large2){
			temp = large1;
			large1 = large2;
			large2 = temp;
		}

		for(i=2 ; i<n ;i++) {

			if(a[i]>large1) {
				large2 =large1;
				large1 =a[i];
			}
		 else if(a[i] > large2 && a[i] != large1 ) {

			large2 = a[i];
		}
		}

		printf(" Largest element = %d \n",large1);
		printf(" 2nd Largest element = %d \n",large2);

	}
	O/p:
	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc arrayCodes.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
Enter array size
5
Enter elements of  array10 20 15 30 60
 elements of  array 10  20  15  30  60
 Largest element = 60
 2nd Largest element = 30
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
Enter array size
5
Enter elements of  array99 23 46 44 1
 elements of  array 99  23  46  44  1
 Largest element = 99
 2nd Largest element = 46
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ vim arrayCodes.c
*/

	
		//program to check whether each element in an array is an armstrong number or not for eg 153 = (1*1*1) + (5*5*5) + (3*3*3) =153
		
	void main() {

		int i,j,k,n;

                 printf("Enter array size \n");
                scanf("%d",&n);

                int a[n],fact;

                printf("Enter elements of  array");
                for(i=0 ; i<n ;i++){

                        scanf("%d",&a[i]);
                }

                  printf(" elements of  array");
                for(i=0 ; i<n ;i++){

                        printf(" %d ",a[i]);
                }
                printf("\n");

		int num = 0;
		int rem = 0;
		int x =0;
		int power =1; 
		int sum = 0;
		
		for( k=0 ; k<n ; k++) {
			num = a[k];
			x = a[k];
		while( x!=0) {


			rem = k%10;
			sum = sum + (rem * rem *rem) ;

			x = x/10;
			}

		if(sum == num) {
			printf(" %d is an armstrong number \n",sum);
		} else {
			printf(" %d is not an armstrong number \n",sum);
			}
		
			sum =0;
		
		}
	}
