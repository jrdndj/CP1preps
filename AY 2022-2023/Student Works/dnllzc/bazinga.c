#include <stdio.h>

int main() {

	int dNum, dFirst, dSecond;
	printf("\nInput two digit number: ");
	scanf("%d", &dNum);
	dFirst = dNum/10;
	dSecond = dNum - (dFirst*10);

	if (dFirst && !dSecond) {
		printf("\nBazinga!\n");
	}
	else if (!dFirst && dSecond) {
		printf("\nBooyeah!\n");
	}
	else {
		printf("\nAlakazam!\n");
	}

	return 0;
}