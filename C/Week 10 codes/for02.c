/*
	This C program gets an integer input from the user 
	and this integer input controls the number of repetitions

	lets print the multiplication table

	if the user inputs 9
	then it prints 9x1 all the way to 9x10


*/
#include<stdio.h>

int main(){
	//declare variables
	int dInput; 

	//prompt user
	printf("Hi! Please enter a positive integer: ");
	scanf("%d", &dInput);
	// dInput = 5

	//for loop that will print something dInput times
	//dCtr is a count-er 
	// 1 2 3 4 5
	for ( int dCtr = 1; dCtr <= 10 ; dCtr++ ){
		printf("\n %d x %d = %d", dInput, dCtr, dInput*dCtr);
	}//endfor
	printf("\n\n Dont you love math");
	return 0; 
}