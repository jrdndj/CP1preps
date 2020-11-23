#include<stdio.h>

/* this program will allow us to use 
operators in C */
int main(){
	//we should make our variable names descriptive
	int adder1, adder2, num1, num2;
	int sum, result=0;
	//  ^dec  ^init
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

	//interactive input
	printf("\n Please enter value of num1: ");
	scanf("%d", &num1);
	//the user input is stored and saved in var num1
	printf("\n Please enter value of num2: ");
	scanf("%d", &num2);

	result = num1 * num2; 
	printf("\n The product of %d * %d is %d \n", num1, num2, result);

}//endmain






