#include <stdio.h>

int main(){
	int dNum1;
	int dDigit1, dDigit2;

	dDigit1 = dNum1/10;
	dDigit2 = dNum1%10;

	if(dDigit1 && !dDigit2)
		printf("\n Bazinga. ");
	if(!dDigit1 && dDigit2)
		printf("\n Booyeah. ");
	else 	
		printf("\n Alakazam. ");

	 	return 0;
	
	}
