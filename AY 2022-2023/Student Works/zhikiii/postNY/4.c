#include <stdio.h>
#include <stdlib.h>

int* funct(int a){
	int *p=&a;

	return p;
}

int main(){

	int a=3, *p;

	p=funct(a);

	printf("%d\n", *p);
}