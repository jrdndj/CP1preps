
#include<stdio.h>

void main() {
	int dLength;
	printf("Enter the length of an array(min 5 and max 25): ");
	scanf_s("%d", &dLength);
	if (dLength < 5 || dLength > 25) {
		printf("The length of an array should be min 5 and max 25!");
	}
	else {
		int dNumbers[25], dCounter=0, dResult;
		for (int i = 0; i < dLength; i++) {
			printf("Insert %d. number in array: ", i + 1);
			scanf_s("%d", &dNumbers[i]);
		}
		for (int i = 0; i < dLength; i++) {
			for (int j = i + 1; j < dLength; j++) {
				if (dNumbers[i] == dNumbers[j]) {
					dCounter++;
					break;
				}
			}
		}
		printf("Total number of duplicate elements without original numbers is %d", dCounter);
	}
}