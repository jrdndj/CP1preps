#include<stdio.h>
#include<string.h>
#include <stdlib.h>
// f declarations


// global vars

/*
ask user to input two c-strings 

check if two strings have same number of characters.
if not, ask user to enter another input c string.	one str, both strs???
once accepted, check if two strings are anagrams. 
use user-defined functions, local variables. 


Hint: An anagram is a word or phrase formed by rearranging letters of a different word or phrase,
typically using all original letters exactly once
*/


struct kv {
	char k;
	unsigned int v;
};
typedef struct kv KeyValue;


char *getUserString(char[]);
char isAnagram(char[], char[]);
char *noWhiteSpace (char[]);

int main () {


char *pszStr1, *pszStr2;

pszStr1 = getUserString("Enter first string: ");
pszStr2 = getUserString("Enter second string: ");
//printf("%s %s\n", pszStr1, pszStr2);

//char *str1 = noWhiteSpace(pszStr1);
//char *str2 = noWhiteSpace(pszStr2);
//printf("no white: %s, %s\n", str1, str2);
//printf("%s %s\n", pszStr1, pszStr2);


while (strlen(pszStr1) != strlen(pszStr2)) {
	
	printf("Strings are not the same length. Please try again.\n");

	pszStr1 = getUserString("Enter first string: ");
	pszStr2 = getUserString("Enter second string: ");
}

	
printf("Strings are ");
if (isAnagram(pszStr1, pszStr2))	printf("anagrams.");
else 								printf("not anagrams.");
printf("\n");


return 0;
}

char* getUserString (char szMsg[]) {	// unsigned int dMax
	
	printf("%s", szMsg);
	
	int c;
	unsigned int dSize = 80;
	char *pszStr = (char *) malloc(dSize * sizeof(char));	
	unsigned int dCounter = 0;

	while ((c = getchar()) != '\n') {	//  && dCounter < dMax
		
		if (dCounter >= dSize) {
			
			dSize *= 2;
			char *pTmp = pszStr;
		//	printf("%s\n", pszStr);
			pszStr = (char *) malloc(dSize * sizeof(char));
			for (int i = 0; i < dCounter; ++i)	pszStr[i] = pTmp[i];
			free(pTmp);
		}
		
		pszStr[dCounter++] = (char) c;
		
	}
	pszStr[dCounter] = 0;


	char *pTmp = pszStr;
	pszStr = (char *) malloc((dCounter + 1) * sizeof(char));
	for (int i = 0; i < dCounter; ++i)	pszStr[i] = pTmp[i];
	free(pTmp);

	pszStr[dCounter] = 0;

	return pszStr;
}



/*
1. sort arrays, compare arrays
2. hashmap/struct
3. xor ^= arr1[i] ^ arr2[i];
	return xor == 0? true: false;
4. ++array[char = 'a'];		second pass --array[char - 'a']


*/


// return 1 if anagram, 0 if not
char isAnagram1 (char str1[], char str2[]) {
	
	str1 = noWhiteSpace(str1);
	str2 = noWhiteSpace(str2);
	
	int dLen1 = strlen(str1);
	int dLen2 = strlen(str2);
	
	if (dLen1 != dLen2)		return 0;	// not anag if not same length

	// 

	int dLen3 = dLen1 > 26 ? 26 : dLen1;	// ascii only
	KeyValue kvs1[dLen3];	
	KeyValue kvs2[dLen3];
	
	str1 = strlwr(str1);
	str2 = strlwr(str2);
	
	
	for (int i = 0; i < dLen1; ++i) {
		
		kvs1[i].k = 0;
		kvs1[i].v = 0;
		kvs2[i].k = 0;
		kvs2[i].v = 0;
	}
	
	// not anagram if not all letters are used
	
	for (int i = 0; i < dLen1; ++i) {
		
		int index = str1[i] - 'a';		// only ascii range a-z
		if (str1[i] ==	kvs1[index].k) {
			
			++kvs1[index].v;
		} else {
			
			kvs1[index].k = str1[i];
			++kvs1[index].v;
		}
		
		index = str2[i] - 'a';		// only ascii range
		if (str2[i] ==	kvs2[index].k) {
			++kvs2[index].v;
		} else {
			
			kvs2[index].k = str1[i];
			++kvs2[index].v;
		}		
	}
	
	for (int i = 0; i < dLen3; ++i) {
		
		if (kvs1[i].v != kvs2[i].v)	return 0;
	}
	
	
	
	
	
	return 1;
}

// return 1 if anagram, 0 if not
char isAnagram2 (char str1[], char str2[]) {
	
// either no white space or same ammount of white spaces. 
//	str1 = noWhiteSpace(str1);
//	str2 = noWhiteSpace(str2);
	
	int dLen1 = strlen(str1);
	int dLen2 = strlen(str2);
	
	if (dLen1 != dLen2)		return 0;	// not anag if not same length

	str1 = strlwr(str1);
	str2 = strlwr(str2);

	int mem[dLen1];
	for (int i = 0; i < dLen1; ++i)	mem[i] = 0;	// error: variable-sized object may not be initialized
	
	// not anagram if not all letters are used
	
	for (int i = 0; i < dLen1; ++i) {
		
		// increase char frequency
		++mem[str1[i] - 'a'];		// only ascii range a-z
	}
	
	for (int i = 0; i < dLen1; ++i) {
		
		// decrease char freq
		--mem[str2[i] - 'a'];		// only ascii range a-z
	}

	for (int i = 0; i < dLen1; ++i) {

		// +- diference
		if (mem[i] != 0)	return 0;
	}
	
	return 1;
}

char isAnagram (char str1[], char str2[]) {
	
// either no white space or same ammount of white spaces. 
//	str1 = noWhiteSpace(str1);
//	str2 = noWhiteSpace(str2);
	
	int dLen1 = strlen(str1);
	int dLen2 = strlen(str2);
	
	if (dLen1 != dLen2)		return 0;	// not anag if not same length

	str1 = strlwr(str1);
	str2 = strlwr(str2);

	int res = 0;

	// not anagram if not all letters are used
	
	for (int i = 0; i < dLen1; ++i) {

		res ^= str1[i] ^ str2[i];
	}

	
	return  res ? 0 : 1;
}


char *noWhiteSpace (char str[]) {
	
	unsigned int i = 0, j = 0;
	
	while (str[i] != 0) {
		if (str[i] == ' ' || str[i] == '\t') {
			++i;
			continue;
		}
		str[j++] = str[i++];	
	}
	str[j] = 0;
	// remalloc;
	
	return str;
}


