
#include<stdio.h>

void main() {
	int dNum = 1, dCounter = 0;
	float fResult = 0;
	printf("Write some positive integers, when you wish to stop just write 0.\n");
	while (dNum != 0) {
		scanf_s("%d", &dNum);
		if (dNum < 0) {
			printf("\nInsert a POSITIVE integer!\n");
		}
		else {
			if (dNum == 0) {
				break;
			}
			else {
				fResult += dNum;
				dCounter++;
			}
		}
	}
	if (dCounter == 0) {
		printf("No average!\n");
	}
	else {
		fResult = fResult / dCounter;
		printf("Average of the positive integers is: %f", fResult);
	}
}