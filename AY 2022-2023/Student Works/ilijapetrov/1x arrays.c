// A C program that will ask the user to enter 10 integers.
// The program will print all the contents of the array.
// The program will print how many odd numbers there are.

#include<stdio.h>

int main(){

	int dArr[10], dOddCtr=0;
	for (int i = 0; i < 10; i++)
	{
		printf("Please enter a number for element %d: ", i+1);
		scanf("%d", &dArr[i]);
	}//end of input for loop

	for (int i = 0; i < 10; i++)
	{
		printf("%d \t", dArr[i]);
		if (dArr[i]%2!=0)
		{
			dOddCtr++;
		}
	}//end of output and check if it is odd for loop
printf("\n \tYou have %d odd numbers. \n", dOddCtr);

}//end of main