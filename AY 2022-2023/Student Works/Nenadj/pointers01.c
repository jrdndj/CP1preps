#include <stdio.h>
#include <stdlib.h>
//Ex1
int main() {
	int a = 12, b = 6 ;
	int *p1, *p2;
	p1 = &a;
	p1 = &b;
	printf("Addition %d\n", *p1+*p2);
	printf("Substraction %d\n", *p1-*p2);
	printf("Multiplication %d\n", (*p1)*(*p2));
	printf("Division %d", (*p1)/(*p2));
	p1=NULL;
	free(p1);
	printf("Check memory add of p1\n", *p1);
	p2=NULL;
	free(p2);
	printf("Check memory add of p2\n", *p2);
	
	// Unlink ~ p=NULL;
	// free(p); ~ free memory address

	return 0;
}