#include<stdio.h>

//A c program that asks the user to enter a number between 1 to 10. Then the program prints 
//an inverted right triangle with the input number as the base (or max number) of asterisks.

int main(){

	int dNum1;
	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	for (int i = 0; i < dNum1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}//end of j loop

		for (int k = dNum1-i; k > 0; k--)
		{
			printf("*");
		}//end of k loop
	printf("\n");
	}//end of i loop

return 0;
}