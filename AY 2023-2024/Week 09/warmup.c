/* This program receives a character input from the user
   and check if it is a vowel or not
	vowels: a e i o u
    */
#include<stdio.h> //standard input output 

int main(){

	//declare variables
	char cLetter; 

	//ask the user for an input
	printf("\n Hi! Please enter one character: ");

	//get the input from the user
	scanf(" %c", &cLetter); // "%d" " %c" we need the space %c %s

	//print the character input
	printf("\n You have inputted %c. \n", cLetter);

	//we will now check if the characters are a e i o u
	//assume every character is a small character
	if(cLetter=='a' || cLetter=='e' || cLetter=='i' || cLetter=='o' || cLetter=='u'){
		//do something if the statement is true
		printf("\n %c is a vowel. \n ", cLetter);
	}//end check if vowel 
	else{
		//assume they are not vowels by default
		printf("\n %c is not a vowel. \n", cLetter);
	}//end else

	
	return 0;
}//endmain






