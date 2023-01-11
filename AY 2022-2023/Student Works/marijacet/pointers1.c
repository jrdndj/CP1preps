#include <stdio.h>
#include <stdlib.h> //to use free

int main(){
	//declare int variables
	int a = 12;
	int b = 6;
	//declare pointers to a and b
	int *p1 = &a;
	int *p2= &b;

	//perform 4 operations on the values p1 and p2 are pointing to
	printf("%d\n", *p1+*p2 ); 
	printf("%d\n", *p1-*p2 );
	printf("%d\n", (*p1)/(*p2) );
	printf("%d\n", (*p1)*(*p2) );

	//unlink pointers by setting them to NULL
	p1 = NULL;
	p2 = NULL;
	
	//free them from the memory
	free(p1);
	free(p2);

	return 0;
}