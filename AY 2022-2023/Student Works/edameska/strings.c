//palindrome <3
#include <stdio.h>
#include <string.h>

int main()
{
	char sWord[12];
	int dFlag=0, dLength=0, EvenOddL;

	printf("\n Please enter a word with max 12 char ");
	scanf("%s", sWord);
	dLength=strlen(sWord);
	if(dLength%2==1) EvenOddL=(dLength/2)+1;
	else EvenOddL=dLength/2;
	for(int nFirst=0, nLast=dLength-1; nFirst!=EvenOddL ;nFirst++, nLast--){
		if(sWord[nFirst]==sWord[nLast]) dFlag =0; //not a pal
		else dFlag=1; //a pal
	}
	if(dFlag) printf("\n %s is a pal\n", sWord);
	else printf("\n %s is not a pal\n", sWord);
	return 0;
}