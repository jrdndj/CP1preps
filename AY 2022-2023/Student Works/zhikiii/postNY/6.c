#include <stdio.h>
#include <stdlib.h>

void swapp(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;

}

int main(){

	int a=3, b=5;

	printf("%d, %d\n", a, b);
	
	swapp(&a, &b);

	printf("%d, %d\n", a, b);
}