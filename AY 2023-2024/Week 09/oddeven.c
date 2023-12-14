/*
	This program accepts a number from the user and it will check 
	if the number is ODD or EVEN
	first we use the % operator
	THEN
	without using the % operator. 

	filename: oddeven.c
*/

#include<stdio.h>

int main(){
	//declare variables
	int dInput; 

	//talk to the user to get the input 
	printf("\n Please give me a number molim: ");

	//get the input
	scanf("%d", &dInput);

	//check if a number is odd or even using modulo
	// dInput==((dInput/2)*2)
	if( dInput == ((dInput/2)*2 ) ){
		//assume its true
		printf("\n %d is even. ", dInput);
	}//endcheck ifodd
	else {
		//assume its odd
		printf("\n %d is odd. ", dInput);
	}//endelse
	return 0;
}//endmain






