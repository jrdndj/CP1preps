#include<stdio.h>
#include<ctype.h> //for toupper
#include<string.h> // for the other string operators

/* 
	A C program that will involve poems. 

	puts, gets, strlen, strcat, strcmp, strstr
*/
int main(){
	//declare variables 
	char sPoem[100]; 
	char sName[50];
	char sCheck[75] = "my love for you is like a drug. berzerker.  - Mark TALLeski";
	int dLen; //used for the length of the poem later on 

	//interactive input using puts and gets
	puts("\n Please enter a poem. ");
	gets( sPoem );
	//%s, & 

	puts("\n What is your name? ");
	gets( sName );

	//puts("\n Here is the poem you gave me: ");
	//print this just to test our input
	//puts( sPoem );

	dLen = strlen( sPoem ); //this returns the number of characters used in the array.
	printf("\n The poem yu gave me has %d characters including spaces. ", dLen);

	//strcat (contatenate, or add to a string) 
	//strcat(string1, string2); //string 2 is added as an extension of string 1

	//concatenate authors name to poem then print
	strcat( sPoem, sName );
	printf("\n Here is your poem \n \n %s", sPoem );

	//strcmp(string1, string2) = return 0 if they are equal. 
	if( strcmp( sPoem, sCheck ) == 0 ){
		printf("\n Our poems are the same. ");
	}//endif
	else {
		//check if there are similar words in the poem. 
		//returns 1 if it finds Marko TALLeski anywhere in the string
		//printf( "%s", strstr( sPoem, "Mark TALLeski" ) );
		if ( strstr( sPoem, "Mark TALLeski" ) )  {
			printf("\n\n Our poems  are not the same but they have Marko in it.  ");
		}//endifelse
	}//endelse
	return 0; 
}












