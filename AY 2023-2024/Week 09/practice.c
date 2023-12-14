/* This program does the following
	- receive one three-digit integer from the user 
	- analyze the last two digits of the number. 
	- example: if input is 420, analyze 2 and 0 respectively. 
	- task: if both second and third digits are even, print BAZINGA!
	assume 0 is even, therefore 20 prints BAZINGA
	- if only the second digit is EVEN, print KABOOM!
	- if only the third digit is EVEN, print KABLAM!
	- if both second and third digits are ODD, print ALAKAZAM!
	- use as few variables as possible
	- hint: using logical operators (AND or OR)
*/
#include<stdio.h>

int main(){
	//declare variables
	int d3digit; 

	//ask the user for input
	printf("\n Please enter a 3 digit number: ");

	//get the input
	scanf("%d", &d3digit);

	//now check if it is a valid 3-digit number
	if(d3digit >= 100 && d3digit <= 999){
		//then process and scan the last two digits only
		// to get the second digit always use (d3digit/10)%10 
		// to get the third digit always use d3Digit%10 (you get 3 from 693) 

	}//end check if valid 3 digit number
	else{
		//reject the number if not valid 
		printf("\n %d is not a 3 digit number.\n");
	}//end else


	return 0;
}//end main