
#include<stdio.h>

void main() {
	//declaring variables
	int dLength;
	//prompt the user for length
	printf("Enter the length of an array(min 5 and max 25): ");
	scanf_s("%d", &dLength);
	//check if length is inside the range
	if (dLength < 5 || dLength > 25) {
		printf("The length of an array should be min 5 and max 25!");
	}
	else {
		//declare more variables
		int dNumbers[25], dCounter=0, dResult;
		//prompt the user for numbers in array
		for (int i = 0; i < dLength; i++) {
			printf("Insert %d. number in array: ", i + 1);
			scanf_s("%d", &dNumbers[i]);
		}
		//count the total number of duplicate elements
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