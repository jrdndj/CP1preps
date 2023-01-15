#include <stdio.h>
int* returnMe(int *p1){
	return p1;
}
int main() {
	int a = 4;
	printf("The pointer of %d is %p\n", a, returnMe(&a));
	return 0;
}