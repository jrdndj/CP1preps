/**/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sFullName[32];
	char sPhrase[50];
	char sMyMotto[50] = "Drink until you die! ";
	int dNameLen = 0;

	//lets use puts and gets
	puts("\n Hola! Please give me your full name: ");
	gets(sFullName);

	//gets the length of the input string even including the spaces
	dNameLen = strlen(sFullName);

	//we validate the name of the user
	printf("\n Welcome %s !", sFullName);
	printf("\n Your name has %d characters including spaces. ", dNameLen);

	puts("\n What is your motto in life (45 chars only)?: ");
	gets(sPhrase);

	//compare my motto if we have the exact same motto
	//return 0 if strings are equal
	if( strcmp(sPhrase, sMyMotto) == 0 ){
		printf("\n hey bro we have the same motto! BFF \n");
	}//endif
	else {
		printf("\n Funny! Your motto has the word %s. ", strstr(sPhrase, "die"));
		strcat( sPhrase, sFullName );
		printf("\n %s", sPhrase);
	}//endelse
	return 0; 
}//endmain