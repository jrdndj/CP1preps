#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
    int i,health = 5, found,foundWords=0,done=0;
    char words [4] [15] = {"bottle", "apple", "garbage", "alexander"}, randWord[15],letter;
    srand(time(0));
    int randomNum = rand() % 4;
    strcpy(randWord, words[randomNum]);
    int wordLength = strlen(randWord);
    char gameWord[(wordLength*2)];

    // Convert given word to lowercase
    for(i=0;i<wordLength;i++){
        randWord[i]=tolower(randWord[i]);
    }

    //Create string with dashes representing the letters of the word that need to be quessed
    for (i=0;i<wordLength*2;i++){
        if(i%2==0){
            gameWord[i]='_';
        }
        else if(i==(wordLength*2)-1){
            gameWord[i]='\0';
        }
        else{
            gameWord[i]=' ';
        }
    }
    printf("Welcome to the Hangman game\n");
    printf("%s\n",gameWord);
    printf("Health: %d\n", health);
    printf("Enter any letter to begin\n");
    while (health>0 && done==0){
        char *alreadyEntered;
        printf("Letter: ");
        scanf(" %c", &letter);
        letter=tolower(letter);
        alreadyEntered=strchr(gameWord,letter);
        if(alreadyEntered != NULL){
            printf("Letter already entered\n");
            continue;
        }
        //Check if the entered char is a letter, if not ask the user to enter a letter
        while(isalpha(letter)==0){
            printf("Please enter a letter\n");
            scanf(" %c", &letter);
        }
        found=0;
        //Check if the letter is contained in the word, and replace the dash with the letter if it is contained
        for (i=0;i<wordLength;i++){
            if(letter == randWord[i]){
                gameWord[i*2]=letter;
                found=1;
                foundWords++;
            }
        }
        //If the word doesnt contain the entered letter, lose 1 health
        if(found==0){
            health--;
        }
        printf("%s\n", gameWord);
        printf("Health: %d\n", health);
        //If the user loses all the health, print game over
        if(health==0){
            printf("Game Over\n");
        }
        //If the user entered all the letters contained, print a message
        if(foundWords==wordLength){
            printf("Congratulations, you have won\n");
            done=1;
        }
    }
    return 0;
}
