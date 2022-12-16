#include <stdio.h>
#include <string.h> // For String Lib.
#include <ctype.h> // To Upper & Lower the Char
// Palindrome
int main() {
	char Word [12];
	printf("Please Enter a word [max 12 char]:\n");
	scanf("%s", Word);
	int WLen = strlen(Word), Counter=0;
	char Rev [strlen(Word)];
	for(int i=WLen-1; i>=0; i--)
	{
		Rev[i] = Word[i];
	}
	for(int i=0; i<Wlen; i++)
	{
		if(Rev[i]==Word[i])
			Counter++;
	}
	if(Counter==WLen)
		printf("Palindrome\n");
	else
		printf("NOT a Palindrome\n");
	return 0;
}