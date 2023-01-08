#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WRONG_GUESSES 6

const char *words[] = { "jordan", "practicum", "programming", "javaisbetter" };
const int numWords = sizeof(words) / sizeof(words[0]);

int main(){

    srand(time(NULL));  
    
    int wordIndex = rand() % numWords;  

    const char *word = words[wordIndex];  
    
    int wordLength = strlen(word);  
    
    char *guesses = malloc(wordLength + 1); 
    
    memset(guesses, '_', wordLength);  
    
    guesses[wordLength] = '\0';  
    
    int wrongGuesses = 0;

    while (wrongGuesses < MAX_WRONG_GUESSES){
        
        printf("Word: %s\n", guesses);
        printf("Incorrect guesses: %d\n", wrongGuesses);

    
        printf(" _______\n");
        printf(" |     |\n");
        printf(" |     %c\n", wrongGuesses > 0 ? 'O' : ' ');
        printf(" |    %c%c%c\n", wrongGuesses > 1 ? '|' : ' ', wrongGuesses > 2 ? '|' : ' ', wrongGuesses > 3 ? '|' : ' ');
        printf(" |    %c %c\n", wrongGuesses > 4 ? '\\' : ' ', wrongGuesses > 5 ? '/' : ' ');
        printf("_|_\n");

        printf("Enter a letter: ");

        char letter;
        scanf(" %c", &letter);


        int found = 0;
        for (int i = 0; i < wordLength; i++){
            if (word[i] == letter){
                guesses[i] = letter;
                found = 1;
            }
        }//end for
        if (!found){
            wrongGuesses++;
        }

        if (strcmp(word, guesses) == 0){
            printf("You win! The word was %s.\n", word);
            break;
        }
    }

    if (wrongGuesses == MAX_WRONG_GUESSES){
        printf("You lose! The word was %s.\n", word);
    }

    free(guesses);  
}
