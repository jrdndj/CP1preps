/*We will use the remaining operations 
strlen
strcat(string1, string2) = string 2 is added to string1
string1 = "dober dan "
string2 = "gospod"
strcat(string1, string2) returns "dober dan gospod" 
strcmp(string1, string2)
str1 = "My milkshake brings all the boys to the yard"
strstr(string1, "all")  returns "all the boys to the yard"
*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sName[50]; 
	char sWelcome[50] = "Greetings! Welcome ";
	char sQuote[50] = "Today is a sunny day! ";
	int dLen = 0; 

	puts("\n Hola! What is your name muchacho? ");
	scanf("%s", sName);
	dLen = strlen(sName);

	printf("\n Awesome, your name has %d characters. ", dLen);
	strcat(sWelcome, sName);
	strcat(sWelcome, " ");
	strcat(sWelcome, sQuote);
	puts("\n\n");
	puts(sWelcome);

	if( strcmp(sName, "Russ")==0 ){
		printf("\n OMG I love Analysis 1!!!! ");
	}

	printf("\n Fri%s ", strstr(sQuote, "day"));
	return 0; 
}//endmain