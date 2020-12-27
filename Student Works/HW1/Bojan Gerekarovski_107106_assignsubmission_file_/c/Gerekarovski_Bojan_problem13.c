
#include<stdio.h>

void main() {
	int dLength1, dLength2, dLength3, dNumbers[100], dEven[50], dOdd[50], dRemain=0, dCounter1 = 0, dCounter2 = 0, dCheckNum = 1;
	printf("Enter the length of an array(max length is 100): ");
	scanf_s("%d", &dLength1);
	for (int i = 0; i < dLength1; i++) {
		printf("\nEnter %d. number in the array: ", i + 1);
		scanf_s("%d", &dNumbers[i]);
	}
	dLength2 = dLength1;
	dLength3 = dLength1;
	for (int i = 0; i < dLength2; i++) {
		if (dNumbers[i] % 2 == 0) {
			dCounter1++;
		}
		else {
			dCounter2++;
		}
		for (int j = 0; j < dLength1; j++) {
			if (dNumbers[j] % 2 == 0 && dNumbers[j] != dCheckNum) {
				dEven[i] = dNumbers[j];
				dRemain = dLength1 - j;
			}
		}
		dCheckNum = dEven[i];
		dLength1=dLength1-dRemain;
	}
	dRemain = 0;
	dCheckNum = 0;
	for (int i = 0; i < dLength2; i++) {
		for (int j = 0; j < dLength3; j++) {
			if (!(dNumbers[j] % 2 == 0) && dNumbers[j] != dCheckNum) {
				dOdd[i] = dNumbers[j];
				dRemain = dLength3 - j;
			}
		}
		dCheckNum = dOdd[i];
		dLength3=dLength3-dRemain;
	}
	if (dCounter1 != 0) {
		printf("\nEven numbers are: ");
		for (int i = 0; i < dCounter1; i++) {
			printf("%d ", dEven[i]);
		}
	}
	else {
		printf("\nThere's no even numbers!");
	}
	if (dCounter2 != 0) {
		printf("\nOdd numbers are: ");
		for (int i = 0; i < dCounter2; i++) {
			printf("%d ", dOdd[i]);
		}
	}
	else {
		printf("\nThere's no odd numbers!");
	}
}