#include <stdio.h>

int main(){
	//declare data types here
	int dNum1, dNum2;

	//ask the user for an input
	printf("\n Give first number: ");
	scanf("%d", &dNum1);

	//ask the user for an input
	printf("\n Give second number: ");
	scanf("%d", &dNum2);

	//print the number
	printf("\n You have entered %d and %d.\n", dNum1, dNum2);

	//check and print the greater amont two numbers
	if( dNum1 > dNum2){
		printf("\n %d is greater. \n", dNum1);
	}//end if check num
	else printf("\n %d is greater. \n", dNum2);

	//check if the number is even
	if( dNum1%2== 0 ){
		printf("\n %d is even. \n", dNum1);
	}//end cheking even
	else printf("\n %d is odd. \n", dNum1);

	//check if the number is even without module
	if( (dNum1/2)*2 == dNum1 ){
		printf("\n %d is even. \n", dNum1);
	}//end cheking even without module
	else printf("\n %d is odd. \n", dNum1);

	printf("\n Hello World! \n");
	return 0;
}//end main