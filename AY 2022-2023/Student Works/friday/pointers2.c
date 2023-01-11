#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 4, *p, *p1;

	p = &a;

	p1 = p;

	printf("%d\n", *p);
	printf("%d\n", *p1);

	p=NULL;
	free(p);
	p1=NULL;
	free(p1);
	return 0;
}