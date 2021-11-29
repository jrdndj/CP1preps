/* This program receives an integer from the user and returns if it is even or odd */
#include<stdio.h>

int main(){
	//declare variables
	int nUserInput = 9;

	//prompt the user for input
	printf("\n Please enter number: ");
	scanf("%d", &nUserInput);

	//we check if it is odd or even
	if( nUserInput%2 == 0 ){
		//if remainder is 0 then it is even
		printf("\n Number %d is even   \n", nUserInput);
	}//endif
	else {
		//if remainder is not 0 then it is odd
		printf("\n Number %d is odd   \n", nUserInput);
	}//endelse
	return 0; 
}//endmain