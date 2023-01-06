#include <stdio.h>
int main(){
	
	//declare data types here
	int dNum1, dNum2;

	//ask the user for input
	printf("Put in a number: ");
	scanf("%d", &dNum1);
	printf("Put in a number: ");
	scanf("%d", &dNum2);

	//then print that number
	printf("\nNumbers you enterted: %d , %d\n", dNum1, dNum2);

	//check and print greater number
	if(dNum2>dNum1){

		printf("\nGreater number: %d\n", dNum2);

	}//end if
	else printf("\nGreater number: %d\n", dNum1);

	//check if number is even
	if(dNum1%2==0){
		printf("\n%d is even\n", dNum1);
	}
	else printf("\n%d is odd\n", dNum1);

	//i am now a c programmer
	printf("\nHello world\n");

	if(dNum1 == (dNum1/2)*2){
		printf("\n%d is even\n", dNum1);
	}
	else printf("\n%d is odd\n", dNum1);

	return 0;

} //end main
