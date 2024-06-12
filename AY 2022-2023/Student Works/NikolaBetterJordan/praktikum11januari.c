#include <stdio.h>
#include <stdlib.h>
int main(){
	int a=12,b=6;
	int *p1=&a;
	int *p2=&b;
	int sum,sub,mul,div;
	sum = *p1+*p2;
	sub = *p1-*p2;
	mul = (*p1) * (*p2);
	div = (*p1) / (*p2);
	printf("sum: %d \n", sum);
	printf("subtraction: %d \n", sub);
	printf("multiplication: %d \n", mul);
	printf("division: %d \n", div);
	p1=NULL;
	p2=NULL;
	free(p1);
	free(p2);




	return 0;
}