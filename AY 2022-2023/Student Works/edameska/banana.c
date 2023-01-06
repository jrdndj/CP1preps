//enter word. the program will analise how many vowels it has
//it will censor all vowels and change them to X and print the final word
#include <stdio.h>
#include <string.h> //to use string operations such as strlen

int main()
{ 
	//declaring variables
	char sWord[12];// declaring a c-string
	int vowels=0, dLength=0;

	//asking for input
	printf("\n Pleae enter a word with mac 12 char ");
	scanf("%s", sWord); // no & with strings
	dLength=strlen(sWord);
	
	//print the word
	printf("\n You have entered the word %s \n", sWord);
	
	//to analyse each char use a for loop
	for (int i = 0; i < dLength; i++)
	{
		//if(sWord[i]=='a'||sWord[i]=='e'||sWord[i]=='i'||sWord[i]=='o'||sWord[i]=='u')
		switch(sWord[i]){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
				vowels++;
				sWord[i]='X';
				break;
		case '\0': break; //end of string
		default: break;
		}//endSwitch
	}//end of for
	printf("\n Your word has %d vowels in it  ", vowels);
	printf("\n Im allergic to them so i censored them for you ");
	printf("\n Your new word is %s \n", sWord);
	return 0;
}//endmain