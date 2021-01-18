#include<stdio.h>
void main() {

	int a[5];

		printf("Enter numbers \n");

		for(int i=0 ; i<5 ; i++) {

			scanf("%d",&a[i]);
		}

			for(int i=0 ; i<5 ; i++) {

                        printf(" %d ",a[i]);
                }
	printf("\n");

			printf(" %ld \n ",sizeof(a));
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	printf("%p\n",&a[2]);
	printf("%p\n",&a[3]);
	printf("%p\n",&a[4]);

	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	printf("%d\n",a[2]);
	printf("%d\n",a[3]);
	printf("%d\n",a[4]);

	printf("\n");

}
