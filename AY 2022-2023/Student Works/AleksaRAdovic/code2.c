#include <stdio.h>

int main(){

	//declare data types here
	int dNum1, dFirstDigit, dMiddle, dLast;
	printf("\n Give a 3 digit number.\n ");
	scanf("%d", &dNum1);
	dFirstDigit=dNum1/100;
	printf("\n First digit is %d \n", dFirstDigit);
	dMiddle=(dNum1%100)/10;
	printf("\n Second digit is %d \n", dMiddle);
	dLast=(dNum1%100)%10;
	printf("\n Third digit is %d \n", dLast);

	return 0;

}
