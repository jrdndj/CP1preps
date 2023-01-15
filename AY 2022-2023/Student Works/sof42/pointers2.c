#include<stdio.h>
#include<stdlib.h>
int main(){
// declare variables
	int a=4;
	int *p;
	// pointer p pointing to a
	p = &a;
	int *p2;
	// pointer p2 pointing to pointer p
	p2  = p;
	printf("Value of variable a using p2: %d\n", *p2 );
	p2 = NULL;
	p = NULL;
	free(p2);
	free(p);
	printf("The value of variable a is still: %d\n", a);
return 0;
}// end main