/*the user gets 2 digit num
this 2 digit num can be a combination of 1s and 0s eg. 00,01,10,11
if the first digit is 1 followed by 0, print bazinga
if the first digit is 0 followed by 1, print booyeah
if the two digits are the same print alakazam*/
#include <stdio.h>
int main()
{
	int dNum1;
	int dDigit1, dDigit2;

	printf("\n Give me an int: ");
	scanf("%d", &dNum1);

	dDigit1 = dNum1/10;
	dDigit2 = dNum1%10;

	if (dDigit1==1 && dDigit2==0)
	{
		printf("\n Bazinga ");			
	}
	if (dDigit1==0 && dDigit2==1)
		{
			printf("\n Booyeah ");
	}

	return 0;
}

/* (dDigit1 && !dDigit2)

int dNum1
int dDigit1, dDigit2;
dDigit1 = dNum1/10;
dDigit2 = dNum1%10;

if (dDigit1==1 && dDigit2==0) Bazinga
if (dDigit1==0 && dDigit2==1) Booyeah*/