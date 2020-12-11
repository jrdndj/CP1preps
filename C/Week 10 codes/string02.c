/* 
	This C Program will use different c-string functions 

	puts, gets, strlen, strcat, strcmp, strstr
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h> //to use toupper()

int main(){
	//declare variables
	char sPhrase[50];
	char sUserGuess[20]; 
	char sMagicWord[20] = "rosebud";
	int dPhraseLength;


	//interactive input using puts and gets
	puts("\n Please enter a sentence: \n");
	
	//gets allows us to enter phrases. 
	gets(sPhrase);
	//we didnt use %, & 

	/*strlen = returns the number of "occupied characters in the string"
		strlen(string); 
		strlen counts the spaces in between 
	*/
	dPhraseLength = strlen(sPhrase);
	printf("\n Your input has %d characters. ", dPhraseLength);

	/*strstr looks for a substring inside a string
	substring is a string inside a string 
	strstr(str1, str2);
		it looks for str2 inside str1 and prints that word
		sPhrase = "I like chocolates and coffee" 
		strstr( sPhrase, "choco" ) 
	*/
	printf("\n Your phrase has the the word %s ", strstr(sPhrase, "choco"));

	/*strcat = concatenate, append, to add, to extend an existing 
		strcat(string1, string2); = sring2 is added as an extension of string1
	*/
	//strcat(sPhrase, ".... is a palindrome.");
	printf("\n Your updated phrase is... %s", sPhrase);

	/* strcpy(str1, str2) = str2 gets the value of str1 as well 
	*/

	/* strcmp( string1,  string2 ) = returns 0 if both strings are equal. 
		if they are not equal, it will return a positive or negative value. 
		if( strcmp( string1, string2 ))
	*/
	puts("\n Please enter the secret word: ");
	gets( sUserGuess );
	//if the value is zero, it means they are equal
	if ( strcmp( sUserGuess, sMagicWord ) == 0 ){
		//let us convert the input into upper case characters
		// strupr toupper(), it only converts one character at a time 
		for( int dCtr = 0; dCtr < strlen(sUserGuess); dCtr++ ){
			sUserGuess[dCtr] = toupper(sUserGuess[dCtr]);
		}//endfor
		printf("\n The %s is a cheat code in the SIMS that gives the suer 50K simoleons. ", sUserGuess);
	}//endif
	else {
		printf("\n Sorry I have nothing to tell you. ");
	}//endelse

	return 0; 
}