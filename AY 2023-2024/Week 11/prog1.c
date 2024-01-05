/*
 ok A program where we have two integers
 ok And two pointers
 ok then add, subtract, multiply and divide 
 ok print the results
 unlink and free pointers

 filename: prog1.c
*/
#include<stdio.h>
#include<stdlib.h> //for free() and NULL

//function prototypes here 
int get_input();
void multiply_inputs(int a, int b);

int main(){
	//declare variables and pointers
	int dNum1, dNum2; 
	int *ptr1, *ptr2; 

	//use get_input to prompt the user for an input
	dNum1 = get_input();
	dNum2 = get_input();

	//assign the pointers 
	ptr1 = &dNum1; 
	ptr2 = &dNum2; 

	printf("\n Added %d \n", *ptr1 + *ptr2);
	multiply_inputs(*ptr1, *ptr2);

	//unlink pointers
	ptr1 = NULL; 
	ptr2 = NULL; 

	//free them
	free(ptr1);
	free(ptr2); 
	
	return 0;
}//endmain

//function definitions down here
int get_input(){
	int localInput;

	printf("\n Enter number: ");
	scanf("%d", &localInput);
	return localInput; 

}//end get_input

void multiply_inputs(int a, int b){
	printf("\n Multiply: %d ", a*b);
}//end multiply_inputs


