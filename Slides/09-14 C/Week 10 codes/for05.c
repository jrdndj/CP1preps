/* 
	A C program that gets an integer from the user where we will use a dynamic loop

	the upper limit is specified by the input of the user 
*/
#include<stdio.h>

int main(){
	//declare variables
	int dInput; 

	//prompt the user to provide an input
	printf("\n Please enter a positive integer: ");
	scanf("%d", &dInput);

	//for loop dInput is the terminator
	for( int dCtr = 1; dCtr <= dInput ; dCtr++ ){
		printf("\n %d 2020 is the best year ever!! ", dCtr+100);
	}//endfor
	printf("\n Thank you for using our program! ");
	return 0; 
}