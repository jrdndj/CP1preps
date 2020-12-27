
#include<stdio.h>

void main() {
	//declaring variables
	int dLength, dNumbers[100], dEven[100], dOdd[100], dCounter1=0, dCounter2=0;
	//prompt the user for length of an array
	printf("Enter the length of an array: \n");
	scanf_s("%d", &dLength);
	//prompt the user for numbers
	for (int i = 0; i < dLength; i++) {
		printf("\nEnter %d. number in an array: ", i + 1);
		scanf_s("%d", &dNumbers[i]);
	}
	//check if numbers are even or odd and save in an appropriate array
	for (int i = 0; i < dLength; i++) {
		if (dNumbers[i] % 2 == 0) {
			dCounter1++;
			dEven[dCounter1 - 1] = dNumbers[i];
		}
		else {
			dCounter2++;
			dOdd[dCounter2 - 1] = dNumbers[i];
		}
	}
	//check if there are any even numbers, if so print them
	if (dCounter1 == 0) {
		printf("\nThere's no even numbers!");
	}
	else {
		printf("\nEven numbers: ");
		for (int i = 0; i < dCounter1; i++) {
			printf("%d ", dEven[i]);
		}
	}
	//check if there are any odd numbers, if so print them
	if (dCounter2 == 0) {
		printf("\nThere's no odd numbers!");
	}
	else {
		printf("\nOdd numbers: ");
		for (int i = 0; i < dCounter2; i++) {
			printf("%d ", dOdd[i]);
		}
	}
}