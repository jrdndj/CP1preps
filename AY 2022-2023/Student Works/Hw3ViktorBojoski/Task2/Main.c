#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_MISSES 6

// Function prototypes
void draw(int misses);

int main() {
//These are the instruction to play the game
printf("\n\t Be careful that you could be hanged!");    
printf("\n\n\t Rules : ");
printf("\n\t - There is allowed 6-mistake maximum.");
printf("\n\t - The alphabet is all lowercase.");
printf("\n\t - The names of all words refer to fruits."); 
printf("\n\t Syntax : Alphabet");
printf("\n\t Example : a \n\n");
srand(time(0)); // Seed the random number generator

  // Choose a random word from the array
  const char* words[] = { "lemon", "orange", "apple", "banana", "mango", "watermelon" };
  const char* word = words[rand() % 6];

  // Initialize the game state
  int misses = 0;
  int letters_left = strlen(word);
  char guessed[26] = { 0 }; // Keep track of which letters have been guessed

  // Game loop
  while (misses < MAX_MISSES) {
    // Print the word, with unguessed letters replaced by underscores
    for (int i = 0; i < strlen(word); i++) {
      char c = word[i];
      if (guessed[c - 'a']) {
        printf("%c", c);
      } else {
        printf(" _ ");
      }
    }
    printf("\n");

    // Draw the hangman
    draw(misses);

    // Get the player's guess
    printf("Enter a letter: ");
    char guess;
    scanf(" %c", &guess);

        // Check if the guess is correct
    if (guess == 0 || guess < 'a' || guess > 'z') {
      printf("Invalid input.\n");
      continue;
    }
    if (guessed[guess - 'a']) {
      printf("You already guessed that letter.\n");
      continue;
    }
    guessed[guess - 'a'] = 1;

    if (strchr(word, guess)) {
      // The guess was correct
      int count = 0;
      for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guess) {
          count++;
        }
      }
      letters_left -= count;

      // Check if the user has won
      if (letters_left == 0) {
        printf("Congrats! You have won!\n");
        break;
      }
    } else {
      // The guess was incorrect
      printf("Wrong letter!\n");
      misses++;
    }
    if (misses >= MAX_MISSES) {
  printf("You lose! The word was: %s\n", word);
    }
  }
    return 0;
}

// Draws the hangman
void draw(int misses) {
  if (misses == 0) {
    printf("   _______\n");
    printf("   |/    |\n");
    printf("   |     \n");
    printf("   |     \n");
    printf("   |     \n");
    printf("   |     \n");
    printf("___|___  \n");
  } else if (misses == 1) {
    printf("   _______\n");
    printf("   |/    |\n");
    printf("   |     O\n");
    printf("   |     \n");
    printf("   |     \n");
    printf("   |     \n");
    printf("___|___  \n");
  } else if (misses == 2) {
    printf("   _______\n");
    printf("   |/    |\n");
    printf("   |/    O\n");
    printf("   |     | \n");
    printf("   |        \n");
    printf("   |     \n");
    printf("___|___  \n");
  } else if (misses == 3) {
    printf("   _______\n");
    printf("   |/    |\n");
    printf("   |/    O\n");
    printf("   |    /| \n");
    printf("   |        \n");
    printf("   |     \n");
    printf("___|___  \n");
  } else if (misses == 4) {
    printf("   _______\n");
    printf("   |/    |\n");
    printf("   |/    O\n");
    printf("   |    /|\\ \n");
    printf("   |        \n");
    printf("   |     \n");
    printf("___|___  \n");
  } else if (misses == 5) {
    printf("   _______\n");
    printf("   |/    |\n");
    printf("   |/    O\n");
    printf("   |    /|\\ \n");
    printf("   |     |  \n");
    printf("   |    /    \n");
    printf("___|___  \n");
  } 
  else if (misses == 6) {
    printf("   _______\n");
    printf("   |/    |\n");
    printf("   |/    O\n");
    printf("   |    /|\\ \n");
    printf("   |     |  \n");
    printf("   |    / \\   \n");
    printf("___|___  \n");
  }
}
//Made By Viktor Bojoski
