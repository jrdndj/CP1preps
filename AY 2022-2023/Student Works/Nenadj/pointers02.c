#include <stdio.h>
#include <stdlib.h>
int main() {
	int a = 4;
	int *p;
	p = &a;
	int *point;
	point = &(*p);
	printf("The value is: %d", *point);
	point = NULL;
	free(point);
	p = NULL;
	free(p);
	printf("\n%d\n",a);
	return 0;
}