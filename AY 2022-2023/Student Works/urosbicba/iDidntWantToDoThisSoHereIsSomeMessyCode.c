#include <stdio.h>
int main(){
	int dArr[10];
	int dEvenArray[5], dOddArray[5];
	int dCounter = 0, dEvenCounter = 0, dOddCounter = 0;

	for (int i = 0; i < 10; ++i)
	{
		printf("\n Enter a number in the slot %d: ", i);
		scanf("%d", &dArr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if(dArr[i] % 2 == 0){
			dEvenArray[dEvenCounter] = dArr[i];
			dEvenCounter++;
		}
		else {
			dOddArray[dOddCounter] = dArr[i];
			dOddCounter++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; ++j)
		{
			if(dOddArray[i] < dOddArray[j]){
				dCounter = dOddArray[i];
				dOddArray[i] = dOddArray[j];
				dOddArray[j] = dCounter;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; ++j)
		{
			if(dEvenArray[i] > dEvenArray[j]){
				dCounter = dEvenArray[i];
				dEvenArray[i] = dEvenArray[j];
				dEvenArray[j] = dCounter;
			}
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		if(i<5)
			dArr[i] = dEvenArray[i];
		else dArr[i] = dOddArray[i%5];
	}
	printf("\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", dArr[i]);
	}
	printf("\n");
	return 0;
}
