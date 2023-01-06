#include <stdio.h>

int main(){
	int dNum1=0;
	printf("\n Enter a three digit number");

	scanf("%d", &dNum1);
	int dNum2= dNum1%10;
	dNum1=dNum1/10;
	int dNum3= dNum1%10;
	dNum1=dNum1/10;

	printf("\n Your numbers digits are: %d %d %d \n", dNum1,dNum2 ,dNum3 );

	return 0; 





}//end main
