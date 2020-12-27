#include<stdio.h>
#include <string.h>

int main()
{
	char cInput;

	printf("Animal insurance: \nA program that prints the insurance fee to pay for a pet. \n");
	printf("Input code (D - Dog, C - Cat, B - Bird, R - Reptile): ");
	switch (cInput = getchar())
	{
		case 'd':
		case 'D':
		printf("A dog that has been neutered costs $50. \n");
		printf("A dog that has not been neutered costs $80. \n");
		break;
	
		case 'c':
		case 'C':
		printf("A cat that has been neutered costs $40. \n");
		printf("A cat that has not been neutered costs $60. \n");
		break;
		
		case 'b':
		case 'B':
		case 'r':
		case 'R':
		printf("A bird or a reptile costs nothing. \n");
		break;
		
		default:
		printf("Error!");
	}

    return 0;
	
} //end main