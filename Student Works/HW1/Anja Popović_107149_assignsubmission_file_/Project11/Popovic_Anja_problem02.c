#include<stdio.h>
int main() {
	int N,j,i,k;
	printf("\nPlease, enter your dimension!\n");
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j < i; j++) {
			printf(" ");
		}
		for (k = i; k <= N; k++) {
			printf("*");

		}
		printf("\n");

	}

	return 0;
}