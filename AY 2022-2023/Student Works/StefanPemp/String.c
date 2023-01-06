/*
	A program asks the user to input a word.
	Check each character if they are vowels. (a, e, i, o, u)
	Count the vowels 
	Change all vowels into X
*/


#include <stdio.h>
#include <string.h>
int main(){
	//declare variables
	char sWord[12]; //String with 12 characters from 0-11
	int dVowels=0, dLen=0;

	//strlen = returns the current length of the string

	printf("\n Hello human, give me word: ");
	scanf("%s", sWord); //No ampersand (&) at sWord
	dLen = strlen(sWord); //gets the length

	for(int i=0; i<dLen; i++){
		switch( sWord[i]){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': 
			dVowels++; 
			sWord[i]='X';break;
		case '\0': break;
		default: break;
		}//endswitch
	}//end for
printf("\n Your word has %d vowels. ", dVowels);
printf("\n I'm allergic to vowels so I changed them for you. ");
printf("\n Your word is now %s. \n", sWord);

	return 0;
} //end main


#include <stdio.h>
#include <string.h>
int main(){

//Count the number of "uwu" in this string
//for i=0 to dLen-2
//	sWord[i] == 'u' && sWord[i+1] == 'w'
int dLen = 0;
dLen = strlen(sWord);
char sWord[20] = "uwuowouwuowouwuowouw";


for (int i=0; i < dLen-2; i--){
	if (sWord[i] == 'u' && sWord[i+1] == 'w'){
	dLen++;
	}
}
printf("\n%d\n", dLen);
printf("\n%s\n", sWord);


}//end main

/*
We have the word onomatopoeia
user enters a number: 4
4 letter groupuings (should be dynamic)
onom
noma
omat
mato
atop
topo
opoe
poei
oeia
9 groupings
*/
#include <stdio.h>
#include <string.h>
int main(){
 char sWord = "onomatopoeia";
 int dLen = 0, dUserInput;
 dLen = strlen(sWord);
 printf("Enter a number: ");
 scanf("%d", &dUserInput);
 for (int i=0; i<=dLen-dUserInput; i++){
 	for (int j=i; j<i+dUserInput; j++){
 		printf("%c", sWord[j]);
 	}
 	if (i != dLen-dUserInput){
 		printf(", ");
 	}
 	dLen++;
 }//end for 
 printf("\n there are %d possibilities.", dLen);
}//end main
