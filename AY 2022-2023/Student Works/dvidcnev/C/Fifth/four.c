#include <stdio.h>
#include <string.h>

int satrr( int a ) {
	return &a;
}

int main() {

	int a=5;
	int *p = satrr(a);
	printf("%d\n", *p);

	return 0;
}

