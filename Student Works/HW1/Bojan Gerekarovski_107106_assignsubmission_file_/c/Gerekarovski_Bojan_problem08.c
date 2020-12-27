#include<stdio.h>
void main(){
	int dInput;
	int db = 1;
	int dx = 0;
	printf("Input an integer between 1 to 10 only.\n");
	scanf_s("%d", &dInput);
	if (dInput > 10) {
		printf("Error, input an integer between 1 to 10 only.\n");
	}
	else {
		printf("x");
		for (int a = 1; a <= dInput; a++) {
			printf(" %d", a);
		}
		printf("\n");
		while (db <= 10) {
			for (int a = 1; a <= dInput; a++) {
				dx = a * db;
				printf("%d ", dx);
			}
			printf("\n");
			db++;
		}
	}

}
