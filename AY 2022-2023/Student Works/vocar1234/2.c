/* the user gets two digit number. This two digit number can be a combination of 1s and 0s (eg. 00, 01, 10, 11).
if the first digit is "1" followed by "0", print bazinga.
if the first digit is 0 followed by 1,print booyeah
if the two digits are the same, print alkazam.
*/
#include <stdio.h>

int main(){
	int dNum1;
	printf("\n Hey, give me two digit number:");
	scanf("%d", &dNum1);

	int digit1=dNum1/10;
	int digit2=dNum1%10;
	if (digit1 && !digit2){
		printf("\nBazinga!\n");
	}
	if (!digit1 && digit2){
		printf("\nbooyeah!\n");
	}
	if (digit1 == digit2){
		printf("\nalkazam!\n");
	}
}