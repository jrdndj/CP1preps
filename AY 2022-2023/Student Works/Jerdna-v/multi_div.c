#include <stdio.h>

int main() {
	int dNum1,dNum2;
	printf("Give 1. int number: ");
	scanf("%d", &dNum1);
	printf("Give 2. int number: ");
	scanf("%d", &dNum2);

	int j = 1,k=-1, multi=0;
	do
	{
		multi+=dNum1;
		j++;
	} while (j<=dNum2);
	printf("Multiplication: %d\n",multi);

	do
	{
		dNum1-=dNum2;
		k++;
	} while (dNum1>=0);
	printf("Division: %d\n",k);

	return 0;
}