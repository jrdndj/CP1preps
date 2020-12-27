#include<stdio.h>

void main() {
	int dInput;
	printf("Input an integer\n");
	scanf_s("%d", &dInput);
	printf("Prime numbers are: 2,3,5,7,");
	for (int a = 2; a <= dInput; a++) {
		if (a % 2 != 0 && a % 3 != 0 && a % 4 != 0 && a % 5 != 0 && a % 6 != 0 && a % 7 != 0 && a % 8 != 0 && a % 9 != 0) {
			printf("%d,", a);
		}
	}
}