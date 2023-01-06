#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


/*

  Hangman Game

*/

int main(){

  bool userWon = false;

      //char that keeps track of user guess
  char userGuess[4];

  int wrongGuessCount = 0;

    //creating array for the randomly selected word from multidimensional array
  char selectedWord[9];

    //creating array for representing the randomly selected word in question marks
  char questionMarksWord[9];

   time_t t;

  /*
    Creating multidimensional array w/ 6 rows and 9 columns.
    This is done because there is 6 words and, while the largest
    word is 6 characters long, in case you want to add longer, words,
    it is set to 9. If more words are added, another row should
    be added each time and if the word is bigger than 9 characters,
    increase it to the length of the biggest word.

    Source: www.programiz.com/c-programming/c-multi-dimensional-arrays
  */

  char words[6][9] = {"abyss", "wyvern", "coal", 
  "fancy", "axiom", "nymph"};

  /*
    Pick random word in multidimensional array by picking
    a random index from 0 to 5 using rand() (and saving it to
    int variable). Then, setting the selectedWord variable
    to the word at the randomly picked index, and settng
    the questionMarksWord to as many question marks as the length
    of the selected word.

    Source: https://stackoverflow.com/questions/33380282/how-does-rand-work-in-c
        https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
  */

    //initializes random
    srand((unsigned) time(&t));
    int randIndex = (rand() % 6);

    for (int i = 0; i < strlen(words[randIndex]); ++i)
    {
      selectedWord[i] = words[randIndex][i];
      questionMarksWord[i] = '?';
    }

    //welcomes user to the game
    printf("Welcome to the Hangman Game!\n"
      "Best of luck!\n");

  /*

    Game Loop

  */

    //game loops until user guesses correctly or runs out of guesses
    while (!userWon && wrongGuessCount < 7){
      
      printf("\nTo guess, just type a lowercase letter!\n"
      "If you would like to give up, type 'quit'.\n"
      "You make 7 mistakes and you are hung!\n");

      //prints useful information for user and takes user guess
      printf("\nHangman Word: %s \n" "Wrong Guesses: %d \n", questionMarksWord, wrongGuessCount);
      
      //DRAW HANGMAN HERE

      printf("Guess: ");
      scanf("%s", userGuess);

      //somekind of check for wrong input
      //if (userGuess[0] >= 'a' && userGuess[0] <= 'z')
      //https://beginnersbook.com/2017/09/c-program-to-check-whether-a-character-is-an-alphabet-or-not/

      /*
        Uses strcmp() function to compare if user guess
        is equal to 'quit'. If yes, the function will return 0,
        (hence the check for if function return value is == 0)
        and lets the user know what the word was
        and terminates program.

        Source: https://www.programiz.com/c-programming/library-function/string.h/strcmp
      
      */
      if (strcmp(userGuess, "quit") == 0){
              printf("The word was %s.\n"
                "Better luck next time!",selectedWord);
              return 0;

          } else {
            

            //for loop that checks if letter is equal to any
            //letter in selected word


            //if word solved, user won and exit program

          } 

    }

    //if user runs out of guesses
    printf("\nYou ran out of guesses!\n"
                "The word was %s.\n"
                "Better luck next time!\n"
                ,selectedWord);

}//end of main
