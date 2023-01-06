/*
User enters a word and a number.
Program returns letter groupings of the entered number.
Count the number of groupings
*/

#include<stdio.h>
#include<string.h>

int main(){
	int dLength=0, dLengthofGroupings=0, dGroupingsCounter=0;
	char sWord[20];

	printf("\n Hello human. give me word: ");
	scanf("%s", sWord); //no &
	dLength = strlen(sWord); //gets the length

	printf("\n Hello human. give me number: ");
	scanf("%d",&dLengthofGroupings); //no &

	for (int i = 0; i < dLength-3; i++){

		for (int j = i; j < i+dLengthofGroupings; j++){
			printf("%c",sWord[j]);
		}//endof j loop

		dGroupingsCounter++;
		printf("\n");
	}//endof i loop

	printf("%d\n", dGroupingsCounter);

}//end of main