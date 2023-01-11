#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	int a=4;
	int *p = &a;
	int *pp = p;

	printf("%d\n", *pp);
	

	return 0;
}