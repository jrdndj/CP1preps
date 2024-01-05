/*
	Practice pointers program

	filename: pracpoint.c

*/
#include<stdio.h>
#include<stdlib.h> //for the free and malloc operators

//function prototypes
int get_input(); 
void print_num(int *p);  // always *p

int main(){
	//declare integer pointers
	int *ptr1, *ptr2; 

	//declare integer variables just for the hell of it
	int dNum1, dNum2; 

	//get input store it on dNums
	dNum1 = get_input();
	dNum2 = get_input();

	//now that we have inputs we link them to the pointers
	ptr1 = &dNum1;
	ptr2 = &dNum2; 

	//printf("\n Printed %d ", ptr1);
	//printf("\n Printed %d ", &dNum2);


	//we will print the numbers using printnum and by passing the pointers
	print_num(ptr1); //i am passing a pointer that points to the address 
	print_num(&dNum2); //i am passing the address
	
	//change the value of dNum2
	dNum2 = dNum2 + 420; 
	print_num(ptr2);

	//unlink them
	ptr1 = NULL;
	ptr2 = NULL;

	//print_num(ptr1);
	//print_num(ptr2);

	//delete them
	free(ptr1);
	free(ptr2);

	return 0; 
}//end main

//function definitions here
int get_input(){
	int input; 
	printf("\n Enter a number: ");
	scanf("%d", &input);
	return input; 
}//end getinput

void print_num(int *p){
	printf("\n Printed: %d", *p);
}//end printnum







