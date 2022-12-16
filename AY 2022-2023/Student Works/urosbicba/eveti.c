#include <stdio.h>
int main(){
	int dArr[10];
	int dCounter = 0;
	for (int i = 0; i < 10; ++i)
	{
		printf("\n Enter a number in the slot %d: ", i);
		scanf("%d", &dArr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; ++j)
		{
			if(dArr[i] < dArr[j]){
				dCounter = dArr[i];
				dArr[i] = dArr[j];
				dArr[j] = dCounter;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", dArr[i]);
	}
	printf("\n");
	return 0;
}
