/*
This c progrsm accepts an integer from the user and determines whether it is odd
or even. However it does noy use modulo operation.
*/

#include<stdio.h>

int main(){
	//declare variables first
	int dNum1 = 0;

	//ask the user for some input
	printf("\n Hello! Please give me a number: ");
	scanf("%d", &dNum1);

	//we will check if the int is odd or even
	if((dNum1/2)*2 == dNum1){
		//tell user if it is odd
		printf("\n %d is even. ", dNum1);
	}//endif tell user it is odd
	else printf("\n %d is odd. ", dNum1);


	return 1;
}//endmain