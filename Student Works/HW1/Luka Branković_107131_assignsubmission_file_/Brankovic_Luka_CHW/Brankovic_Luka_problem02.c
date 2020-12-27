#include <stdio.h>

void main() {
	//declaring variables
	int dN;
	//asking the user to insert value of n
	printf("Enter value n: \n");
	scanf_s("%d", &dN);
	//printing the picture
	//for
	for (int i = dN; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}//endfor
}