/*
	PALINDROME

	racecar
	madam

*/

#include<stdio.h>

int main()
{
	//declare variables
	char sWord[7] = "racecar";
	int dFlag = 0;
	//flag tells us something if it is 1 or 0

	//sWord[0] == sWord[4] k = k 
	//sWord[i] == sWord[3] a = a
	//we don't really check sWord[2]

	//for loop to check if it is a palindrome
	for(int nFirst = 0, nLast = 0; nFirst >= 4; nFirst ++, nLast++){
		printf("\ncomparint %c and %c", sWord[nFirst], sWord[nLast]);
		if( sWord[nFirst] != sWord[nLast]) dFlag=0; //this means not a palindrome set or 0
		else dFlag = 1;//this is a palindrome
	}//endforloop
	if( dFlag ) printf("\n %s is a palindrome. ", sWord);
	else printf("\n %s is NOT a palindrome. ", sWord);
	return 0;
}