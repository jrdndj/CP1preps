#include<stdio.h>
int main() {
	int num[10];
	
	printf("\nPlease enter 10 numbers!\n");

	for (int i = 0; i < 10; ++i) {
		scanf("%d", &num[i]);
	}
	int min = num[0];
	for (int i = 0; i < 10; i++) {
		if (min > num[i]) {
			min = num[i];
		}
	}
	printf("%d", min);

	return 0;
}