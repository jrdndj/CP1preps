
#include<stdio.h>
#include<string.h>

void main() {
	//declaring variables
	char sString[100];
	int dCounter = 1, dLength, dDiff[100], dMax;
	//prompt the user for a string
	printf("Enter a string that has less than 100 characters!\n");
	gets(sString);
	//get the length of a string
	dLength = strlen(sString);
	for (int i = 0; i < dLength; i++) {
		for (int j = 0; j < dLength; j++) {
			//if characters are not equal add 1 to counter
			if (sString[i] != sString[j]) {
				dCounter++;
			}
			else {
				break;
			}
		}
		//after each substring save the counter and return counter to 1
		dDiff[i] = dCounter;
		dCounter = 1;
	}
	//find the max counter value
	dMax = dDiff[0];
	for (int i = 0; i < dLength; i++) {
		if (dMax < dDiff[i]) {
			dMax = dDiff[i];
		}
	}
	//if all the characters in the string are the same make max counter 0
	if (dMax == 1) {
		dMax = 0;
	}
	printf("Length of the longest substring without repeating characters is: %d", dMax);
}