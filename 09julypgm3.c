#include<stdio.h>

void main(){
	
		int x , y,z;
		
		printf("ENter 3 no.s ");
		scanf("%d%d%d",&x,&y,&z);
//		printf("ENter operator: \n ");
	//	scanf("%d",&ch);

		if(x>y){
			printf("x is greter than y\n");
		}else if(y>z){
			printf("%d is greater than z\n",y);
			}
		else if(x>z){
printf("%d is greater than z \n",x);
}
	else
{
			printf("z is greter than x \n");

}
	printf("Out of if \n");


}
