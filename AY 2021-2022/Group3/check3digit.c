/* this program only accepts a 3 digit number */
/* it prints also the accumulative sum of all inputs */
#include<stdio.h>

int main(){
	//declare variables
	int nUserInput = 0, nSum = 0;

	do{
		printf("\n Please enter a 3 digit number: ");
		scanf("%d", &nUserInput);
		nSum += nUserInput;
		//nSum = nSum + nUserInput;
		printf("\n The latest sum is %d", nSum);
	}while( nUserInput <= 99 || nUserInput > 999 ); //this is the condition that makes it repeat
	//we only repeat if it is not a 3-digit number
	//we go here if we have a 3 digit number
	printf("\n %d is a 3 digit number. \n", nUserInput);
	printf("\n The total sum of all inputs is %d", nSum);
	return 0; 
}