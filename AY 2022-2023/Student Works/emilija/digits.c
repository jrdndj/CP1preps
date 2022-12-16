//the first digit is "1" followed by "0", print "Bazinga"
//the first digit is "0" followed by "1", print "Booyeah"
//if the two digits are the same, print "Alakazam"
#include <stdio.h>

int main(){
	
	int dNum1, dDigit1, dDigit2;
	printf("Enter int: ");
	scanf("%d", &dNum1);

	dDigit1 = dNum1/10;
	dDigit2 = dNum1%10;

	if(dDigit1 && !dDigit2) printf("\nBazinga \n");
	if(!dDigit1 && dDigit2) printf("\nBooyeah \n");
	if(dDigit1==dDigit2) printf("\nAlakazam \n");

	return 0;
}
