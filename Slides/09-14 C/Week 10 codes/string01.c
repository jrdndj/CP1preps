/* 
	This C Program will use the different c-string functions

	puts, gets, 

	strlen( string ) = returns the size of the string 
	sizeof
	strcat (string1, string2 ) = string2 is added concatenated to string 1
	string1 = hello world, string2 = konnichiwa 
	strcat(string1, string2) hello world konnichiwa 

	strcmp( string1, string2) = if both strings are equal, this function would return 0 
	if they are not equal, it returns negative or positive number based on the comparison 
	string1 < string2 negative
	string1 > string2

	strstr

*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sFullName[32];
	char sPhrase[50];
	char sMyMotto[50] = "Drink until you die! ";
	int dNameLength; 


	//combine puts and gets 
	puts("Hola! Please give me your full name: ");

	//input using gets allows use to use spaces
	gets(sFullName);

	// this gets the size of the string and assigns it dNameLength
	dNameLength = strlen(sFullName);

	//we can display and validate the string we input
	printf("\n Welcome %s", sFullName);
	printf("\n Your name has %d characters including spaces. ", dNameLength);

	//prompt the user for a phrase input
	puts("\n What is your motto (45 chars max)? ");
	gets(sPhrase);

	//compare my motto and your input motto 
	//return 0 if strings are equal
	if( strcmp(sPhrase, sMyMotto) == 0 ){
		printf("\n hey we have the same motto! ");
	}//endif
	else {
		
		printf("\n Funny! Your motto has the word %s", strstr(sPhrase, "drink"));
		//add nice after each phrase
		strcat( sPhrase, "nice!");
		strcat( sMyMotto, "nice! ");
		printf("\n %s", sPhrase);
		printf(" \n %s", sMyMotto);
	}//endelse

	printf("\n Thank you for using our program!");


	return 0; 
}