//preprocessor headers
#include<stdio.h>

/*  function declarations here */
//this function gets digits from the user 
int getDigit(); //empty because it does not receive anything from other functions
//return type int meaning it passes something to other functions return type int
void printDigit( int ); //it has int inside () because it receives an int type
//void because it does not pass any type

/* global variable declarations here */
//this wll be empty 

/* main function */
int main(){
	/* variables local to main are declared here */
	int dDigit1 = 0, dDigit2 = 0;
	int *blahblah;

	// pointer assignment
	blahblah = &dDigit1; //when assigning no need for *

	/* function calls here */
	dDigit1 = getDigit();
	dDigit2 = getDigit();
	printDigit( dDigit1 ); //dDigit1 is passed by value to printDigit()
	printDigit( dDigit2 ); //the value is passed when it is called 
	dDigit1 = 1111;
	printDigit( *blahblah ); //when printing or accessing we use the *

	return 0; 
}//endmain

/* function definition */
int getDigit(){
	//local variables here 
	int dUserInput = 0;

	//this is where my interactive input 
	printf("\n Please enter a number: ");
	scanf("%d", &dUserInput);

	return dUserInput; //pass by value
}//endgetDigit()

void printDigit( int dNumber ){
	int *ptr;

	ptr = &dDigit1;
	//no need for return
	printf("\n You have input %d", dNumber);
	printf("\n The existing value of digit1 is %d", *ptr );
	//no return since it is void type
}//end printDigit()







