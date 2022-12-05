#include <stdio.h>

int main() {

	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);

	//checks if number is even/odd without modulo
	if (((num/2)*2) == num){
		printf("Number %d is even. \n", num);
	} else {
		printf("Number %d is odd. \n", num);
	}

	return 0;
}
