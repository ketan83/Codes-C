
	#include<stdio.h>
#include<stdlib.h>
	
	struct stack {
		int size ;
		int top ;
	int  * arr;
	};
	/*
	void push(struct stack *ptr , int val) {
		
		if(isFull(sp)) {
			printf(" Stack overflow cannot push element onto the stack ");
			return 0;
		} else {
			ptr->top++;
			ptr->arr[ptr->top] = val;
		}

	}
*/	
	int isFull(struct stack *ptr) {

		if(ptr->top == ptr->size-1) {
			return 1;

		} else {
			return 0;
		}
	}
void push(struct stack *ptr , int val) {

                if(isFull(ptr)) {
                        printf(" Stack overflow cannot push element onto the stack \n");
                        //return 0;
                } else {
                        ptr->top++;
                        ptr->arr[ptr->top] = val;
			
                }

        }
/*
void pop(struct  stack *ptr , int val) {

	if(isEmpty(ptr)){
		printf(" stack underflow cannot pop element from the stack \n");
		} else {
			val = ptr->arr[ptr->top] ;
			ptr->top--;
		}
}
*/		


	
	int isEmpty( struct stack *ptr) {
		if(ptr->top == -1) {
			return 1;
		} else{
			return 0;
		}
	}

void pop(struct  stack *ptr , int val) {

        if(isEmpty(ptr)){
                printf(" stack underflow cannot pop element from the stack \n");
          //      return -1;
	 } else {
                        val = ptr->arr[ptr->top] ;
                        ptr->top--;
	//		return val;
                }
	}

	int peek(struct stack *ptr , int j) {
		int arrInd = ptr->top-j+1;

		if(arrInd < 0){
			printf(" Not a valid position \n ");
			return -1;
		} else {
			return ptr->arr[arrInd];
		}

	}


	int stackTop( struct stack * ptr ) {
		return ptr->arr[ptr->top] ;
	}

	int stackBottom( struct stack * ptr ) {
		return ptr->arr[0] ;
	}

	void main() {

		struct stack *sp = (struct stack * )malloc(sizeof(struct stack));
		sp->size =50;
		sp->top = -1;
		sp->arr = (int *)malloc(sp->size*sizeof(int));

		printf("%d\n",isEmpty(sp));
		printf("%d\n",isFull(sp));

		push(sp , 56);
		push(sp , 97);
		push(sp , 76);
		push(sp , 69);
		push(sp , 43);
		push(sp , 45);
		push(sp , 78);
	//	printf("%d\n",isEmpty(sp));
	//	printf("%d\n",isFull(sp));
		pop(sp , 56);
	//	printf("%d\n",isEmpty(sp));
	//	printf("%d\n",isFull(sp));
	
		int j;

		for(j =0 ; j<=sp->top+1 ; j++) {
			printf(" The value at position %d is %d \n",j , peek(sp,j));

		}

		printf(" The element which is at the top is %d \n",stackTop(sp));
		printf(" The element which is at the bottom is %d \n",stackBottom(sp));
				}
	
