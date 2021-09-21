/* 
	This C program uses for loops and arrays specifically C Strings

	palindrome checker 

	5-character palindrome checker

	palindrome are words which can be read the same from LtoR nd R to L

	racecar 
	kayak
	madam
*/
#include<stdio.h>

int main(){
	//declare variables
	char sWord[7] = "racecar";
	int dFlag = 0; 
	//flag tells us soomething if it is 1 or 0 

	//sWord[0] == sWord[4] k = k
	//sWord[1] == sWord[3] a = a
	//we dont really check sWord[2]

	//for loop to check if it is a palindrome
	for ( int nFirst = 0, nLast = 6; nFirst != 4; nFirst++, nLast-- ){
		printf("\ncomparing %c and %c", sWord[nFirst], sWord[nLast]);
		if( sWord[nFirst] != sWord[nLast] ) dFlag = 0; //this means not a palindrome set to 0 
		else dFlag = 1;  //this is a palindrome
	}//end for loop
	if( dFlag ) printf("\n %s is a palindrome. ", sWord);
	else printf("\n %s is NOT a palindrome. ", sWord);
	return 0; 
}



