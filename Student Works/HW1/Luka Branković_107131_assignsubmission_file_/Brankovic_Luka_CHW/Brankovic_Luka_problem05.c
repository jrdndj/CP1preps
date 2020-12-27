#include <stdio.h>

void main() {
	//declaring variables
	int dN, dM;
	//inputing the value of n
	printf("Insert value for n: \n");
	scanf_s("%d", &dN);
	//printing the first half of the picture
	//for
	for (int i = 0; i <= dN; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}//endfor
	//calculating the value of m
	dM = dN - 1;
	//printing the second half of the picture
	//for
	for (int i = dM; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}//endfor
	return 0;
}