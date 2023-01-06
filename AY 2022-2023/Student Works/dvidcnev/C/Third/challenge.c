#include <stdio.h> 

int main() {

	int dArr[10], dNum=0;;

	printf("ENTER SOME NUMBERS IN ARRAY\n");

//	with FOR LOOPS!
	for (int i=0; i<10; i++) {
		printf("\nEnter number for slot [%d]: ", i);
		scanf("%d", &dArr[i]);
	}

//	SORTING
	for (int i=0; i<10; i++) {
		dNum=dArr[i];
		for (int j=0; j<10; j++) {
			if ( dArr[j] < dArr[i] ) {
				dArr[i] = dArr[j];
				dArr[j]=dArr[i];
			}
		}
	}

	printf("Array: [ ");
	for (int i=0; i<10; i++) {
		printf("%d ", dArr[i]);
	}
	printf("]\n"); //unfinished

	return 0;

}