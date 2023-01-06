#include <stdio.h>

int main(){
 
	//declare data types here
	int dNum1, dNum2;

	//ask the user for an input
	printf("\n Give number: ");
	scanf("%d", &dNum1);

	printf("\n Give number: ");
	scanf("%d", &dNum2);

	//then print that number
	printf("\n You have entered %d and %d.\n", dNum1, dNum2);

	//check and print the greater among two numbers
	if ( dNum1 > dNum2 ){
		printf("\n %d is greater. \n", dNum1);
	}//end if check number
	else printf("\n %d is greater. \n", dNum2);

	//check if one number is even
	if ( dNum1%2==0){
		printf("\n %d is even. \n", dNum1);
	}//end check even
	else printf("\n %d is odd. \n", dNum1);

	//check without %
	if ( (dNum1/2)*2==dNum1 ){
		printf("\n %d is even. \n", dNum1);
	}
	else printf("\n %d is odd. \n", dNum1);

	//I am now a C programmer
 	printf("\n Hello World! \n");
	return 0;
}//end main
