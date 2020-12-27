#include <stdio.h>
#include<string.h>

/*
Create a C program to find length of longest substring of a given string without repeating
characters

Original String: xyzxyzyy
Length of longest substring without repeating characters: 3

https://www.ascii-code.com/
a 65	+32 = 97

a 97
b 98
z 122
122-97 = 25
*/
int main (int argc, char *argv[]) {

char szStr[80] = {0};	// must be done
int dLen = 0, dMax = 0, dCounter = 0;
char list[26] = {0};	// works for ascii, uppercase
// dangerous for uppersaces negative index and greater than z, out of mem


printf("input string: (max 70 chars)\n");
scanf("%s", szStr);

dLen = strlen(szStr);


for (int i = 0; i < dLen; ++i) {
	
	list[szStr[i] - 'a'] = 1;	// a-a = 0;	b-a = 1
	++dCounter;	// 1 in
//	printf("%d: %hhd %c %hhd\n", i, szStr[i] - 'a', szStr[i], list[szStr[i] - 'a']);
	
	for (int j = i+1; j < dLen; ++j) {
	
		if (list[szStr[j] - 'a'] == 1) {
			dCounter = 0;
			for(int k=0;k<26;++k)list[k]=0;	// reset list
			break;
			
		} else {
			list[szStr[j] - 'a'] = 1;
			++dCounter;
			// could also take char here
			dMax = dMax < dCounter? dCounter : dMax;
		}
	}
}

printf("Longest non repeating substr is: %d", dMax);

return 0;
}