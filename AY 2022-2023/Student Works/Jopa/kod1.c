#include <stdio.h>

int main(){
	
	//declare data types here
	int dNum1, dNum2;

	//ask the user for an input
	printf("\n Give number: ");
	scanf("%d", &dNum1);

	printf("\n Give second number: ");
	scanf("%d", &dNum2);

	//then rint that number
	printf("\n You have entered %d and %d. ", dNum1, dNum2);

	//check and print the greater among 2 numbers
	if( dNum1 > dNum2){
		printf("\n %d is greater. ", dNum1);
	}//end if chech number
	else printf("\n %d is greater. \n", dNum2);

	//chech if one number is even
	if((dNum1/2)*2!=dNum1){
		printf("\n %d is odd. \n", dNum1);
	}//endcheckeven
	else printf("\n %d is even. \n", dNum1);

	//I am now a C programmer
	printf("\n Hello World! \n");
	return 0;
}//end main
