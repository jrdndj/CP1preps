//a C program that will ask thhe user to enter 10 integers
//the program will print all the contents of the array
//the program will print how many odd numbers are there

#include <stdio.h>

int main(){
	//declare variables
	int dArr[10], dOddCtr=0;

	//now we ask the user for inputs using a for loop
	for(int dCtr=0; dCtr<10; dCtr++){
		printf("\n please enter a number for slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);

	}//endforloop
		printf("\n");
	//print the contents of the array using a for loop
	for(int dCtr=0; dCtr<10; dCtr++){
		printf("%d ", dArr[dCtr]);
		//check if the element is odd
		//even-%2==0
		//odd-%2!=0
		if( dArr[dCtr]%2!=0 ){
			dOddCtr++;
		}//checkifodd

	}//ENDPRINTLOOP

	printf("\n there are %d odd numbers in your array.\n ", dOddCtr);


	return 0;
}