// Analyze input word and count the number of vowels
// The program will censor or change all volwels into the char 'X'

#include <stdio.h>
#include <string.h>

int main () {

	char sWord[13];
	int dVowels = 0, dLen = 0;

	printf("\nHi u-W-u gimme your čćasđ word!: ");
	scanf("%s", sWord); //no & AMPER-SAN

	printf("\n- Thou has thy word entered into thy System: %s.", sWord);

	//strlen returns the size of the string (string length in java)
	dLen = strlen(sWord);
	printf("\n- The word has this many mf*ck*ng characters: %d", dLen);

	//to scan muh word
	for (int i=0; i<dLen; i++) {
		switch(sWord[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E': //i get your point you're lazy
			case 'I':
			case 'O':
			case 'U':
				dVowels++; sWord[i]='X'; break;
			case '\0': 
				break;
			default:
				break;
		}
	}

	printf("\n- The word has this many vowels: %d", dVowels);
	printf("\n- THIS NEEDS TO BE CENSORED SO: %s\n", sWord); //

	return 0;
}