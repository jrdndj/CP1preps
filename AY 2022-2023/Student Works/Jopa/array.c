/*
A C program that will ask the user to enter 10 intigers.
The prgram ill print all the contents of array.
The program will print how many odd numbers are there in the array.
*/
#include<stdio.h>

int main(){
	//declare variables
	int dArr[10], dOddCtr=0;

	//now we will ask the user for inputs using for loop
	for(int dCtr = 0; dCtr<10; dCtr++){
		printf("\n Please enter a number for slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);

	}//endforloop
	printf("\n");
	//print the contents of the array usng a for loop
	for(int dCtr=0; dCtr<10; dCtr++){
		printf("%d ", dArr[dCtr]);
		//check if the element is odd
		if( dArr[dCtr]%2!=0 ){
			dOddCtr++;
		}//endecheckifodd
	}//endprintloop

	printf("\n There are %d odd numbers in your array.\n", dOddCtr);

	return 0;
}
