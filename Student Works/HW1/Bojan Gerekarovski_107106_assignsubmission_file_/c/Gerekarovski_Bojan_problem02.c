
#include<stdio.h>

void main() {
	int dN = 0, dCounter1 = 1, dCounter2;
	printf("Insert n: \n");
	scanf_s("%d", &dN);
	dCounter2 = dN;
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