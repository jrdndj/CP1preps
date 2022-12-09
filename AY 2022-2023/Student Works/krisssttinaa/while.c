#include <stdio.h>

int main(){
	//declare data types here
	int dNum1, dNum2; 
	int dCtr=1;
	int dSum=0;

	//while loop for multiplication
	//ask the user for input
	printf("\n Give me an integer for multiplication: ");
	scanf("%d", &dNum1);

	printf("\n Give me another integer: ");
	scanf("%d", &dNum2);

	//calculate
	while(dCtr<=dNum2){
		dSum+=dNum1;
		dCtr++;
	}
	printf(" %d \n", dSum);

	//while loop for devision
	//declare data types here
	int dDev1, dDev2, dCtr1=0;

	//ask the user for input
	printf("\n Give me an integer for devision: ");
	scanf("%d", &dDev1);

	printf("\n Give me another integer: ");
	scanf("%d", &dDev2);

	//calculate
	while(dDev1>0){
		dDev1-=dDev2;
		dCtr1++;
	}
	printf(" %d \n", dCtr1);

	return 0;
}//end of the programme