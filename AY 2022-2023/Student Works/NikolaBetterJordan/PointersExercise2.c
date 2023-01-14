#include <stdio.h>
#include <stdlib.h>
int main(){
	int a = 4;
	int *p = &a;
	int *p1 = p;
	printf("%d \n", *p1);
	p=NULL;
	p1=NULL;
	free(p);
	free(p1);

	return 0;
}