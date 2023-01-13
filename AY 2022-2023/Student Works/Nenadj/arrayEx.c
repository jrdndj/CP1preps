#include <stdio.h>
void printarr(int arr[], int n) {
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Increment(int arr[]) { // An array is a pointer of itself
	arr[0]++; // Array reserves a sequentual value in its storage
} // Pointers are not needed when using arrays
int main() {
	int arr[3] = {4,8,14};
	printarr(arr,3);
	Increment(arr);
	printarr(arr,3);
	return 0;
}