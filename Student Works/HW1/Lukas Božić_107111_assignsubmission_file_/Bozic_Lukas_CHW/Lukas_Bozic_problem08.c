
#include<stdio.h>

void main(){
	//declaring variables
	int dNumber, dA = 1, dB = 0;
	//prompt the user for a number
	printf("Input an number between 1 to 10: ");
	scanf_s("%d", &dNumber);
	//check if it is in the range
	if (dNumber > 10 || dNumber < 1) {
		printf("\nNumber has to be between 1 to 10 only.\n");
	}
	else {
		//print the multiplication table
		printf("x");
		for (int i = 1; i <= dNumber; i++) {
			printf(" %d", i);
		}
		printf("\n");
		while (dA <= 10) {
			for (int i = 1; i <= dNumber; i++) {
				dB = i * dA;
				printf("%d ", dB);
			}
			printf("\n");
			dA++;
		}
	}

}
