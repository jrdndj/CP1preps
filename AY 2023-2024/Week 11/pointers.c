/*
	two integers - ok 
	two pointers - ok 
	use operations on pointers - add - ok
	print values - ok 
	unlink pointers
	free memory

	filename: pointers.c
*/
#include<stdio.h>
#include<stdlib.h> // for the free()

//function prototypes
int get_input(); 
void add_inputs(int a, int b); //can receive ints or int pointers
void subtract(int *a, int *b); //receiving int pointers only 

int main(){
	int dNum1, dNum2; //two variables
	int *ptr1, *ptr2; //two pointers

	//do the pointing
	ptr1 = &dNum1; 
	ptr2 = &dNum2; 

	//get input from the user
	dNum1 = get_input();
	dNum2 = get_input(); 

	printf("\n Printed %d. \n", *ptr1);

	add_inputs(*ptr1, *ptr2); //pass by reference (give a key)
	//add_inputs(dNum1, dNum2); //pass by value (give a copy)
	subtract(ptr1, ptr2); //when passing to a function that receives *, remove
	//OR
	subtract(&dNum1, &dNum2);

	//cleanup
	ptr1 = NULL;
	ptr2 = NULL;
	free(ptr1);
	free(ptr2);

	return 0;
}//end main

//function definitions
int get_input(){
	int dUserInput; 
	printf("\n Enter number: ");
	scanf("%d", &dUserInput);

	return dUserInput; 
}//end get_input

void add_inputs(int a, int b){
	printf("\n The sum is %d. \n", a+b);
}//end add_inputs

void subtract(int *a, int *b){
	printf("\n The difference is %d. \n", *a - *b);
}//end subtract







