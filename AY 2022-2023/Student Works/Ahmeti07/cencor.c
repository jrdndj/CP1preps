#include <stdio.h>
#include <string.h>
//Ne c nuk ka string functionj mirpo perdoret C-string
int main (){
	//declre variables
	char sWord[13];
	char dVowels=0, dLen=0;

	//strklen = return the current size of the string

	//promp the user for an input
	printf("\n Hello human this is Chat GPT-1, give me a word: ");
	scanf("%s", sWord); //no ampersand &

	//print the word 
	printf("\n You have enter the word: %s. ", sWord);
	dLen = strlen(sWord);
	printf("\n The word has %d characters. ",dLen);
	//scan the word array
	for(int i=0;i<dLen;i++){
      //if(sWord[i]=='a'|| sWord[i]=='e')
 		switch(sWord[i]){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
			 	dVowels++;
			 	sWord[i]='X';
			 	break;
			 case'\0': break;
			 default: break;
 		}//endSwitch

	}//endfor

	//print them to promp the user
	printf("\n The word has %d vowels. ", dVowels);
	printf("\n Im allergic to vowels so I censored them for you. ");
	printf("\n Your word is now %s. ", sWord);
	return 0;
}//endmain
