#include <stdio.h>

int main(){
	int a = 12;
	int b = 6;

	int *p1;
	int *p2;

	p1 = &a;
	p2 = &b;

	printf("Addition is: %d\n",(*p1)+(*p2));
	printf("Subtraction is: %d\n",(*p1)-(*p2));
	printf("Multiplication is: %d\n",(*p1)*(*p2));
	printf("Division is: %d\n",(*p1)/(*p2));


	p1=NULL;
	p2=NULL;

	return 0;
}