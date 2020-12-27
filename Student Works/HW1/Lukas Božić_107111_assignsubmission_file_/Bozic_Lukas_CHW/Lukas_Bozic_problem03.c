
#include<stdio.h>

void main() {
	//declare variables
	int dNum = 1, dCounter = 0;
	float fResult = 0;
	//prompt the user for numbers
	printf("Write some positive integers, when you wish to stop just write 0.\n");
	//while loop to repeat until the user inputs 0
	while (dNum != 0) {
		scanf_s("%d", &dNum);
		//if number inserted is negative print error message
		if (dNum < 0) {
			printf("\nInsert a POSITIVE integer!\n");
		}
		else {
			//if number is 0 don't do anything
			if (dNum == 0) {
				break;
			}
			else {
				fResult += dNum;
				dCounter++;
			}
		}
	}
	//if there were no numbers before 0 print no average
	if (dCounter == 0) {
		printf("No average!\n");
	}
	else {
		fResult = fResult / dCounter;
		printf("Average of the positive integers is: %f", fResult);
	}
}