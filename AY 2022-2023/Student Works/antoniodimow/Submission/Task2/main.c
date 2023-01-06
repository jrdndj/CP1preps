#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    //defining random to be on every run 
    srand(time(NULL));
    //random words found on internet defined in array
    char guessWords[][20] = {"lucky", "luxury", "subway", "galaxy", "wizard", "cycle", "whiskey", "vodka", "unknown", "funny", "microwave"};
    char hangman[][16] = {};
    //the hangman if you get wrong letter
    char *platform[] = {

        "      ===\n",

        "        |\n"
        "        |\n"
        "        |\n"
        "       ===\n",

        "   =====|\n"
        "        |\n"
        "        |\n"
        "        |\n"
        "       ===\n",

        "  |=====|\n"
        "        |\n"
        "        |\n"
        "        |\n"
        "       ===\n",

        "  |=====|\n"
        "  O     |\n"
        "        |\n"
        "        |\n"
        "       ===\n",

        "  |=====|\n"
        "  O     |\n"
        "  |     |\n"
        "        |\n"
        "       ===\n",

        "  |=====|\n"
        "  O     |\n"
        "  |-    |\n"
        "        |\n"
        "       ===\n",

        "  |=====|\n"
        "  O     |\n"
        " -|-    |\n"
        "        |\n"
        "       ===\n",

        "  |=====|\n"
        "  O     |\n"
        " -|-    |\n"
        "  |     |\n"
        "       ===\n",

        "   |=====|\n"
        "   O     |\n"
        "  -|-    |\n"
        "  //     |\n"
        "       ===\n"
    };
    //giving random number between 1 and 11 
    int randomNumber = rand() % 11;
    //number of Lives = 9  // changed to 10 
    int numberOfLives = 9;
    int numCorrect = 0;
    int oldCorrect = 0;
    //finding the length of the word 
    int lengthOfWord = strlen(guessWords[randomNumber]);
    int letterGuessed[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int quit = 0;
    int loopIndex = 0;
    char guess[16];
    char letterEntered;
    // this is the loop for the game 
    while (numCorrect < lengthOfWord)
    {
        printf("\nNew Turn..\nHangman word: ");
        for (loopIndex = 0; loopIndex < lengthOfWord; loopIndex++)
        {
            //if the letter was guessed print the letter on the correct place
            if (letterGuessed[loopIndex] == 1)
            {
                printf("%c", guessWords[randomNumber][loopIndex]);
            }
            //else print _
            else
            {
                printf("_");
            }
        }
        printf("\n");
        printf("Number correct so far:%d \n", numCorrect);
        printf("Enter a guess letter: ");
        fgets(guess, 16, stdin);

        if (strncmp(guess, "quit", 4) == 0)
        {
            quit = 1;
            break;
        }
        letterEntered = guess[0];

        printf("\nletterguessed:%c\n", letterEntered);

        oldCorrect = numCorrect;

        for (loopIndex = 0; loopIndex < lengthOfWord; loopIndex++)
        {

            if (letterGuessed[loopIndex] == 1)
            {
                continue;
            }

            if (letterEntered == guessWords[randomNumber][loopIndex])
            {
                letterGuessed[loopIndex] = 1;
                numCorrect++;
            }
        }

        if (oldCorrect == numCorrect)
        {
            //printing the hangman if you put wrong letter 
            switch (numberOfLives)
            {
            case 9:
                printf("\n\n%s\n", platform[0]);
                break;
            case 8:
                printf("\n\n%s\n", platform[1]);
                break;
            case 7:
                printf("\n\n%s\n", platform[2]);
                break;
            case 6:
                printf("\n\n%s\n", platform[3]);
                break;
            case 5:
                printf("\n\n%s\n", platform[4]);
                break;
            case 4:
                printf("\n\n%s\n", platform[5]);
                break;
            case 3:
                printf("\n\n%s\n", platform[6]);
                break;
            case 2:
                printf("\n\n%s\n", platform[7]);
                break;
            case 1:
                printf("\n\n%s\n", platform[8]);
                break;
            case 0:
                printf("\n\n%s\n", platform[9]);
                break;
            }
            //Decreasing the number of lives 
            numberOfLives--;
            printf("Sorry wrong guess.\n");
            if (numberOfLives == -1)
            {
                break;
            }
        }
        //if you guessed the letter the hangman stays the same.
        else if (numCorrect > oldCorrect)
        {
            printf("Correct guess.\n");
        }
    }
    if (quit == 1)
    {
        printf("\nThe user didn't know the word.He/She quits.\n");
    }
    else if (numberOfLives == -1)
    {
        printf("\nYou've lost the game.The word was: (%s)\n", guessWords[randomNumber]);
    }
    else if (numberOfLives > 0)
    {
        printf("\nYou won.\n");
    }

    return 0;
}
