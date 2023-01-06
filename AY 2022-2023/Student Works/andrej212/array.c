//user enters 10 numbers in an arraz 
//print the elements of an array
//print the count of even numbers in the array

#include <stdio.h>

int main(){
//declare variables
	int dArr[10], dEvenCtr=0;

	//ask the user ro enter the numbers into the array
	for(int i = 0; i<10; i++){
		printf("\n enter the num for the slot %d", i);
		scanf("%d", &dArr[i]);

		//check if input is even
		if( !(dArr[i]%2)){
			dEvenCtr++;

		}

	}

	printf("\n");

//to print we need for loop aswell
	for(int i=0; i<10; i++){
		printf("%d", dArr[i]);
	}
	printf("\n there are %d even numbers in your array.\n ", dEvenCtr);


	return 0;
}