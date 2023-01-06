#include <stdio.h>

int main(){

	int dNum1 = 0;
	int dNum2 = 0;

	//ask the user for input
	printf("Hey, give me a number 1: ");
	scanf("%d", &dNum1);
	printf("Hey. give me a number 2: ");
	scanf("%d", &dNum2);

	//printf("The number is  %d %d \n", dNum1, dNum2);

	//find bigger number
	if(	dNum1 > dNum2 ){
		printf("The bigger number is %d \n", dNum1);
	}//endif
	else{
		printf("The bigger number is %d \n", dNum2);
	}//endelse


	//see if even or odd
	if( dNum1/2 * 2 == dNum1){
		printf("%d is even \n", dNum1);
	}//endif
	else{
		printf("%d is odd \n", dNum1);
	}//endelse


	//printf("Hello World! \n");
	return 0;
}//endmain 
