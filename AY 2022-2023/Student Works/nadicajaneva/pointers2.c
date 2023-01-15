#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int a=4, *p, *p2;
	p=&a;
	p2=p;

	printf("%d\n", *p);
	printf("%d\n", *p2);

	p=NULL;
	free(p);
	p2=NULL;
	free(p2);
}