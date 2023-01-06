#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    
    //array of possible words
    char words[][20] = {
        "paint",
        "hamburger",
        "music",
        "unicorn",
        "christmas",
        "prison",
        "pineapple",
        "beach",
        "program"
    };
    
    //to avoid getting the same random numbers
    time_t t;
    srand((unsigned) time(&t));
    
    //picking a random word from our array
    int random = rand() % 9;
    
    int lives = 6, correct = 0, xcorrect = 0;
    char guess[20]; //guess is a string, so that we can enter quit if we want to
    
    int length = strlen(words[random]);
    int result[length];
    
    //array that helps us keep track of the letters we already guessed
    //0 for the letters we didn't guess, later we change to 1 for the ones we guessed
    for(int i=0; i<length; i++){
        result[i] = 0;
    }
    
    //playing the game until we guessed all the letters
    while(correct < length){
        
        //leaving while loop if we lose
        if(lives == 0){
            break;
        }
        
        printf("\n");
        
        //printing spaces and guessed letters
        for(int i=0; i<length; i++){
           
           if(result[i] == 0){
               printf("_ ");
           } else {
               printf("%c ", words[random][i]);
           }

        }

        printf("\n\nLives: %d\nEnter your guess: ", lives);
        scanf(" %s", guess);
        char guess1 = guess[0]; //so it counts only the first character we enter
        
        xcorrect = correct;
        
        for(int i=0; i<length; i++){
            
            //leaving current for loop if the letter is already guessed
            if(result[i] == 1){
                continue;
            }
            
            //if the guessed letter is in the word
            if(guess1 == words[random][i]){
                result[i] = 1; //putting 1 in our array to know which letters we guessed
                correct++; //increasing the number of correct guesses
            }
            
        }
        
        //if we don't have new correctly guessed letter we lose a life
        if(xcorrect == correct){
            lives--;
        }
        
    }//end while
    
    printf("\n");
    
    //printing how much of the word they guessed at the end of the game
    for(int i=0; i<length; i++){
           
           if(result[i] == 0){
               printf("_ ");
           } else {
               printf("%c ", words[random][i]);
           }

    }
    
    //output if we lose
    if (lives == 0){
        printf("\n\nyou lost\nthe word was %s", words[random]);
    } else {
        printf("\nyou won, congrats!");
    }

    return 0;
    
}
