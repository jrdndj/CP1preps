/*
The user gets two digit numbers. This two digits number can be a combination
of 1s and 0s (eg. 00, 01, 10, 11).

If the first digit is "1" followed by "0", print "Bazinga".
If the first digit is "0" followed by "1", print "Booyeah".
If the two digits are the same, print "Alakazam".

int dNUm1
int dDigit1, dDigit2;

dDigit1=dNum1/10;
dDigit2=dNum1%10;

if(dDigit1==1 && dDigit2==0)	Bazinga
if(dDigit1==0 && dDigit2==1)	Booyeah


if(Ddi)




*/
#include <stdio.h>

int main(){
	int dDigit1, dDigit2;
	printf("\nEnter two digits: ");
	scanf("%d %d", &dDigit1, &dDigit2);

	if(dDigit1 && !dDigit2)
		printf("\nBazinga\n");
	if(!dDigit1 && dDigit2)
		printf("Booyeah\n");
	if(dDigit1==dDigit2)
		printf("Alakazam\n");
	return 0;
}