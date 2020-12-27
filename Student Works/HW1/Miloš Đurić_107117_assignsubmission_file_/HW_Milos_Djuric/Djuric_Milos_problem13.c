#include <stdio.h>
/*
Write a C program to input elements in an array.
After all numbers are inserted in array,
put even and odd elements in two separate arrays.
Example:
Input:
Input size of an array: 10
Elements to be inserted in array: 0 1 2 3 4 5 6 7 8 9
Output:
Array of even elements: 0 2 4 6 8
Array of odd elements: 1 3 5 7 9
*/
int main (int argc, char *argv[]) {

int dLen, ec = 0, oc = 0, eLen = 0, oLen = 0;

printf("How many elems: ");
scanf("%d", &dLen);

int num[dLen];
for (int i = 0; i < dLen; ++i) {
	
	printf("%d: ", i+1);
	scanf("%d", &num[i]);
	// separation could be done here with arrayList
	if (num[i] % 2 == 0)	++eLen;
	else					++oLen;
}

int even[eLen];
int odd[oLen];

// separation
for (int i = 0; i < dLen; ++i) {
	
	if (num[i] % 2 == 0)	even[ec++] = num[i];
	else					odd[oc++] = num[i];
}


printf("Array of even elements: ");
for (int i = 0; i < eLen; ++i)	printf("%d ", even[i]);
printf("\n");

printf("Array of odd elements: ");
for (int i = 0; i < oLen; ++i)	printf("%d ", odd[i]);
printf("\n");



return 0;
}