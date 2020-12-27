
#include<stdio.h>

void main() {
	int dNumbers[10];
	for (int i = 0; i < 10; i++) {
		printf("Insert %d. number in the array: ", i+1);
		scanf_s("%d", &dNumbers[i]);
	}
	int dMin = dNumbers[0];
	for (int i = 0; i < 10; i++) {
		if (dMin > dNumbers[i]) {
			dMin = dNumbers[i];
		}
	}
	printf("The smallest number in the array is: %d", dMin);
}