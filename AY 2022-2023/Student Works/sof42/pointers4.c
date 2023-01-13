#include<stdio.h>
#include<stdlib.h>
// FUNCTION

int* pointerReturn(int a){
	return &a;
}// end of function

int main(){
// declare variable
	int value = 4;
	int *p1 = pointerReturn(value);
	printf("Value of the pointer is: %d\n", *p1);
	return 0;	
}// end main