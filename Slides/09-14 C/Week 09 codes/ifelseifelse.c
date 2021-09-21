/* 
	this program will allow the user to input a positive 4-digit integer
	reject the input if it is not a positive 4 digit integer
	9999 ok
	999 not ok
	-9999 
	99 not ok
	10000

	if it is a 4 digit positive integer, check if it is divisible by a certain number
	divisible by 4, 6, 2 etc 
*/
#include<stdio.h>
#define CHECKER_NUM 1000

int main(){
	//declare variables
	int dUserInput; 
	int dRemainder; 

	//interactive input
	printf("\n Please enter a 4-digit positive number: \n");
	scanf("%d", &dUserInput);

	//we need to check the input if it is positive 4 digit integer
	if( dUserInput > 999 && dUserInput < 10000 ){
		printf("\n %d is a 4 digit positive integer. \n", dUserInput);

		//calculate the remainder
		dRemainder = dUserInput % CHECKER_NUM;

		//test the remainder if it is equal to 0
		//if( dUserInput % CHECKER_NUM )
		if( dRemainder == 0 ){
			printf("\n %d is divisible by %d.\n", dUserInput, CHECKER_NUM);
		}//endifremainder
		else printf("\n %d is NOT divisible by %d. \n", dUserInput, CHECKER_NUM);
	}//endif
	else {
		printf("\n %d is NOT a 4 digit positive integer. \n", dUserInput);
		if( dUserInput < 999 ){
			printf("\n %d is probably a 3 digit integer\n", dUserInput);

		}//endelseif
		else{
			printf("\n Im not actually not sure.\n");
		}//endelseifelse
	}//endelse
	printf("\n Thank you for using this program. \n");
	return 0;
}





