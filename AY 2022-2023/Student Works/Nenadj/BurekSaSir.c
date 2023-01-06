#include <stdio.h>
#include <string.h> // For String Lib.
// Vowel Exercises
int main() {
	char CString [12];
	int CounterVowels = 0, StringLength = 0;
	printf("Please Enter a word [max 12 char]:\n");
	scanf("%s", CString);
	StringLength = strlen(CString); // To get the size of a String
	printf("You have entered the word %s \n", CString);
	for(int i =0; i<StringLength; i++)
	{
		//if(CString[i]=='a' || CString[i]=='e' || CString[i]=='i' || CString[i]=='o' || CString[i]=='u')
		//	CounterVowels++; One Way to Write it
		switch(CString[i]){ // Waterfall Case Statement 
		case 'a':
		case 'e': // If there is no break it keeps falling down
		case 'i':
		case 'o': // Very useful for if the same block of code needs to be implemented
		case 'u':
			CounterVowels++;
			CString[i]='X';
			break;
		case '\0': 
			break; // Needed because of the EOS ~ End of String
		default:
			break;
		}
		
	}
	printf("Number of Vowels in the world: %d\n", CounterVowels);
	printf("New Word: %s\n", CString);
	return  0;
}