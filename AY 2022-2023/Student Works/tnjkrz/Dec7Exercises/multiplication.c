#include <stdio.h>

int main() {
	//declares variables
	int num1, num2, product;

	//asks user for input of two integers
	printf("The program will find the multiplication of two integers. \n");
	printf("Please enter the first integer: ");
	scanf("%d", &num1);
	printf("Please enter the second integers: ");
	scanf("%d", &num2);

	//finds the product of numbers without using *
	for (int i = 1; i <= num2; ++i)
	{
		product = product + num1;
	}

	//prints the produt of the inputted integers
	printf("The product of %d and %d is %d", num1, num2, product);

	return 0;
} //end main