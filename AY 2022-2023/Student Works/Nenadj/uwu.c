#include <stdio.h>
#include <string.h> // For String Lib.
#include <ctype.h> // To Upper & Lower the Char
// Check for "uwu"
int countOccurrences(char * str, char * toSearch);
int main() {
	char str[25];
    char uwu[25];
    int count;
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to search occurrences: ");
    gets(uwu);

    count = countOccurrences(str, uwu);

    printf("Total occurrences of '%s': %d", uwu, count);
}
int countOccurrences(char * str, char * toSearch)
{
    int i, j, found, count;
    int stringLen, searchLen;

    stringLen = strlen(str);      // length of string
    searchLen = strlen(toSearch); // length of word to be searched

    count = 0;

    for(i=0; i <= stringLen-searchLen; i++)
    {
        /* Match word with string */
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            count++;
        }
    }

    return count;
}