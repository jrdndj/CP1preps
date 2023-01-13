#include<stdio.c>

int main(){

	char sWord[7] = "racecar";
	dFlag = 0;

	for(int nFirst = 0, nLast = 6; nFirst != 4; nFirst++, nLast-- ){
		printf("\ncomparing %c and %c ", sWord[nFirst], sWord[nLast]);
		if( sWord[nFirst] != sWord[nLast] ) dFlag=0;
		else dFlah =1;

	}
	if( dFlag)
		ptintf("\n %s is a palinfrome.", sWord);
	else
		printf("\n %s is not a palindrome. " sWord);
	return 0;
}