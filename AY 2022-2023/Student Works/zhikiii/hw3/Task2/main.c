#include <stdio.h>  //standard input/output library
#include <stdlib.h> //this
#include <time.h>   //and this stand for using randon number generator
#include <string.h>

// function to draw the hangman
void draw_hangman(char cBody[])
{
    printf(" |------\n"
           " |     |\n"
           " |    %c %c\n"
           " |    %c%c%c\n"
           " |    %c %c\n"
           "===\n",
           cBody[0], cBody[1], cBody[2], cBody[3], cBody[4], cBody[5], cBody[6]);
    // each body part is represented in seperate element in body array
}

// function to print array with spaces between letters
void print_blank_word(char sTempArr[])
{
    for (int j = 0; j < strlen(sTempArr); j++)
        printf("%c ", sTempArr[j]);
    printf("\n");
}

// function to check if the entered letter is found in the word we are guessing
int check_letter(char sRandomWord[], char cNewLetter, char sTempArr[])
{
    int dCount = 0, dFlag = 0;
    for (int i = 0; i < strlen(sRandomWord); i++)
    {
        // if the i-th letter from the random word is the same as the inputed word
        // we increase the counter
        if (sRandomWord[i] == cNewLetter)
        {
            sTempArr[i] = cNewLetter;
            dCount++;
        }
    }
    // if the counter is different than one, it means that we found at least one correct letter in the word
    if (dCount != 0)
        dFlag = 1;
    // we return the flag, 0 for false 1 for true
    return dFlag;
}

// function to asign values to body parts
void body_parts(int dHangman, char cBody[])
{
    // based on mistakes the user made, we asign characters in the array as body parts,
    // which are later printed
    if (dHangman == 1)
    {
        cBody[0] = '(';
        cBody[1] = ')';
    }
    else if (dHangman == 2)
        cBody[2] = '/';
    else if (dHangman == 3)
        cBody[3] = '|';
    else if (dHangman == 4)
        cBody[4] = '\\';
    else if (dHangman == 5)
        cBody[5] = '/';
    else if (dHangman == 6)
        cBody[6] = '\\';
}

// THIS FUNCTION NEEWS MORE WORK..:(
//  check if there are any more underscores in the array
//  int check_underscores(char sTempArr[])
//  {
//      int dCounter = 0;
//      int dFlag = 1;
//      for (int s = 0; s < strlen(sTempArr); s++)
//          // if there are any underscores we increase the counter
//          if (sTempArr[s] == '_')
//              dCounter++;
//      // if the counter is 0, that means all the letters are guessed
//      if (dCounter == 0)
//          dFlag == 0;
//      return dFlag;
//  }

int main()
{
    // NOTATION: I use pointers with chars, for one reason, which is not to define length of the char
    // I think this way it is better because we do not asign value which may never be used
    // this is something my teacher in high schoold told me, I am not 100% sure and am ok to accept if I am wrong

    srand(time(0));           // to return a random number in real time
    int dRandom = rand() % 5; // generate random number

    // list of possible words used in the game
    char *sWords[] = {"banana", "apple", "GOAT", "jordan", "zhiki", "famnit", "primorska"};

    char *sRandomWord = sWords[dRandom];
    // int len = strlen(sRandomWord); // taking the length of the eandom word

    char *sTempArr = malloc(strlen(sRandomWord) + 1); // this array represents the array that we need to fill
    for (int i = 0; sRandomWord[i] != '\0'; i++)      // asigning underscores for every element of the array
        sTempArr[i] = '_';

    char cNewLetter;  // the letter which the user is entering
    int dHangman = 0; // hangman stands for total mistakes (max 6)

    char cBody[7]; // parts of the body, used to draw the figure,
    // assigning blank spaces for each element of the body array
    // because the first time we draw the hangman it needs to be totally empty
    for (int i = 0; i < 7; i++)
        cBody[i] = ' ';

    // this also is to be continued..:(
    // char sWrongLetters[6] = ""; // remembering the mistaken letters

    // for the function i need to finish
    // int flag = 1;

    // here starts the game, it goes untill number of mistakes are less than 6
    while (dHangman <= 6)
    {
        // for the function I need to finish
        //  if (flag = 0)
        //      break;
        //  drawing the hangman using function
        draw_hangman(cBody);

        // to be continued line of code...
        //  printf("Missed letters: %s\n", sWrongLetters);

        // print the word with underscores, letters that are guessed will be displayed
        print_blank_word(sTempArr);

        // asking the user for input
        printf("\nEnter a letter: ");
        scanf(" %c", &cNewLetter);

        // checking if the user entered correct letter
        if (check_letter(sRandomWord, cNewLetter, sTempArr) != 1)
        {
            dHangman++;
            // reasigning values to body parts
            body_parts(dHangman, cBody);
        }

        int dCounter = 0; // counter that counts number of underscores
        for (int s = 0; s < strlen(sRandomWord); s++)
            if (sTempArr[s] == '_')
                dCounter++;
        if (dCounter == 0 || dHangman == 6)
            break;
    }

    // printing game over messages, drawing final hangman and displaying the correct word
    printf("\nGame over!\n");
    if (dHangman == 6)
        printf("You lost :(\n");
    else
        printf("You win :)\n");
    draw_hangman(cBody);
    printf("The correct word was: ");
    print_blank_word(sRandomWord);

    return 0;
}
