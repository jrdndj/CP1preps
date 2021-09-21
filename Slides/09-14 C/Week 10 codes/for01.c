/*
	A program that gets an integer input from that user
	Then print its multiplication table from 0 to 10

	if user input is 9

	9x0 = 0
	9x1 = 9
	9x2 = 18 ... 

	If we want to print the entire multiplication table, then we need for loop inside a for loop
*/
#include<stdio.h>

int main(){
	//declare variables
	int dInput;

	//prompt user
	//printf("Hi! Please enter a positive integer: ");
	//scanf("%d", &dInput);
	//if dInput = 5

	//loop based on user input
	// 0 1 2 3 4 (technically 5 times)
	for ( int dCtr1 = 0; dCtr1 < 10 ; dCtr1 ++ ){
		for( int dCtr2 = 0; dCtr2 < 10; dCtr2++ ){
		printf("%d x %d = %d", dCtr1, dCtr2, dCtr1*dCtr2);
		}//endinnerfor
		printf("\n");
	}//endouterfor
	return 0; 
}













