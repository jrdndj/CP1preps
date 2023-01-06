#include <stdio.h>

int main() {

	int dNum=0, dDigit1, dDigit2; 

	printf("Give me a two digit number:"); //Asking for Number
	scanf("%d", &dNum); //Entering the number for Num

	dDigit1=dNum/10; //split first digit
	dDigit2=dNum%10; //split second digit

	if ( dDigit1 && !dDigit2 ) {
		printf("\nBazingaaa!\n");
	}
	else if ( !dDigit1 && dDigit2 ) {
		printf("\nBooyeaaaah!\n");
	}
	else {
		printf("\nAlakazaam!\n");
	}

	return 0;


}
