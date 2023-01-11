#include <stdio.h>

void swapVar(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}

int main() {
	int a=4, b=3;
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	swapVar(&a,&b);
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	return 0;
}