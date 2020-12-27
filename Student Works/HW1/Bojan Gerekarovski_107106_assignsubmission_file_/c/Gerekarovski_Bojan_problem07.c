
#include<stdio.h>

void main() {
	int dNum = 0, dCounter = 0;
	while (dNum != 999) {
		printf("\nEnter one or two digit integer: ");
		scanf_s("%d", &dNum);
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