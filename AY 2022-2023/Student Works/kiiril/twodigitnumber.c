#include <stdio.h>
int main(){
	//declare variables
	int dNum1, dDigit1, dDigit2;

	printf("\n Please enter number: ");
	scanf("%d", &dNum1);

	dDigit1 = dNum1/10;
	dDigit2 = dNum1%10;

	//checking digits
	if( dDigit1 && !dDigit2 ){
		printf("\n Bazinga! \n");
	}

	else if ( !dDigit1 && dDigit2 ){
		printf("\n Booyeah! \n");
	}
	else printf("\n Alakazan! \n");


	return 0;
}
