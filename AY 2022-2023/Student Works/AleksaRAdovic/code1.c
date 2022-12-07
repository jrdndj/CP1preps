#include <stdio.h>

int main(){

	//declare data types here
	int dNum1, dNum2;

	//ask the user for the input
	printf("Give number 1");
	scanf("%d", &dNum1);
	printf("Give number 2");
	scanf("%d", &dNum2);

	//Then print that number
	printf("\n You have enterd %d and %d.\n", dNum1, dNum2);

	//check and print the greater num
	if( dNum1 > dNum2 ){
		printf("\n %d is greater. ", dNum1);
	}//end fi check number
	else printf("\n %d is gretter. \n", dNum2);

	//check if one number is even
	if( dNum1 == (dNum1/2)*2){
		printf("\n %d is even. \n", dNum1);
	}//end check even

	else printf("\n %d is odd. \n", dNum2);

	//I am now a C programmer
	printf("\n Hello World! \n");
	return 0;
}//end of main

