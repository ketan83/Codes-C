#include<stdio.h>

void main() {

	int i,j,t ,n;
	int a[] =  {5, 9 ,13 , 14 , 16} ;
	printf("ENter max. number");
		scanf("%d", &n);

	for( i =0 ;i <= n-1 ; i++){ 
	
		for(j=0 ;j<=n-1-i ;j++){
		
			if(a[j+1]>a[j]) {
				t=a[j+1];
				 a[j+1] = a[j];
				 a[j] = t;
			}
		}	
				
	printf("%d\t",a[j]);
		}
		
	printf("\n");
}
