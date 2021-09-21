/* this program will allow the user to input a positive four digit integer
   reject if it is not a positive 4 digit integer
   1000 accept
   9999 accept
   12345 reject
   -9999 reject
   99 reject

   check if the number is divisible by a certain number 
*/
#include<stdio.h>
#define CHECKER_NUM 4

int main(){
	//declare variables
	int dUserInput;
	int dRemainder;

	//interactive input
	printf("Please enter a 4-digit positive number: \n");
	scanf("%d", &dUserInput);

	//we need to check the input 
	if( dUserInput > 999 && dUserInput < 10000 ){
		printf("\n %d is a positive 4 digit number. \n", dUserInput);

		//get the remainder using CHECKER_NUM
		dRemainder = dUserInput % CHECKER_NUM;

		//if the remainder is 0 then it is divisible, else not divisible
		if( dRemainder == 0 ){
			printf("\n %d is also divisible by %d.\n", dUserInput, CHECKER_NUM);
		}//endcheckdivisible
		else {
			printf("\n %d is unfortunately not divisible by %d.\n", dUserInput, CHECKER_NUM);
		}//endelsecheckdivisible
	}//endif
	else if( dUserInput<= 999 ) {
		printf("\n %d is a 1-3 digit number. \n", dUserInput);
	}//endelseif
	else { //default case
		printf("\n %d maye be 5 ore more digits or may not be positive . \n", dUserInput);
	}//endelseelse
	printf("\n Thank you for using my program!.\n ");
	return 0;
}





