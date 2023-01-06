/*
Count the number of uwu in a string.
*/

#include<stdio.h>
#include<string.h>
int main(){
char sWord[40];
	int dUWUCounter=0, dLength=0;


	//strlen = returns th ecurrent length of the string 

	printf("\nHello human. give me word: ");
	scanf("%s", sWord); //no &
	dLength = strlen(sWord); //gets the length

	for (int i = 0; i < dLength-2; i++){
		if (sWord[i]=='u' && sWord[i+1]=='w' && sWord[i+2]=='u'){
			dUWUCounter++;
		}
	}
	printf("%d\n",dUWUCounter);

}//endmain