#include <stdio.h>

int main() {
	// local variables
	int dNum1 = 0, hundreds = 0, tens = 0, ones = 0;

	// ask a user for input
	printf("\n Input a three digit number: \n");
	scanf("%d", &dNum1);

	// do the calculation to pull all the digits separately
	hundreds = dNum1 / 100;
	tens = (dNum1/10) - (hundreds*10);
	ones = dNum1 - (hundreds*100) - (tens*10);

	// print the results
	printf("\n Hundreds: %d \n", hundreds);
	printf("\n Tens: %d \n", tens);
	printf("\n Ones: %d \n", ones);

	return 0;
}
