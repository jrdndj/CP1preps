#include <stdio.h> 

int main() {
	int dNum1, dNum2, dAdd;
	int cntr=1;
	printf("\n Give me first number: ");
	scanf("%d", &dNum1);

	printf("\n Give me second number: ");
	scanf("%d", &dNum2);

	dAdd=dNum1;

	do {

		dNum1 = dNum1 + dAdd;

		cntr++;

	}while(cntr<dNum2);

	printf("The result is %d\n", dNum1);

	return 0;
}