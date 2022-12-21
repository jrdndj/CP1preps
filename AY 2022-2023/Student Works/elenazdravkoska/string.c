/*	A program that asks the user to input a word.
	Check each caharacter if they are vowels.
	Count the vowels.
	Change all vowels into x.
*/
#include <stdio.h>
#include<string.h>

int main(){
	//decalre variables
	char sWord[12];
	int dVowels=0, dLen=0;


    //strlen = returns the current lenght of the stirng

    printf("\n Hello human, give me word: ");
    scanf("%s", sWord); //no ampersand &
    dLen = strlen(sWord);//gets the length

    for (int i=0; i<dLen; i++){
    	switch( sWord[i]){
    	case 'a': 
    	case 'e':
    	case 'i':
    	case 'o':
    	case 'u':
    		dVowels++;
    		sWord[i]='X';
    		break;
    	case '\0': break;
        default: break;
	    }//endswitch
    }//endfor

    printf("\n Your word has %d vowels.", dVowels);
    printf("\n Im allergic to vowels so I changed them for you. ");
    printf("\n Your word is now %s. \n", sWord);

	return 0;
}//endmain
