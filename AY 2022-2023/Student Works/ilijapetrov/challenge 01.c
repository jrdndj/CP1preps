#include<stdio.h>

int main(){

	int dNum1;
	int dNum2;

	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	printf("\n Give me an integer: ");
	scanf("%d", &dNum2);

	int dProduct=0;

	for (int i = 0; i < dNum2; i++)
	{
		dProduct+=dNum1;
	}
	printf("\n Product is: %d \n",dProduct);

	return 0;
}