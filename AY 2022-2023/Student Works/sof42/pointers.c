#include<stdio.h>
#include<stdlib.h>
int main(){
// Declare variables
	int a=12, b=6;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("Addition: %d\n", (*p1)+(*p2) );
	printf("Subtraction: %d\n", (*p1)-(*p2));
	printf("Division: %d\n", (*p1)/(*p2)  );
	printf("Multiplication: %d\n", (*p1)*(*p2) );
	p1 = NULL;
	p2 = NULL;
	free(p1);
	free(p2);
return 0;
}// end main