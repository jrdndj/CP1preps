#include <stdio.h>
#include <stdlib.h>

int main(){

	int a=12, b=6;
	int *p1=&a;
	int *p2 = &b;

	printf("a+b=%d\n", *p1+*p2);
	printf("a-b=%d\n", *p1-*p2);
	printf("a*b=%d\n", (*p1)*(*p2));
	printf("a/b=%d\n", (*p1)/(*p2));

	p1=NULL;
	p2=NULL;
	free(p1);
	free(p2)

	return 0;
}