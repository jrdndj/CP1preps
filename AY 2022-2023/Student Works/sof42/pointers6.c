#include<stdio.h>
// function
void swapValues(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}// end of function

int main(){
// declare variables
	int a = 4, b = 6;
	printf("Value of a: %d, value of b: %d\n", a, b);
	swapValues(&a, &b);
	printf("After swapping, a is: %d, b is: %d\n", a, b);
return 0;
}// end main