	
	#include<stdio.h>
	#pragma pack(1)


	typedef struct friends {

		char *fname;
		char *type;
		char *status;
	}circle;

	void main() {

	circle f1 = { "atharv" , "humble" , "inRelationship"};
	circle f2 = { "ajit" , "chutiya" , "single"};
	circle f3 = { "shivam" , "kind" , "SoonWillBeInRelationship"};

	circle arr[] = { f1 ,f2 , f3};

	int i;

	for(i=0 ; i <3 ; i++) {

		printf(" %d Friend name = %s , Type = %s , Status = %s \n" ,i+1 , arr[i].fname , arr[i].type , arr[i].status );
	}
	}
/*
O/p:

	ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ cc arrayOFstructure.c
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ ./a.out
 1 Friend name = atharv , Type = humble , Status = inRelationship 
 2 Friend name = ajit , Type = chutiya , Status = single 
 3 Friend name = shivam , Type = kind , Status = SoonWillBeInRelationship 
ketan@ketan-tuf-fx505dt:~/CodesFolder/ppa5$ 
*/
