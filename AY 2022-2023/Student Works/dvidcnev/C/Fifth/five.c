#include <stdio.h>
#include <string.h>

void satrr(int *p, char *ch);

int main() {

	int a=5;
	char s = 'a';

	satrr(&a, &s);

	printf("%d\n", a);
	printf("%c\n", s);

	return 0;
}

void satrr( int *p, char *ch) {
	if ( *ch == 's') {
		*p *= *p;
	}
	else if ( *ch == '+' ) {
		*p += 1;
	}
	else {
		*ch = 'e';
	}
}