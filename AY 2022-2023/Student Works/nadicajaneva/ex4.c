#include<stdio.h>

int* point(int a){
	int *p;
	p=&a;
	return p;
}

int main() {
	
	int a=4;
	int *p1=point(a);
	printf("%d\n", *p1);
	
}