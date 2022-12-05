#include <stdio.h>

int main(){
	
	//declare data types here
	int dNum1, dNum2;

	//ask user for input
	printf("Enter two numbers: ");
	scanf("%d", &dNum1);
	scanf("%d", &dNum2);

	//then print number
	printf("You have entered %d and %d. \n", dNum1, dNum2);

	//check and print the greater of the two numbers
	if (dNum1>dNum2){
		printf("\n %d is greater. \n", dNum1);
	}//end if check number
	else printf("\n %d is greater. \n", dNum2);


	//check if number is even

	if ((dNum1/2)*2!=dNum1){
		printf("\n %d is odd. \n", dNum1);
	}
	else printf("\n %d is even. \n", dNum1);








	printf("\n Hello World! \n");

	return 0;
}//end main
