#include <stdio.h>

int main(){

	//declare data types here
	int dNum1, dNum2;

	//ask user for input
	printf("Give number: ");
	scanf("%d", &dNum1);
	
	printf("Give second number: ");
	scanf("%d", &dNum2);
	
	//then print that number
	printf("\n You have entered %d and %d. ", dNum1, dNum2);

	if( dNum1 > dNum2 ){
		printf("\n %d is greater \n", dNum1);
	}
	else printf("\n %d is greater \n", dNum2);

	if ( (dNum1/2)*2 == dNum1 ){
		printf("\n %d is even", dNum1);
	}
	else printf("\n %d is odd", dNum1);



	printf("\n Hello World! \n");
	return 0;	
}// end of main
