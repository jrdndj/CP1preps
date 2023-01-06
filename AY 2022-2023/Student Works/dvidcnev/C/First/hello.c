#include <stdio.h>

int main() {
	
	//Mein ersten program

	int dNum=0, dNum2=0; //Initialize Num and Num2

	printf("Give me a number:"); //Asking for Number
	scanf("%d", &dNum); //Entering the number for Num

	printf("Give me another number:");
	scanf("%d", &dNum2); //Entering the number for Num2

	// printf("The number is %d and %d \n", dNum,dNum2); //Print numbers Num and Num2

	if ( dNum>dNum2 ) { 
		printf("Number %d is larger than number %d \n", dNum,dNum2);
	} 
	else { 
		printf("Number %d is larger than number %d \n", dNum2,dNum);
	}

	// Now we are checking if the number is even
	// if ( dNum%2 == 0 ) {
	// 	printf("The number %d is even \n", dNum);
	// }
	// else {
	// 	printf("The number %d is odd \n", dNum);
	// }

	int check = (dNum/2)*2; //To check if a number is even without using %


	if ( dNum == check ) {
		printf("The number %d is even \n", dNum);
	}
	else {
		printf("The number %d is odd \n", dNum);
	} 

	// printf("Hello world! \n");

	return 0;

} //endmain
