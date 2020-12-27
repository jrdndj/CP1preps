
#include<stdio.h>

void main() {
	//declare variables
	int dN = 0, dCounter1 = 1, dCounter2;
	//prompt the user for n
	printf("Insert n: \n");
	scanf_s("%d", &dN);
	dCounter2 = dN;
	//making a picture
	for (int i = 0; i < dN; i++) {
		for (int j = 0; j < dCounter2; j++) {
			printf("*");
		}
		printf("\n");
		for (int k = 0; k < dCounter1; k++) {
			printf(" ");
		}
		dCounter2--;
		dCounter1++;
	}
}