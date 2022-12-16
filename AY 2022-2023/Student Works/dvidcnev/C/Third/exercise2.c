#include <stdio.h>

int main() {

	int dNum1=0, dNum2;

	printf("ENTER NUMBER: ");
	scanf("%d", &dNum1);
	printf("ENTER NUMBER: ");
	scanf("%d", &dNum2);

	for (int i=1; i<dNum1; i++) {
		for (int j=1; j<dNum2; j++) {
			printf("%d x %d = %d \t", j, i, i*j); //if we want to print how it's multiplied
			// printf("%d \t", i*j); //if we want to print only the product
		}
		printf("\n");
	}

	return 0;
}

//SQUARE MATRIX