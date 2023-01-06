//This C program accepts an integer from user and determines whether it is odd or even.
//However it does not use the modulo operation.
#include<stdio.h>

int main(){
	//declare var first 
	int dNum1 = 0;

	//ask the user for input 
	printf("\n Hello please give me a number: ");
	scanf("%d", &dNum1);

	//we will check if the int is odd or even 

	if((dNum1/2)*2 == dNum1){
		//print something here if it is even
		printf("\n %d is even", dNum1);

	}//endif tell user if it is odd
	else printf("\n %d is odd", dNum1);

	return 1;

}//endmain