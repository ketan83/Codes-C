#include<stdio.h>

void main(){
int subVal= 15 ;
       

if(subVal++&&subVal--){
printf("SubVal:%d\n",subVal);
}
if(subVal--||++subVal) {

	printf("SubVal:%d\n",subVal);
}
if(subVal>subVal); {

        printf("SubVal:%d\n",subVal);
}

}
