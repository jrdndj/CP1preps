#include <string.h>
#include <stdio.h>
int main() {
	//initialize varuables
	int dCtr=0;

	//initialize an char array
	char sWord[20] = "tfuwuftuwugggggggggg";
	//create an int with value of length of char array
	int dLen = strlen(sWord);

	//for loop to count how often "uwu" occures in the array
	for (int i=0; i<dLen-2; i++){
		//specify which value we need to find and count
		if (sWord[i]=='u' && sWord[i+1]=='w' && sWord[i+2]=='u'){
			dCtr++;
		}
	}//endofloop

	//print the number of occurence
	printf("\n Number or occurence of uwu in string is %d.\n", dCtr);
	return 0;
}//endofmain