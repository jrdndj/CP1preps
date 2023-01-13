/*
A C program that will ask the user to enter 10 integers.
The program will print all the contet of the array.
The program will perint how many odd numbers are there in the array.
*/
#include <stdio.h>

int main(){
	//declare varibles
	int dArr[10], dOddCtr=0;

	//now we will ask the user for inputs using a for loop
	for(int dCtr = 0; dCtr<10; dCtr++){
		printf("\n Please enter a number for slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);

	}//endforloop

	printf("\n");

	//print the contents of the array using the foor loop
	for(int dCtr=0; dCtr<10; dCtr++){
		printf("%d ", dArr[dCtr]);
		//check if the elemnt is odd
		if( dArr[dCtr]%2!=0 ){
			dOddCtr++;
		}//endcheckifodd
	}//endprintloop

	printf("\n There are %d odd numbers in your array.\n ", dOddCtr);

	return 0;
}//end main
