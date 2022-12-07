#include <stdio.h>
int main(){

	int dNum1, dDigit1, dDigit2;

	//ask the user for input
	printf("\n Please enter number: ");
	scanf("%d", &dNum1);

	//split the number into two digits
	dDigit1=dNum1/10;
	dDigit2=dNum1%10;

	//check the digits by treating them as boolean
	if(dDigit1 && !dDigit2){
		printf("\n Bazinga! \n");
	}
	else if(!dDigit1 && dDigit2){
		printf("\n Booyeah! \n");
	}
	else printf("\n Alkazam! \n");
	return 0;


}
