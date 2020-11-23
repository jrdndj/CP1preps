//modify this code to add subtraction, multiplication, division and a combination of 2 binary operators

#include<stdio.h>

/* this program will allow us to use 
operators in C */
int main(){
	//we should make our variable names descriptive
	int adder1, adder2;
	int sum;
	//by default these variabls have no assigned value
	//depending on the computer, it may assign a random value

	//we must assign the value for adder1 and adder2
	adder1 = 5;
	adder2 = 7;

	//we can assign the sum by using arithmetic operators
	//and save it to variable sum
	sum = adder1 + adder2;

	//we can now print the sum and display it
	printf("The sum is %d \n\n", sum);
	printf("\nThe sum of %d + %d is %d \n", adder1, adder2, sum);
	// \n newline
	// \t

}//endmain






