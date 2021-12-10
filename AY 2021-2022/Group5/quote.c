/*
if str1 = hello world
str2 = konnichiwa
strcat(str1,str2) returns hello world konnichiwa
strcmp(str1, str2) returns 0 if both strings are equal, else -1
strstr
*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sName[15];
	char sWelcome[100] = "Greetings! Welcome ";
	char sQuote[100] = "My milkshake brings all the boys to the yard. ";
	int dSize=0; 

	puts("\n Hola muchacho what is your name? ");
	scanf("%s", sName);
	dSize=strlen(sName);
	printf("\n Awesome! Your name has %d characters. ", dSize);
	strcat(sWelcome, sName);    //Greetings! Welcome Andres
	strcat(sWelcome, " "); // Greetings! Welcome Andres 
	strcat(sQuote, " Damn right its better than yours!");
	puts(sWelcome);
	puts("\n");
	puts(sQuote);

	//we use strcmp
	if( strcmp(sName, "Andres")==0 ){
		puts("\n OMG I love Analysis! ");
	}//endif

	printf("\n %s %s", sQuote, strstr(sQuote, "Damn"));
	return 0;
}