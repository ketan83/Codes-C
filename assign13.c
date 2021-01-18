#include<stdio.h>
void main(){

	int  n1,n2,n3;
	printf("ENter values of n1, n2 , n3");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>=n2 && n1>=n3){
		printf("largest Number: %d",n1);

	}

	 if(n2>=n1 && n2>=n3){
                printf("largest Number: %d",n2);
        }
	 if(n3>=n1 && n3>=n2){
                printf("largest Number: %d",n3);
        }


}
