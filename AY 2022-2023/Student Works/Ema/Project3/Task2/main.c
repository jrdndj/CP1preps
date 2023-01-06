#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>   
#include <ctype.h>  //we ned this library to use isalpha function

#define WordLength 25 
#define MaxGuesses 3


 //words you can get
const char* GivenWords[5] ={
  
     "entry",  
     "tech", 
     "slime",  
     "reach ", 
     "champion" 
};

int main()
{
	srand(time(NULL));                         //so we do not get a word two times in a row
	int Index = rand() % 5;                    //deviding by the number of words u may get
	const char * Words = GivenWords[Index];  //the word u are given, then changed to ____ using a for loop

	
	//so we get an underscore instead of the letters
  char Symbol[WordLength + 1 ];

  for (int i = 0; i < WordLength; i++){

  	    Symbol[i] = '_';

  }//endFor

  char Letter;
  int LetterFound = 0;
  int Guesses = 0;


  Symbol[5]= '\0';

 

  while(Guesses < MaxGuesses) {

  	printf("The word you have to guess  is %s \n", Symbol );  //hidden word

    //to get a letter from a player
  	printf("Enter a letter : \n");
  	scanf(" %c \n", &Letter);     


    
     // to make sure a player only inputs the letters 

    if(!isalpha (Letter)){
      printf("The game accepts letters only. \n");
     
    }
    
                         

    //if letters are found
	  
	  LetterFound=0;
	  
  	for (int i = 0; i < WordLength; ++i){

  		if (Words[i] == Letter){
  			Symbol[i] = Letter;  //remove the underscore
  			LetterFound = 1;

  		}//endIf

  	}//endFor

  	if (LetterFound) {

  		if (strcmp( Words, Symbol) == 0){
            printf("Congrats you have won the game! \n ");
  		}//endIf

  	}//endIf

  

  //if the letters are not found they have 3 mistakes available and with each mistake a part of the hanggman is drawn

  	else {

  		Guesses ++;                   //Guesses =  Guesses + 1

  		switch(Guesses) {             //printing the hangman step by step parallel with mistaken guesses
  			case 1:
  			       printf(" Ô \n");
  			       break;
  			case 2 :
  			      printf("  Ô   \n" );
  			      printf(" /|\\ \n");
  			      
  			      break;

  			case 3:
  			      printf("      Ô   \n");
  			      printf("     /|\\ \n");
  			      printf("      |   \n");
  			      printf("     / \\ \n");
  			      break;
 
  		}//endSwitch


      //when we reach the max number of wrong guesses we've lost the game

  		if (Guesses == MaxGuesses){
  			printf(" \n You have lost the game! \n");    //\n on both sides so when the hangman is fully drawn we get the statement in the next line
  		}// endIf

  	}//endElse

  }//endWhile

   return 0;

}//endMain
	
