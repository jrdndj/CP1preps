/*
	//write  aprogram that will alllow  the user to input 
	a string word the program will analyze tje input 
	word and count the number of vowels. the program will 
	censor or change all vowels into the char 'x'
*/
#include <stdio.h>
#include <string.h>

int main(){

	//declare var
	char sWord[13];
	int dVowels=0, dLen=0;

	//strlen = returns the current size of the string

	//prompt the user for input
	printf("enter a word, u mf: ");
	scanf("%s", sWord);	//NO &!!!	ampersand

	//print rhe word
	printf("\n you have entered the word %s", sWord);

	dLen=strlen(sWord);
	printf("the word has %d characters", dLen);

	//scan the word array
	for(int i=0; i<dLen; i++){
		switch(sWord[i]){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			dVowels++;
			sWord[i]='X';
			break;
		case '\0': break;
		default: break;
		}//switchend
	}//forend

	//print the to prompt the user
	printf("\n the word has %d vowels.", dVowels);
	printf("\nhhhhhhhhhhhhhhhh %s \n", sWord);


	return 0;
}