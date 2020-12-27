#include<stdio.h>

int main()
{
	//NOTE: i have no idea how this doesn't work. 
	//I've decided to include it after spending way too much time on it.

	int dArrSize=0;
	int dOddSize=0;
	int dEvenSize=0;
	
	printf("Input the size of the array:\n");
	scanf("%d", &dArrSize);

	
	int d1dArray[dArrSize];
	printf("Input elements of array, delimited by spaces: ");
	//scanf
	for(int i=0; i<dArrSize; i++) 
	{
		scanf(" %d", &d1dArray[i]);
	}
	//size of arrays
	for(int i = 0; i<dArrSize; i++)
	{
		if (d1dArray[i]%2==0) 
		{
			dEvenSize++;
		}
		else dOddSize++;
	}
	
	//printf("Size of even array is %d, odd array is %d. \n", dEvenSize, dOddSize);
	//define arrays
	int d1dOddArray[dOddSize];
	int d1dEvenArray[dEvenSize];
	int dOddIndex = 0;
	int dEvenIndex = 0;
	
	for (int i = 0; i< dEvenSize; i++)
	{
		if(d1dArray[i]%2==0)
		{
			d1dEvenArray[dEvenIndex]=d1dArray[i];
			dEvenIndex++;
		}
	}
	for (int j = 0; j<dOddSize; j++)
	{
		if(d1dArray[j]%2!=0)
		{
			d1dOddArray[dOddIndex]=d1dArray[j];
			dOddIndex++;
		}
	}


	//printf
	printf("Even numbers:");
	for(int i = 0; i<dEvenSize; i++)
	{
		printf("%d ",d1dEvenArray[i]);
	}
	printf("\n");
	printf("Odd numbers:");
	for(int i = 0; i<dOddSize; i++)
	{
		printf("%d ",d1dOddArray[i]);
	}
	//debug
	/*	
	printf("\n");
	for(int i = 0; i<dArrSize; i++)
	{
		printf(" %d", d1dArray[i]);
	}
	return 0;
*/	
} //end main