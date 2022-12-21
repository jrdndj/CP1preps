#include <stdio.h>
#include<string.h>
int main(){

//number of uwus   |t|r|u|w|u|f|x|\0| -\0=n+1, x=n, f=n-1, u=n-2
char sWord[50];
int duwu = 0;

//prompt the user for an input
printf("Please give me a word: ");
scanf("%s", sWord);//we dont need an ampersand for string
//scanning a string

for(int i=0; i<(strlen(sWord)-2); i++){//scanning per character
	if((sWord[i]=='u') && (sWord[i+2]=='u') && (sWord[i+1]=='w')){
	duwu++;
	}
}//endfor

printf("\nThere are %d uwus in your word.\n", duwu);

return 0;
}//endmain
