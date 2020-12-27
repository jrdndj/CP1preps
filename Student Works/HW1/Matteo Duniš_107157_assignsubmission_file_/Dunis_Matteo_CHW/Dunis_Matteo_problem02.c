#include<stdio.h>

int main() {
	int dUI,i,j;
	printf("Input a number: ");
	scanf_s("%d", &dUI);

		for(int i = 1; i <= dUI; i++) {
			for (j = 1; j < i;j++) {
				printf(" ");
			}
			for (j = i; j <= dUI;j++) {
				printf("*");
			}
			printf("\n");
	}
	return 0;
}