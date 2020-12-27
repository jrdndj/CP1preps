
#include<stdio.h>

void main() {
	//declare an array
	int dNumbers[10];
	//putting numbers in the array
	for (int i = 0; i < 10; i++) {
		printf("Insert %d. number in the array: ", i+1);
		scanf_s("%d", &dNumbers[i]);
	}
	//make dMin to be the first number of the array
	int dMin = dNumbers[0];
	//check to see if dMin is really the smallest number in the array, if not replace it with the smallest number
	for (int i = 0; i < 10; i++) {
		if (dMin > dNumbers[i]) {
			dMin = dNumbers[i];
		}
	}
	//print the smallest number
	printf("The smallest number in the array is: %d", dMin);
}