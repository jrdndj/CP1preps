#include <stdio.h>

int main() {
	//declaring variables
	int dArray[25];
	int dSize;
	int dCounter = 0;
	//inserting the size of array
	printf("insert size of array (not more than 25): \n");
	scanf_s("%d", &dSize);
	//inserting the elements of array
	//for
	for (int i = 0; i < dSize; i++) {
		scanf_s("%d", &dArray[i]);
	}//endfor
	//finding the duplicate elements
	//for
	for (int i = 0; i < dSize; i++) {
		//for2
		for (int j = i + 1; j < dSize; j++) {
			//if
			if (dArray[i] == dArray[j]) {
				dCounter++;
			}//endif
		}//endfor2
	}//endfor
	//printing the result
	printf("Number of duplicate elements is: %d \n", dCounter);
	return 0;
}