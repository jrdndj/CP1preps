#include<stdio.h>
#include<stdlib.h>

int main(){
	int a = 4;
	int *p1 = &a;
	int *p2 = p1;

	printf("%d\n", a);

	p1 = NULL;
	p2 = NULL;
	free(p1);
	free(p2);
}