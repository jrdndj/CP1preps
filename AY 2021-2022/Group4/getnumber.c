/* this program receives an integer from the user */
#include<stdio.h>

int main(){
	//declare variables
	int nUserInput = 0;

	//get an input from the user using scanf
	printf("\n Please give me a number: ");
	scanf("%d", &nUserInput);
	//get an input from the user and store it in the address of nUserInput

	//confirm and print the user input
	printf("\n You gave me %d \n", nUserInput);
	return 0;
}