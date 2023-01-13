#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>   

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
	const char * Words = GivenWords[Index];   //the word u are given, then changed to ____ using a for loop

