#include <stdio.h>

int main() {

	int dArr[10], dCounter=0, dEven=0;

	printf("ENTER SOME NUMBERS IN ARRAY\n");

//	with FOR LOOPS!
	// for (int i=0; i<10; i++) {
	// 	printf("\nEnter number for slot [%d]: ", i);
	// 	scanf("%d", &dArr[i]);
	// }

	// //checking the number of even numbers
	// for (int i=0; i<10; i++) {
	// 	if ( dArr[i]%2==0 ) {
	// 		dEven++;
	// 	}
	// }

	while (dCounter<10) {
		printf("\nEnter number for slot [%d]: ", dCounter);
		scanf("%d", &dArr[dCounter]);
		if ( dArr[dCounter]%2==0 ) { //condition to check if even
			dEven++;
		} 
		dCounter++;
	}

	//hhhhhhhhhhhhhhhhhhhhhhh

	printf("The number of even numbers in array is %d\n", dEven);

	return 0;

}