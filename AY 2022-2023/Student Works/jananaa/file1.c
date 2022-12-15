/*
Challenge 01: program that allows the user to input two numbers.
Print the product (multiplication) of the two numbers. However you 
cannot use the multiplication (*) symbol.

Hint: Multiplication is a form of repeated addition. Division is
a form of repeated subtraction.
*/
#include <stdio.h>
int main()
{
	int Num1, Num2;
	int product=0;

	printf("Insert two numbers: \n");
	scanf("%d %d", &Num1, &Num2);


	for (int i=1; i<=Num2; i++)
	{
		product=product+Num1;
	}

	printf("Product = %d", product);

	return 0;
}