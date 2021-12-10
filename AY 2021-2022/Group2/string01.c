/* This program will allow us to use the different string operations

strlen(string) = returns the size of the string
strcat(string1, string2) = string2 is added as part of string1
string1 = hello world  
string2 = konnichiwa
strcat(string1, string2)
string1 = hello world konnichiwa
strcmp (string1, string2)
strstr = returns the string begin from the substring 
string1 = "My milkshake brings all the boys to the yard"
strstr(string1, "all");
"all the boys to the yard"
*/

#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sName[15];
	char sWelcome[50] = "Greetings! Welcome ";
	char sQuote[50] = "Today is a great day! ";  //strstr(sQuote, "day");
	int dLen=0;

	puts("\n Hola! What is your name? ");
	scanf("%s", sName);
	dLen = strlen(sName);
	printf("\n Awesome! Your name has %d characters. ", dLen);
	//printf("\n Awesome! Your name has %ld characters. ", strlen(sName));
	strcat(sWelcome, sName);
	strcat(sWelcome, " ");
	strcat(sWelcome, sQuote);
	puts("\n\n");
	puts(sWelcome);

	//compare strings, we put strcmp inside an if
	//strcmp returns 0 if strings are equal
	if( strcmp(sName, "Russ")==0 ){
		printf("\n OMG I love Analysis!");
	}
	printf("\n Wednes%s", strstr(sQuote, "day"));
	return 0; 
}