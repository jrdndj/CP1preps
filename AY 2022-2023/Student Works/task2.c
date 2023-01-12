#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// We will define the number of guessing attempts
#define LIVES 8

int main() {
 
// Possible words to guess letters from
   char optionWords[] [20] = {"banana", "question", "milkshake", "trypanosoma", "programming"};

// We want to generate random words each time
 
    srand(time(NULL));
    int random = rand() % 5;

  int length = strlen(optionWords[random]);
  char guesses[26] = {0};  
  char wordremainder; 
  int mistakes = 0;                

}

  return 0;

}