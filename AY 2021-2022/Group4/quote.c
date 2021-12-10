/*strlen
strcat(string1, string2)
strcmp(string1, string2)
strstr(string1, string2)*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sName[50];
	char sWelcome[100] = "Greetings! Welcome ";
	char sQuote[100] = "My milkshake brings all the boys to the yard ";
	int dLen = 0;

	puts("\n Hola muchacho what is your name? ");
	scanf("%s", sName);
	dLen = strlen(sName);
	printf("\n Awesome your name has %d characters. ", dLen);
	strcat(sWelcome, sName); 
	strcat(sWelcome, " "); 
	strcat(sQuote, "and damn right its better than yours. " );
	puts("\n\n");
	puts(sWelcome);
	puts("\n");
	puts(sQuote);

	//function strcmp returns 0 if both strings are equivalent
	//it returns -1 if they are not equivalent 
	if( strcmp(sName, "Russ")==0 ){
		puts("\n OMG I love analysis!");
	}//endif

	printf("\n %s ", strstr(sQuote, "damn"));

	return 0;
}//endmain