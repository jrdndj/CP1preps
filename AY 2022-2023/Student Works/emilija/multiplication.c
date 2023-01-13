#include <stdio.h>

int main()
{
	int dNum1, dNum2;
	printf("\nEnter first int:");
	scanf("%d", &dNum1);
	printf("\nEnter second int:");
	scanf("%d", &dNum2);
	int dMul=0;


	//multiplication
	while(dNum2!=0){
		dMul+=dNum1;
		dNum2--;
	}
	printf("The product of %d and %d is %d \n", dNum1, dNum2, dMul);

	return 0;
}