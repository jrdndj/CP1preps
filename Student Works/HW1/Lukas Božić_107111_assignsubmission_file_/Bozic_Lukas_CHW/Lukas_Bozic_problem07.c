
#include<stdio.h>

void main() {
	//declare variables
	int dNum = 0, dCounter = 0;
	//repeat until the user enters 999
	while (dNum != 999) {
		//prompt the user to insert numbers
		printf("\nEnter one or two digit integer: ");
		scanf_s("%d", &dNum);
		//if number entered is outside of range and is not 999 print error message, if it's in the range print it 3 times
		if ((dNum > 99 || dNum < -99) && dNum != 999) {
			printf("\nThe number should have 2 digits max!\n");
		}
		else if(dNum <= 99 && dNum >= -99) {
			for (int i = 0; i < 3; i++) {
				printf("%d", dNum);
			}
		}
	}
}