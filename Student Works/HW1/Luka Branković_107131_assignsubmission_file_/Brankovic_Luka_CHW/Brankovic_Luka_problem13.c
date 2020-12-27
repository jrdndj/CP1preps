#include <stdio.h>

int main() {
	//declaring variables
	int dArray[100];
	int dSize;
	int dArrayOdd[100];
	int dArrayEven[100];
	int dOddCount = 0;
	int dEvenCount = 0;
	//inserting the size of array
	printf("Insert size of array: \n");
	scanf_s("%d", &dSize);
	//inserting the values in array
	//for
	for (int i = 0; i < dSize; i++) {
		scanf_s(" %d", &dArray[i]);
	}//endfor
	//finding odd and even numbers
	//for
	for (int i = 0; i < dSize; i++) {
		//if
		if (dArray[i] % 2 == 0) {
			dArrayEven[dEvenCount] = dArray[i];
			dEvenCount++;
		}//endif
		//else
		else {
			dArrayOdd[dOddCount] = dArray[i];
			dOddCount++;
		}//endelse
	}//endfor
	//printing the results
	printf("Even numbers are: \n");
	//for
	for (int i = 0; i < dEvenCount; i++) {
		printf("%d \n", dArrayEven[i]);
	}//endfor
	printf("Odd numbers are: \n");
	//for
	for (int i = 0; i < dOddCount; i++) {
		printf("%d \n", dArrayOdd[i]);
	}//endfor


	return 0;
}