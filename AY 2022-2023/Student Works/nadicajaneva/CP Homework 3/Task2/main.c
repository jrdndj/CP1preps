#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_MISTAKES 6 // maximum number of mistakes allowed before game is lost
#define WORD_COUNT 10 // number of words in the word list

// word list
char *words[WORD_COUNT] = {
  "koper",
  "primorska",
  "otorinolaringologija",
  "sky",
  "banana",
  "finger",
  "river",
  "macedonia",
  "strawberry",
  "ferrari"
};

// function prototypes
void draw(int mistakes);
int play(char *word);

int main() {
  srand(time(0)); // seed the random number generator

  // choose a random word from the word list
  int index = rand() % WORD_COUNT;
  char *word = words[index];

  printf("Welcome to Hangman!\n");
  int mistakes = play(word);
  /* with this if statement we check if it has more than 6
  mistakes it prints a message you lost with correct word, 
  but if you guess the word it prints a message you win
  */
  if (mistakes >= MAX_MISTAKES) {
    printf("You lose! The word was '%s'.\n", word);
  } else {
    printf("You win! The word was '%s'.\n", word);
  }

  return 0;
}//endmain

// declaring the return functions
int play(char *word) {
  int mistakes = 0; // number of mistakes made so far
  int word_length = strlen(word); // calculating the length of a word
  char guess[word_length + 1];
  for (int i = 0; i < word_length; i++) {
    guess[i] = '_';
  }//endfor
  guess[word_length] = '\0';

  // this loop prrints the current guess and a letter to enter
  while (mistakes < MAX_MISTAKES) {
    printf("Current guess: %s\n", guess);
    printf("Enter a letter: ");

    char letter;
    scanf(" %c", &letter);

    int found = 0; // flag to check if the letter was found in the word
    for (int i = 0; i < word_length; i++) {
      if (word[i] == letter) {
        guess[i] = letter;
        found = 1;
      }
    }

    if (!found) {
      mistakes++;
      draw(mistakes);
    }

    if (strcmp(word, guess) == 0) {
      return mistakes;
    }
  }//endwhile

  return mistakes;
}

// draws the hangman figure based on the number of mistakes made
void draw(int mistakes) {
  switch (mistakes) {
    case 0:
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      break;
    case 1:
      printf("   ____\n");
      printf("  |    |\n");
      printf("  |    o\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
}
}
