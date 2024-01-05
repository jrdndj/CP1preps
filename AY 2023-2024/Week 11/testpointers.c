/*
	two integer variables - ok 
	two integer pointers - ok 
	pointers point to integers - ok 
	add two values pointed by pointers - ok 
	print the results - ok 
	unlink pointers - ok 
	free memory - ok 

	filename: testpointers.c
*/

#include<stdio.h>
#include<stdlib.h>

//function prototype
int get_input();
void add_inputs(int num1, int num2); //receives INTS 
void divide_inputs(int *a, int *b); //receives INT * only

int main(){
	int dNum1, dNum2; 
	int *ptr1, *ptr2; 

	ptr1 = &dNum1; 
	ptr2 = &dNum2; 

	dNum1 = get_input(); 
	dNum2 = get_input();

	add_inputs(*ptr1, *ptr2);
	divide_inputs(ptr1, ptr2);

	//cleanup 
	ptr1 = NULL;
	ptr2 = NULL; 
	free(ptr1);
	free(ptr2); 

	return 0; 
}//end main

int get_input(){
	int dUserInput;
	printf("\n Enter number: ");
	scanf("%d", &dUserInput);

	return dUserInput;
}//end get_input

//this is a function that can receive ANY integer
void add_inputs(int num1, int num2){
	printf("\n Added %d. \n", num1 + num2);
}//end add_inputs

//this is a function that can receive ONLY integer pointers
void divide_inputs(int *a, int *b){
	printf("\n Divided %d. \n", *a / *b);
}//end divide_inputts








