#include<stdio.h>
int main() {
	int arr[25];
	int count = 0;

	printf("\nEnter more than 5 elements in array and less than 25!\n");
	for (int i = 0; i < 25; i++) {
		scanf("%d ", &arr[i]);
	}//endfor
	
	for (int i = 0; i < 25; i++) {
		
		for (int j = i+1; j < 25; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}//endif
			
		}//endfor
	}//endfor
	printf("\nNumber of duplicate elements is:%d ", count);


	return 0;
}
