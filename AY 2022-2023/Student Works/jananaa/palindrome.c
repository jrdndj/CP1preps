/*
racecar
madam
*/
#include <stdio.h>
int int main()
{
	char sWord[7]="racecar";
	char dFlag = 0;
	//flag tells us something if it is 1 or 0

	/* sWord[0] == sWord[4] k=k
	sWord[1] == sWors[3] a=a
	we dont really check sWord[2]*/

	//for loop to check if its a palindrome
	for (int nFirst = 0, nLast = 6; nFirst !=4; nFirst++,nLast--)
	{
		printf("\ncomparing %c and %c", sWord[nFirst],sWord[nLast]);
		if (sWord[nFirst] != sWord[nLast])
			dFlag =0; //this means not a palindrome set to 0
		else
			dFlag = 1; //this is a palindrome
	}//endforloop

	if (dFlag)
		printf("\n %s is a palindrome.", sWord);
	else
		printf("\n %s is NOT a palindrome.", sWord);
	return 0;
}