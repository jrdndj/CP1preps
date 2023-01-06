#include <stdio.h>

int main () {
	printf("\nEnter length of array: ");
	int n = 0;
	scanf("%d", &n);
	int evencounter = 0, oddcounter=0;

	int arr[n];
	for (int i=0; i<n; i++) {
		printf("[%d]=", i);
		scanf("%d", &arr[i]);
	}

	for (int i=0; i<n; i++) {
		if ( arr[i]%2==0 ) {
			evencounter++;
		}
		else {
			oddcounter++;
		}
	}

	int evenarr[evencounter], oddarr[oddcounter], k=0, l=0;

	for (int i=0; i<n; i++) {
		if ( arr[i]%2==0 ) {
			evenarr[k]=arr[i];
			k++;
		}
		else {
			oddarr[l]=arr[i];
			l++;
		}
	}

	printf("\nEven array: ");
	for (int i=0; i<evencounter; i++) {
		printf("%d ", evenarr[i]);
	}

	printf("\nOdd array: ");
	for (int i=0; i<oddcounter; i++) {
		printf("%d ", oddarr[i]);
	}
	printf("\n");


	return 0;
}