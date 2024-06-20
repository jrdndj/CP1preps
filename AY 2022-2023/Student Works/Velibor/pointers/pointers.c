#include<stdio.h>
#include <stdlib.h>

int main(){
	int a = 12;
	int b = 6;
	int *p1 = &a;
	int *p2 = &b;
	//int sum = p1+p2;

	printf("Addition %d\n", (*p1)+(*p2));
		printf("Subtraction %d\n", (*p1)-(*p2));
			printf("Multiplication %d\n", (*p1)*(*p2));
				printf("Division %d\n", (*p1)/(*p2));

	p1 = NULL;
	p2 = NULL;
	free(p1);
	free(p2);

}	
