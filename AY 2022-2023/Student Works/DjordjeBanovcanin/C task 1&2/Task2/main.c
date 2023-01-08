#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


const int maxGuess = 6;

//selecting random word
char* wordChoice(){
    char* words[] = {"hangman", "apple", "banana", "orange", "grapes", "shus", "pickle", "sponge", "bobb", "baddragon"};
    int randomIndex = rand() % 10;
    return words[randomIndex];
}

int main(){
    srand(time(NULL));
    char input;
    char *randWord = wordChoice();
    int wordLength = strlen(randWord);
    int wrong = 0;
    int count;
    char guess[wordLength];//gets the size of the random word

    //fills the whole word with "_"
    for(count = 0; count < wordLength; count++){
        guess[count] = '_';
    }

    guess[wordLength] = '\0';
    //main while loop that will search the word for your inputs
    while(wrong < maxGuess){
        printf("Current guess: %s\n", guess);
        printf("Enter a letter: ");
        scanf(" %c", &input);
        getchar();

        int correctGuess = 0;

        // for will iterate through letters of the word
        for(count = 0; count < wordLength; count++){
            // this will check if the letter is contained in the word and store it
            if (randWord[count] == input) {
                printf("Correct guess!\n");
                guess[count] = input;
                correctGuess = 1;
            }
        }
        // you guessed the wrong letter if for finished, since it passes the whole word
        // In that case while will loop again
        if(correctGuess == 0){
            wrong++;
            printf("Incorrect guess! %d/%d remaining\n", maxGuess - wrong, maxGuess);
        }
        //should check for wrong inputs but doesn't work for some reason
        if(!(input >= 97 && input <= 122) || !(input >= 65 && input <= 90) || (input != 95) || (input != 92) || (input != 48)){
            printf("Invalid input");
        }
        //compares the finished words
        if (strcmp(randWord, guess) == 0) {
            printf("Congratulations, you won! The word was %s\n", randWord);
            return;
        }
    }
        printf("You lost! The word was %s\n", randWord);

    return 0;
}
