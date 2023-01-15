#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=4;
	int *p=&a;

	int *pp=p;

	printf("%d\n", *pp);

	p=NULL;
	pp=NULL;
	free(p);
	free(pp);
}