/*this program receives an integer and says if odd or even*/
#include<stdio.h>

int main(){
	//declare variables
	int nUserInput = 0;

	//prompt the user for input
	printf("\n Please enter a number: ");
	scanf("%d", &nUserInput);

	//check if even or odd using modulo %
	if( nUserInput%2 == 0 ){
		//if true then number is even
		printf("\n The number %d is even. \n", nUserInput);
	}//endif
	else{
		//if false then number is odd
		printf("\n The number %d is odd. \n", nUserInput);
	}//endelse
	return 0;
}//endmain