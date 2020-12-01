/* 
	this program will allow the user to input a positive 4-digit integer. 
	reject if it is not a positive, 4-digit integer. 
	1000 accept
	-1000 reject
	12345 rejected
	99 rejected
	999 1000 9999 10000

	check if that input is divisible by CHECKER_NUM
*/
#include<stdio.h>
#define CHECKER_NUM 4

int main(){
	//declare variables
	int dUserInput;
	int dRemainder; 

	//interactive input
	printf("\n Please enter a 4-digit positive number: \n");
	scanf("%d", &dUserInput);

	//we need to check this input
	if ( dUserInput > 999 && dUserInput < 10000 ) {
		printf("\n %d is a 4 digit positive integer. \n", dUserInput );

		//calculate the remainder
		dRemainder = dUserInput % CHECKER_NUM; 

		//if the remainder is 0 then it is divisible
		if( dRemainder == 0 ){
			printf("\n %d is actually divisible by %d. \n", dUserInput, CHECKER_NUM);
		}//endif
		else {
			printf("\n %d is not divisible by %d. \n", dUserInput, CHECKER_NUM);
		}//endif 
	}//endif
	else if ( dUserInput <= 999 ) {
		printf("\n %d is probably a 1-3 digit integer \n ", dUserInput);
	}//endelseif
	else{
		printf("\n %d probably has 5 or more digits or may not be positive. \n", dUserInput);
	}//endelse
	printf("\n Thank you for your input. \n");

	return 0; 
}