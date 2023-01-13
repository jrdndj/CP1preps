#include <stdio.h>
#include <stdlib.h>
int main(){
	int a=4;
	int *p, *p2;
	p=&a;
	p2=p;
	printf("%d %d \n", a, *p2);

	p=NULL;
	free(p);
	p2=NULL;
	free(p2);
	printf("%d \n", a);

}
