#include <stdio.h>
/*
A C program that will ask the user to enter 10 integers.
The program will print all the contents of array.
The program will print how many odd numbers are there in the array.
*/
int main(){
	//int dArr[5];
	//declaration: i have an integer array with 5 slots

	//int aArr[5]={3,4,5,6,7};
	// i have initialized the ff values in the array

	//print the arrays-we need a loop to print each element

	//declare variables
	int dArr[10], dOddCtr=0;

	//now we will ask the user for inputs using a for loop
	for (int dCtr=0; dCtr<10; dCtr++){
		printf("\n Please enter a number for slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);
	}
	printf("\n");
	//print the content of array using a for loop
	for(int dCtr=0; dCtr<10; dCtr++){
		printf("%d ", dArr[dCtr]);
		//check if the element is odd
		if( dArr[dCtr]%2!=0 ){
			dOddCtr++;
		}
	}
	printf("\n There are %d odd numbers in your array.\n", dOddCtr);

	return 0;
}
