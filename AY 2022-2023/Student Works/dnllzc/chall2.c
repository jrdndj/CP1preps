#include <stdio.h> 

int main() {
	int dNum1, dNum2, dRem;
	int cntr=1;
	printf("\n Give me first number: ");
	scanf("%d", &dNum1);

	printf("\n Give me second number: ");
	scanf("%d", &dNum2);

	dRem=dNum2;

	do {

		dNum1 = dNum1 - dRem;

		cntr++;

	}while(dNum1>dRem);

	printf("The result is %d\n", cntr);

	return 0;
}