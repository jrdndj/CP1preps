/*This C program accepts an integer and deermines if it's odd or even. But
it doesn't use %*/
#include <stdio.h>

int main(){
	//declare variables
	int dNum1 = 0;

	//ask for input
	printf("\n Insert a number: ");
	scanf("%d", &dNum1);

	//check if int is odd or even
	if( (dNum1/2)*2 == dNum1 ){
		//tell user if even
		printf("\n %d is even. " , dNum1);

	}//endif tell user if odd
	else printf("\n %d is odd. ", dNum1);

	return 0;
}//endmain
