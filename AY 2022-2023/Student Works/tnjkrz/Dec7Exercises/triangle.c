#include <stdio.h>

int main() {
	//declares variables
	int num;

	//asks user for input of integer
	printf("Please enter the first integer: ");
	scanf("%d", &num);


	for (int i = 0; i < num; ++i)
	{

		for (int k = 0; k < i; ++k)
		{
			printf(" "); //prints spaces
		}

		for (int j = num; j > i; --j)
		{
			printf("*"); //prints asterisks
		}

		printf("\n"); //creates new line
	}

	return 0;

} //end main