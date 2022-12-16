#include<stdio.h>

int main(){
	//declare variables
	char sWord[7] = "racecar";
	int dFlag = 0;

	//for loop to check if it is a palindrome
	for(int nFirst = 0; nLast = 6; nFirst++, nLast-- ){
		printf("\n comparing %c and %c", sWord[nFirst], sWord[nLast]);
		if(sWord[nFirst] != sWord[nLast]) dFlag=0; //this means not a palindrome set to 0
		else dFlag = 1; //this is a palindrome
	}//end for loop
	if(dFlag) printf("\n %s is a palindrome. ", sWord);
	else printf("\n %s is NOT a palindrome. ", sWord);
	return 0;

}
