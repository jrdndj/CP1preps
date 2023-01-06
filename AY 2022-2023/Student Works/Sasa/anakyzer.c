#include <stdio.h>
#include<string.h>
int main(){

//||||||||\0| last one is escape character
//ask the usr for a word, the program wil scan each char for vowels (a,e,i,o,u)
//we will change evwery voewl to X
char sWord[12];
int dVowels = 0;

//prompt the user for an input
printf("Please give me a word: ");
scanf("%s", sWord);//we dont need an ampersand for string
//scanning a string

for(int i=0; i<strlen(sWord); i++){//scanning per character
	switch(sWord[i]){
		case 'a': 
		case 'e':
		case 'i': 
		case 'o':
		case 'u':
			dVowels++;
			sWord[i] = 'X';
			break;
		default: break;
	}//endswitch
}//endfor

printf("\nThere are %d vowels in your word.", dVowels);
printf("\n Im allergic to them so i changed the word into %s\n", sWord);

return 0;
}//endmain
