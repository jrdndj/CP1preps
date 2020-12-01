/* 
	this program will allow the user to input a positive four digit number 
    reject if it is not a four digit number 
    1000
    9999
    99 x
    999 x

    now after this, check if the number is divisible by 4
 */
#include<stdio.h>
#define CHECKER_NUM 4

int main(){
	//declare our variables 
	int dUserInput, dRemainder;

	//interactive input
	printf("\n Please enter a 4-digit number: ");
	scanf("%d", &dUserInput);

	//we need to check if the input is 4digits or not
	if( dUserInput > 999 && dUserInput < 10000 ){
		printf(" %d is positive 4digit number ", dUserInput );
		//now check if it is divisible by 4
		dRemainder = dUserInput % CHECKER_NUM;
		if( dRemainder == 0 ){
			printf(" %d is also divisible by %d", dUserInput, CHECKER_NUM);
		}//endifdivisibleby4
		else{
			printf(" %d is not divisible by %d", dUserInput, CHECKER_NUM);
		}//endelsedivisibleby4
	}//endif
	//now identify how many digits does it have
	else if( dUserInput <= 999 ) {
		printf(" %d is a positive 1-3 digit number ", dUserInput);
	}//endelseif
	//this is the default case
	else {
		printf(" %d maybe have 5 or more digits or may not be positive. ", dUserInput);
	}//endelse
	//lets call this the default statement
	printf(" Thank you for using my program. ");
	return 0;
}//endmain




