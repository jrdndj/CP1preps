#include<stdio.h>

int main()
{
	int dArray[10], dMaxPos = 0;
	
	printf("Input 10 integers: ");
	for(int i = 0; i<10; i++)
	{
		scanf("%d", &dArray[i]);
	}
	
	for (int j = 0; j < 10; j++)
	{
		if (dArray[j] > dArray[dMaxPos]) dMaxPos = j;
	}
	printf("Largest number is: %d\n", dArray[dMaxPos]);
	
	return 0;
	
} //end main