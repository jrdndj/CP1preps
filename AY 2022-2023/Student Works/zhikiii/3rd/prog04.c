/*
	arrays
	enter 5 integers in an array 
	print how many even elements are in the array
*/
#include <stdio.h>

int main(){
	//declare arr
	int dArr[5], dEvenCount=0;

	//use for for loop to ask the user for input
	for(int dCount=0; dCount<5; dCount++){
		printf("\n Enter number %d: ", dCount+1);
		scanf("%d", &dArr[dCount]);

		//immediately check if the number is even
		if(dArr[dCount]%2==0)
			dEvenCount++;

	}

	printf("\n %d numbers are even\n", dEvenCount);


	return 0;
}