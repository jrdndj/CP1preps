#include <stdio.h>

int main() {
	printf("\nEnter 10 integers\n");

	int arr[10];

	for (int i=0; i<10; i++) {
		printf("[%d]=", i);
		scanf("%d", &arr[i]);
	}

	int max = 0;

	for (int i=0; i<10; i++) {
		if ( max < arr[i] ) {
			max = arr[i];
		}
	}

	int small = max;

	for (int i=0; i<10; i++) {
		// for (int j=0; j<10; j++) {
		// 	if ( i != j ) {
		// 		if ( arr[i] < arr[j])
		// 	}
		// }
		if ( arr[i] < small ) {
			small = arr[i];
		}
	}
	printf("\nSmallest integer in array is %d\n", small);
}