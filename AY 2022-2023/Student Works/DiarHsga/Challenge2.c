#include <stdio.h>

int main(){

	int dNum1, dNum2;

	printf("Enter a number:\n");
	scanf("%d", &dNum1);

	printf("Enter a number:\n");
	scanf("%d", &dNum2);
	
	int dDiv=dNum1;
	int dCtr=0;
	do{
		dDiv=dDiv-dNum2;
		dCtr++;
	}while(dDiv>=dNum2);
	printf("Answer is: %d \n", dCtr);

	return 0;

}//end main
