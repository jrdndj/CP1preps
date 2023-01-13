/*Write a program that ačllows the user to input a string word.
The program will check and count the number of vowels
(a,e,i,o,u)
The program will censor or change all vowels into the char 'X'
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h> //to use toupper()

int main(){
	//declare variables
	char sWord[13];
	int dVowels=0, dLen=0;

	//strlen=returns the current size of the string

	//promp the user for an input
	printf("\n Hello human, give me a word: ");
	scanf("%s", sWord);//no ambersand &

	//print the word
	printf("\n You have entered the word %s. ", sWord);

	dLen=strlen(sWord);
	printf("\n The word has %d charachters", dLen);

	//scan the word array
	for(int i=0;i<dLen;i++){
		switch(sWord[i]){
		case 'a': 
		case 'e': 
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
			dVowels++; 
			sWord[i]=='X' ; 
			break;			
		case '\0':break;
		default: break;
			
		}//endswitch
	}//endfor

	//print them to prompt the user
	printf("\n The word has %d vowels. ", dVowels);
	printf("\n Im allergic to vowels so I censored them for you");
	printf("\n Your word is now %s \n",sWord);


	return 0; 
		
}//end main
