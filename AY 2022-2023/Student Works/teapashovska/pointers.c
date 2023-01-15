#include <stdio.h>
#include <stdlib.h>
int main(){
	int a=12, b=6;
	int *p1;
	int *p2;
	p1=&a;
	p2=&b;
	printf("%d \n", *p1 + *p2);
	printf("%d \n", (*p1) * (*p2));
	printf("%d \n", *p1 - *p2);
	printf("%d \n", (*p1) / (*p2));

	p1=NULL;
	free(p1);
	p2=NULL;
	free(p2);
	printf("%d \n", a);

}
