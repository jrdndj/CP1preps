/*
	A C program that gets an integer from a user
	Then print something depending on the user input

	dynamic loop the terminating condition is defined by the user's input	
*/
#include<stdio.h>

int main(){
	//declare variables 
	int dInput = 0; 

	//prompt the user for an input
	printf("\n Please enter a positive integer: ");
	scanf("%d", &dInput);

	//for loop with dInput as the terminator
	//ctr = counter 
	for ( int dCtr = 1; dCtr <= dInput; dCtr++ ){
		printf("\n %d 2020 is the best year everrrrr ", dCtr+100);
	}//endfor
	printf("\n Thank you for using our program. ");
	return 0; 
}