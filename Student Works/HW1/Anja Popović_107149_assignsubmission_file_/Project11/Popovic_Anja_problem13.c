	#include<stdio.h>
	int main() {
		int n=0;
		int arr[100], odd[100], even[100];

		printf("\nEnter the size of the array!\n");
		scanf("%d", &n);
		printf("\nEnter elements in array!\n");
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}//endfor
		printf("\nElements of the array are: ");
		for (int i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}//endfor
		printf("\nEven elements in array: ");
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) {
				printf("%d ", arr[i]);
			}//endif
		
		}//endfor
		printf("\nOdd elements in array: ");
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 != 0) {
				printf("%d ", arr[i]);
			}//endif
		
		}//endfor

    

		return 0;
	}