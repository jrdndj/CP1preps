/* this program accepts an integer from the user*/
#include<stdio.h>

int main(){
	//declare variables
	int nUserInput = 0;

	//we need to get input from the user
	printf("\n Please enter a number: ");
	scanf("%d", &nUserInput);

	//print the number to confirm
	printf("\n You gave me %d\n\n\n", nUserInput);
	return 0;
}