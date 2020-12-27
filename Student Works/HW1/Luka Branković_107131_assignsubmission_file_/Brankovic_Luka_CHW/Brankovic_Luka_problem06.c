#include <stdio.h>

void main() {
	//declaring variables
	int dArray[10];
	//asking the user to insert 10 integers
	printf("insert 10 numbers \n");
	//for
	for (int i = 0; i < 10; i++) {
		printf("Next number: ");
		scanf_s(" %d", &dArray[i]);
	}//endfor
	//finding the minimum value
	int dMin = dArray[0];
	//for
	for (int i = 0; i < 10; i++) {
		if (dArray[i] <= dMin) {
			dMin = dArray[i];
		}
	}//endfor
	//printing the result
	printf("The smallest number is %d \n", dMin);
}