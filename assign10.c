#include<stdio.h>

void main() {

int aNum = 0;
char aChar;
if(!aNum %4!=0) {
printf("inside first if...\n");
aNum+=20;
aChar="T";
}
if(aNum %4!=0) {
printf("inside second if...\n");
aNum-=20;
aChar="F";
}
if(aNum ==0) {
printf("inside third if...\n");
aChar="T";

}
printf("After all IF , Values Are...,%d & %c \n",aNum,aChar);


}
