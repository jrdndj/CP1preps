#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//we first define the number of allowed mistakes
#define MAX_MISTAKES 6  

int main() {
  //list of possible words
  const char *words[] = {"famnit", "bioinformatics", "dorm", "seaside", "computerpracticum"};

  //random word from the nice list i put together
  srand(time(0));
  const char *word = words[rand() % 5];

  int word_length = strlen(word);
  char guessed_letters[26] = {0};  //letters that have been guessed
  char current_state[50] = {0};   // current state of the word being guessed
  int mistakes = 0;                // number of mistakes made so far

  //making the current_state be a series of underscores, one for each letter in the word 
  for (int i = 0; i < word_length; i++) {
    current_state[i] = '_';
  }

  //game is going on until the full word has been guessed or not
  while (strcmp(word, current_state) != 0 && mistakes < MAX_MISTAKES) {
    printf("Current state: %s\n", current_state);
    printf("Enter a letter: ");

    char ch;
    scanf(" %c", &ch);
    
    //checking if the letter was already guessed
    if (guessed_letters[ch - 'a']) {
      printf("You have already guessed the letter '%c'. Try again.\n", ch);
      continue;
    }

    //if not, we guess the letter
    guessed_letters[ch - 'a'] = 1;

   //making sure the letter is in the word
    int letter_in = 0;
    for (int i = 0; i < word_length; i++) {
      if (word[i] == ch) {
        current_state[i] = ch;
        letter_in = 1;
      }
    }
   //if it isn't
    if (!letter_in) {
      printf("Sorry, the letter '%c' is not in the word.\n", ch);
      mistakes++;
    }
  }
    //end
  if (mistakes == MAX_MISTAKES) {
    printf("IM SORRY, you lose! The word that you needed to guess was '%s'.\n", word);
  } else {
    printf("WOW, you won! The word indeed was: '%s'.\n", word);
  }

  return 0;
}
