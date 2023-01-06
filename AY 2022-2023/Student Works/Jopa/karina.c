#include <stdio.h>

int main(){
	
	int dNum, dFirstDigit, dMiddleDigit, dLastDigit;

	printf("\n Give us 3 digit number: ");
	scanf("%d", &dNum);
	dFirstDigit=dNum/100;
	dMiddleDigit=(dNum%100)/10;
	dLastDigit=(dNum%100)%10;
	printf("\n First digit is %d \n", dFirstDigit);
	printf("\n Middle digit is %d \n", dMiddleDigit);
	printf("\n Last digit is %d \n", dLastDigit);
	






	return 0;

}
