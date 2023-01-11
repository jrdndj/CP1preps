#include <stdio.h>
#include <string.h>

void satrr(int *p1, int *p2);

int main() {

	int a=5, b=6;
	printf("%d and %d\n", a, b);
	satrr(&a, &b);

	printf("%d and %d\n", a, b);

	return 0;
}

void satrr( int *p1, int *p2) {
	int a = *p1;
	int b = *p2;
	*p1 = b;
	*p2 = a;
}