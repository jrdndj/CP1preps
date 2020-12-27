/*
	Problem 14
*/
#include <stdio.h>
void main() {
	int arr1[25], arr2[25], arr3[25];
	int n, i, j, mm = 1, ctr = 0;
	printf("Input the number of elements to be stored in the array :");
	scanf("%d", &n);

	printf("Input %d elements in the array :\n", n);
	for (i = 0; i < n; i++) {
		printf("element with num  %d : ", i);
		scanf("%d", &arr1[i]);
	}
	//copy in other array 
	for (i = 0; i < n; i++)
	{
		arr2[i] = arr1[i];
		arr3[i] = 0;
	}
	// elements are duplicate
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr1[i] == arr2[j])
			{
				arr3[j] = mm;
				mm++;
			}
		}
		mm = 1;
	}
	// Prints the array 
	for (i = 0; i < n; i++)
	{
		if (arr3[i] == 2) { ctr++; }
	}
	printf("Duplicates %d \n", ctr);
}