
#include<stdio.h>

void main() {
	//declaring variables
	int dNum, dPrimeNum[] = {2,3,5,7};
	//prompt the user for a number
	printf("Enter an integer: ");
	scanf_s("%d", &dNum);
	//print all prime numbers lower than the number inserted
	printf("\nPrime numbers are: ");
	if (dNum < 11) {
		for (int i = 0; i < 4; i++) {
			if (dPrimeNum[i] < dNum) {
				printf("%d ", dPrimeNum[i]);
			}
		}
	}
	else {
		for (int i = 0; i < 4; i++) {
			printf("%d ", dPrimeNum[i]);
		}
		for (int i = 2; i <= dNum; i++) {
			if (i % 2 != 0 && i % 3 != 0 && i % 4 != 0 && i % 5 != 0 && i % 6 != 0 && i % 7 != 0 && i % 8 != 0 && i % 9 != 0) {
				printf("%d ", i);
			}
		}
	}
}