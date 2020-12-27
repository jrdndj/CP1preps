#include<stdio.h>

int main()
{
	int dN = 0;
	
	printf("Enter a positive integer pls: ");
	scanf(" %d", &dN);
	fflush(stdin);

	for(int i = 1; i<=dN; i++) //for all numbers 1 to N
	{
		for(int j = 0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(int i = dN-1; i>=1; i--) //for all numbers N-1 to 1
	{
		for(int j = 0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//I KNOW OKAY I KNOW, BUT IT WORKS
	return 0;
	
} //end main