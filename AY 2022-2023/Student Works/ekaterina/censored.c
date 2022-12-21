/* I want to write a program that will allow the user to input a string word
 the program will analyze the input word and count the number of vowels 
 (a,e,i,o,u)
 the progra,m will censor all vowels int the char 'X'
 */

 #include<stdio.h>
 #include<string.h>

 int main(){

 	//introducing some variables 
 	char sWord[13];
 	int dVowels=0;
 	int dLen;

 	//strlen returns the size of the string

 	//promt the user for an input
 	printf("\n Hello user give me the word:");
 	scanf("%s", sWord);  //no ampersand &  pecause it has a pointer in itself 

 	//print the word the user has entered
 	printf("\n You have entered the word: %s ", sWord);
 	dLen= strlen(sWord);
 	printf("\n The word has %d character.", dLen);


 	//scan the word array with a for loop
 	for(int i=0;i<dLen;i++){
 		switch(sWord[i])
 		{
 		case 'a': 
 		case 'e':
 		case 'i':
 		case 'o':
 		case 'u':
 		case 'A':
 		case 'E':
 		case 'I':
 		case 'O':
 		case 'U':
 			dVowels++;
 			sWord[i]='X';
 			break;
 		case '\0':
 		break;
 		default:
 			break;
 		
 		}//endswitch
 	}//endfor


//print them to promnt the user 
 	printf("\n The word %s has %d vowels ",sWord, dVowels);
 	printf("I am alergic to vowels so I censored them for you\n");
 	printf("\nYour word id now %s.",sWord );

 return 0;
 } 
