#include <stdio.h>
#include <string.h>

int main()
{
	char sWord[20] = "truwudfvduwuuuwutfer";
	int dLen = strlen(sWord);
	int uwuCount=0;
	for (int i=0; i<dLen-3; i++) {
		if (sWord[i]=='u' && sWord[i+1]=='w' && sWord[i+2]=='u') {
			uwuCount++;
		}
	}

	printf("\nCount of uwus in the string is %d.\n", uwuCount);
	return 0;
}