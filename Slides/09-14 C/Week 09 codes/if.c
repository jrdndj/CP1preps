/* allow the user to input a three-digit number
 reject it if it is a not a three-digit number
 333 ok
 69 not okay 
 1004 not okay
 100-999 

 check if the 3-digit number is divisible by 6*/
#include<stdio.h>
#define CHECKER_NUM 6
//this is a constant
//we will use this to check if the input is divisible by 6

int main(){
	//declare your variables
	int dUserInput, dRemainder;
	//remainder variable

	//interactive input
	printf("Please enter a 3digit number: \n");
	printf("If it is not a 3digit number, it will be rejected. \n");
	scanf("%d", &dUserInput);

	//test the condition/check if it is a 3 digit number
	if( dUserInput > 99 && dUserInput < 1000 ){ //if this is true
		printf("\n %d is a 3-digit number. ", dUserInput);

		//get the remainder of the dUserInput & checkernum
		dRemainder = dUserInput % CHECKER_NUM;

		//check if the number is divisible by CHECKER_NUM
		if( dRemainder == 0){
			printf("\n %d is divisible by %d", dUserInput, CHECKER_NUM);
		}//end checkerif
		else{
			printf("\n %d is NOT divisible by %d", dUserInput, CHECKER_NUM);
		}//end checkerifelse
	}//endif
	else {
		printf("\n %d is NOT a 3digit number. ", dUserInput);
	}//end else
	//do this by default 
	printf("\nThank you for using this program.\n");
	
	return 0; 
}//endmain






