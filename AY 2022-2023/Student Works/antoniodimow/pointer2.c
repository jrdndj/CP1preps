#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int a =4;
	int *p1,*p2;

	p1 = &a;
	p2=p1;

	printf("%d %d\n", a,*p2);

	p1 = NULL;
	free(p1);

	p2 = NULL;
	free(p2);

	printf("%d \n",a);


	return 0;
}