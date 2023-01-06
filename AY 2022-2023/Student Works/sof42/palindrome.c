#include<stdio.h>
#include<string.h>
int main(){
	//declare variables
	char sWord[7] = "racecar";
	int dFlag = 0;

	//checking...
	for( int nFirst = 0, nLast=6; nFirst != 4; nFirst++, nLast-- ){
		printf("\n Comapring %c and %c", sWord[nFirst], sWord[nLast]);
		if(sWors[nFirst] != sWord[nLast]) dFlag=0;
		else dFlag = 1;
	}//endfor
	if( dFlag ) printf("\n %s is a palindrome. ", sWord);
	else printf("\n %s is not a palindrome. ", sWord);
	
	return 0;
}//endmain