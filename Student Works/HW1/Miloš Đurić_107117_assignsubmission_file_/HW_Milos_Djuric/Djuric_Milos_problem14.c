#include <stdio.h>

/*
Write a program in C to count a total number of duplicate elements in an array. Minimum should
be 5 and maximum is 25 elements. Inputs must be integers (both negative and positive)
*/
int main (int argc, char *argv[]) {

int dLen = 10;
int ar[] = {2,99,2,3,4,2,6,7,-1,-1};
int dDup = 0;

for (int r = 0; r < dLen; ++r) {
	for (int c = r + 1; c < dLen; ++c) {
		
		if (ar[r] == ar[c])	{
			++dDup;
			break;	// prevents double counting, all with all
		}
	}
}

printf("Total duplicates in array: %d\n", dDup);

return 0;
}