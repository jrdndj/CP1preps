#include<stdio.h>
void main() {
	int dInput;
	int dInput2;
	printf("Input figure among following figures.\n0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
	scanf_s("%d", &dInput);
	printf("How many days does the month have?\nInput figure\n");
	scanf_s("%d", &dInput2);
	printf("Su Mo Tu We Th Fr Sa\n");
	for (int a = 0; a < dInput; a++) {
		printf("   ");
		}
	for (int a = 1; a <= 7 - dInput; a++) {
		printf("%d ", a);
	}
	printf("\n");
	int c = 1;
	int b = 8 - dInput;
		while (b <= dInput2) {
			printf("%d  ", b);
			if (c % 7 == 0) {
				printf("\n");
			}
			b++;
			c++;
	}
}