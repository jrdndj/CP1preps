/*
we are going to ask the user to enter a word, this program will analyse 
how many vowels doese it have? (a,e,i,o,u) It will censor all vowels and 
change them to 'x'. Print the final word
e.g. banana = bXnXnX
*/
#include <stdio.h>
#include <string.h> //so we can use string operations such as strlen
int main()
{
	//declare variables
	char sWord[12];
	int dVowels=0, dLen=0;

	//prompt the user for input
	printf("\nPlease enter a word (max 12 char): ");
	scanf("%s", sWord); //no & ampersand

	dLen = strlen(sWord);

	//print the word
	printf("\nYou have entered the word: %s \n", sWord);

	//to analyse each char in the string we use for loop
	for (int i = 0; i < dLen; i++)
	{
		//if (sWord[i] == 'a' || sWord[i] == 'e')
		switch(sWord[i]){
			case 'a': 
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				dVowels++;
				sWord[i] ='X';
				break;
			case '\0': break;
			default: break;
		}//endswitch
	}//endfor

	//print the values
	printf("\nYour word has %d vowels in it.", dVowels);
	printf("\nIm alergic to them so I censored them for you.");
	printf("\nYour new word is now %s. Hope you like it. \n", sWord);
	return 0;



}//endmain

/*
functions in #include <string.j>
strlen() dCount=strlen(sWord);         returns the length of string
strupr() sWord[i]=strupr(sWord2[i]);   changes a char to uppercase
strcat strcat(string1, string2);       adds string2 at the end of string1
strcpy strcpy(sWord1, sWord2);         copies the value of sWord2 into sWord1
strcmp strcmp(sWord1, sWord2);         compares both strings, 0 if no difference
strchr 

*/
