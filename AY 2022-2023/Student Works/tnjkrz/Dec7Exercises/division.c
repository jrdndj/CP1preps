/*
	The program finds the division of two inputted integers.
	Assume that the two integers inputte will not
	have a remainder and that the first number is
	larger than the second number.
*/

#include <stdio.h>

int main() {
	//declares variables
	int num1, num2, count;

	//asks the user for input of two integers
	printf("The program will find the division of two integers (do not insert 0). \n");
	printf("Please enter the first integer: ");
	scanf("%d", &num1);
	printf("Please enter the second integers: ");
	scanf("%d", &num2);
	
	//finds division of two numbers without /
	for (int i = num1; i > 0; i-=num2)
	{
		count++;
	}

	//prints the division of two numbers
	printf("The divison of %d and %d is %d", num1, num2, count);


} //end main