#include<stdio.h>

int main()
{
	int a =12,b=6;
	int *p1;
	int *p2;

	p1 = &a;
	p2 = &b;

	printf("%d\n",*p1 + *p2 );
	printf("%d\n",*p1 * *p2 );
	return 0;
}