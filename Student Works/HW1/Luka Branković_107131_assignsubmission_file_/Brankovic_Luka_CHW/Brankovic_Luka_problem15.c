#include <stdio.h>
#include <stdlib.h>

int main() {
	//declaring variables
	char cString[100];
	int dCounter = 0;
	int dMax = 0;
	//inputing string
	scanf_s("%100s", cString, _countof(cString));
	printf("Original string: %s \n", cString);
	//here I've tried to use a for loop and count how many different characters appear before a repeating one appears
	for (int i = 0; i < 100; i++) {
		if (cString[i] != cString[i + 1]) {
			dCounter++;
		}
		else if (cString[i] == cString[i + 1]) {
			dCounter = dMax;
			break;
		}


	}
	printf("Length of the longest substring without repeating characters: %d", dMax);

	return 0;
}