#include<stdio.h>
#include<stdlib.h>

struct node {

	int data;
	struct node * next;
};


	struct node * traverse( struct node * head) {

		struct node * ptr = head;
		do {
			printf("%d\t",ptr->data);
			ptr =ptr->next;
		
		}while(ptr!=head);

	}

	struct node * insert1(struct node * head , int data) {

		struct node * ptr = (struct node *)malloc(sizeof(struct node));
		ptr->data =data;

		struct node * p = head->next;
		while(p->next!=head) {

		p = p->next;

		}

		// at this point p points to the last node of this circular linked lists
		
		p->next = ptr;
		ptr->next = head;
		head = ptr;
		return head;

	}

	struct node * delete3(struct node * head) {

		struct node * p = head;
		struct node * q  = head->next;

		do {

			p = p->next;
			q=q->next;
		
		}while(q->next!=head);

		p->next=head;
		free(q);
		return head;
	}


	 struct node * delete2(struct node * head , int index) {

                struct node * p = head;
                struct node * q  = head->next;
		int i =0;
                while(i<index-1) {

                        p = p->next;
                        q=q->next;
			i++;

                }
		p->next = q->next;
		free(q);
		return head;

             
        }



	

void main () {

	struct node * head ;
	struct node	* second ;
	struct node	  *third ;
	struct node	* fourth;

	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));

	head->data=9;
	head->next = second;
	
	second->data=14;
	second->next = third;
	
	third->data=13;
	third->next = fourth;
	
	fourth->data=18;
	fourth->next = head;

	traverse(head);
	printf("\n");

	head = insert1(head ,67);
	traverse(head);
	printf("\n");

	head=delete3(head);
	traverse(head);
	printf("\n");
	
	head=delete2(head ,2);
	traverse(head);
	printf("\n");
	
}
