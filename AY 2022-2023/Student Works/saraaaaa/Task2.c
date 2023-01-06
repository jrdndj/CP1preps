#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void showHangman(int);

int main()
{

  srand(time(NULL));  /* With this we make the random number different each time we execute the program */
  char PossibleWords[][16] = {
    "koper",
    "java",
    "drama",
    "crisis",
    "titovtrg",
    "hungry"
  };

  int RandomWord = rand() % 6;  /* We divide by 6 to get a number between 0 to 5 so it selects the word */
  int NumberOfLives = 5;
  int CorrectAnswers = 0;
  int OldCorrectAnswer = 0;

  int LengthOfWord = strlen(PossibleWords[RandomWord]);

  int LetterGuessed[7] = { 0, 0, 0, 0, 0, 0, 0 }; /*These will be 1 when the participant selects right word */

  int LoopIndex = 0;
  int quit = 0;

  char guess[16]; /* User imput */
  char LetterEntered;
  showHangman(NumberOfLives);
  while (CorrectAnswers < LengthOfWord)
    {

      printf ("\nWelcome to HANGMAN!!!!\nHangman Word:");
      for (LoopIndex = 0; LoopIndex < LengthOfWord; LoopIndex++)
        {
          if (LetterGuessed[LoopIndex] == 1)
            {
	      printf ("%c", PossibleWords[RandomWord][LoopIndex]);
            }
	  else
	    {
	      printf ("_ ");
	    }
        }

      printf ("\n");

      printf ("Number of correct letters so far: %d\n", CorrectAnswers);
      printf ("\nTry a letter:");
      fgets (guess, 10, stdin); /*It reads a line from the stream and stores it into the string pointed to by guess*/

      if (strncmp(guess, "quit", 4) == 0)
	{
	  quit = 1; /* This will work as a flag when decide to quit the game */
	  break;
	}
    
      LetterEntered = guess[0];

      OldCorrectAnswer = CorrectAnswers; /* This is used to keep the number of lives moving */

      for (LoopIndex = 0; LoopIndex < LengthOfWord; LoopIndex++)
	{
	  if (LetterGuessed[LoopIndex] == 1)
	    {
	      continue;
	    }

	  if (LetterEntered == PossibleWords[RandomWord][LoopIndex])
	    {
	      LetterGuessed[LoopIndex] = 1;
	      CorrectAnswers++;
	    }	    
	}

      if (OldCorrectAnswer == CorrectAnswers)
	{
	  NumberOfLives--;
    showHangman(NumberOfLives);
	  printf ("\nNope. Wrong answer. Keep trying!\n");
	  if (NumberOfLives == 0)
	    {
	      break;
	    }	
	}
      else
	{
	  printf ("\nYES! Right answer. Keep going!\n");
	}
    }

  if (quit == 1)
  {
    printf ("\nYou decided this was too much for you\n");
  }
  else if (NumberOfLives == 0)
    {
      printf ("\nAnd by the way... GAME OVER LOSER! The right answer was: %s\n", PossibleWords[RandomWord]);
    }
  else
    {
      printf ("\nYES!! You just won! Congratulations!\n");
    }
  return (0);
}//end of main()


void showHangman(int CorrectAnswers)                            /*This function show the hangman after each wrong try*/
 {

     switch(CorrectAnswers)
     {

     case 0:
         system("cls");
    printf("\n\t||===== ");
    printf("\n\t||    | ");
    printf("\n\t||   %cO/",'\\');
    printf("\n\t||    | ");
    printf("\n\t||   / %c",'\\');
    printf("\n\t||      ");
    break;
     case 1:
         system("cls");
    printf("\n\t||===== ");
    printf("\n\t||    | ");
    printf("\n\t||   %cO/",'\\');
    printf("\n\t||    | ");
    printf("\n\t||     %c",'\\');
    printf("\n\t||      ");
    break;
     case 2:
         system("cls");
    printf("\n\t||===== ");
    printf("\n\t||    | ");
    printf("\n\t||   %cO/",'\\');
    printf("\n\t||    | ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    break;
     case 3:
         system("cls");
    printf("\n\t||===== ");
    printf("\n\t||    | ");
    printf("\n\t||   %cO/",'\\');
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    break;
     case 4:
         system("cls");
    printf("\n\t||===== ");
    printf("\n\t||    | ");
    printf("\n\t||   %cO ",'\\');
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    break;
     case 5:
         system("cls");
    printf("\n\t||===== ");
    printf("\n\t||    | ");
    printf("\n\t||    O ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    break;
      }//end of switch-case
      return;
 }
