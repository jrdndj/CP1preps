#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int a=12;
	int b=6;
	int *p1 = &a, *p2 = &b;

	int add= (*p1) + (*p2);
	int subtract = (*p1) - (*p2);
	int multiply = (*p1) * (*p2);
	int divide = (*p1) / (*p2); 

	printf("\nAdding the values: %d", add);
	printf("\nSubtract the values: %d", subtract);
	printf("\nMultiply the values: %d", multiply);
	printf("\nDivide the values: %d\n", divide);

	p1=NULL;
	p2=NULL;
	free(p1);
	free(p2);

	return 0;
}