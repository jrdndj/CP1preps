#include<stdio.h>
#include<string.h> //to use string operations (strlen)
int main(){
	//declare variables
	char sWord[12];
	int dVowels=0, dLen=0;

	//prompt the user for an input
	printf("\n Please enter a word (max 12 chars!): ");
	scanf("%s", sWord);
	dLen = strlen(sWord);

	//print the word to confirm
	printf("\n You have entered: %s \n ", sWord);

	//to analyse each char, using for loop
	for(int i=0; i<dLen; i++){
		switch( sWord[i] ){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				dVowels++;
				sWord[i]= 'X';
				break;
			case '\0': break; //EOS - end of string
			default: break; 
		}//endswitch
	}//endfor

	//print the values
	printf("\n Your word has %d vowels in it. ", dVowels);
	printf("Your new word is %s.\n \n", sWord);
	return 0;
}//endmain

/*
Useful operations under #include<string.h>

strlen() 							   returns the length of a string
strupr() sWord[i] = strupr(sWord2[i]); changes a character to uppercase
strcat   strcat(string1, string2); 	   adds string2 at the end of string1
strcpy   strcpy(sWord1, sWord2); 	   copies the value of sWord2 into sWord1
strcmp   strcmp(sWord1, sWord2);	   compares both strings, 0 if no difference
strchr
strstr

*/