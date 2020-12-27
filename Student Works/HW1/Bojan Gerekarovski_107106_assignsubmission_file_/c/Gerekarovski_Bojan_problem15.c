
#include<stdio.h>
#include<string.h>

void main() {
	char sString[100];
	int dCounter = 1, dLength, dDiff[100], dMax;
	printf("Enter a string that has less than 100 characters!\n");
	gets(sString);
	dLength = strlen(sString);
	for (int i = 0; i < dLength; i++) {
		for (int j = 0; j < dLength; j++) {
			if (sString[i] != sString[j]) {
				dCounter++;
			}
			else {
				break;
			}
		}
		dDiff[i] = dCounter;
		dCounter = 1;
	}
	dMax = dDiff[0];
	for (int i = 0; i < dLength; i++) {
		if (dMax < dDiff[i]) {
			dMax = dDiff[i];
		}
	}
	if (dMax == 1) {
		dMax = 0;
	}
	printf("Length of the longest substring without repeating characters is: %d", dMax);
}