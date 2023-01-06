/*
Challenge 02: program that allows the user to input two numbers. 
Print the quotient (division) of the two numbers. However you
cannot use the division (/) symbol. For this example, assume 
there are no remainders and the first number is larger than the
second number.

Hint: Multiplication is a form of repeated addition. Division is
a form of repeated subtraction.
*/
#include <stdio.h>
int main()
{
	int Num1, Num2;
	int result=0;

	printf("Insert two numbers: \n");
	scanf("%d %d", &Num1, &Num2);

	while(Num1>=Num2){
		Num1=Num1-Num2;
		result++;
	}

	printf("Quotient: %d", result);

	return 0;
}