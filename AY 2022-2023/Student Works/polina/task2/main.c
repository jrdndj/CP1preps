#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h> 
#include <stdbool.h> 
//every time random word of the list of words 
int ChooseRandomWord(int n) 
{ 
    return (rand() % n); 
} 
 
void DisplayWord(char word[], int len_word, bool char_guessed[]) 
{ 
    int i; 
    for(i=0; i < len_word; i++) 
    { 
        if(char_guessed[i] == true) 
        { 
            printf("%c ", word[i]); 
        } 
        else 
        { 
            printf("_ "); 
        } 
    } 
    printf("\n"); 
} 
//check the correctness of the input data
bool SanityCheck(char c) 
{ 
    if('a' <= c && c <= 'z') 
    { 
        return true; 
    } 
    else 
    { 
        return false; 
    } 
} 
 
void DisplayHangman(int incorrect_guesses) 
{ 
    printf("\nIncorrect guesses made: %d\n", incorrect_guesses); 
} 
 
int main() 
{ 
    int i; 
    srand(time(0));  //generate random number
    //words stores the dictionary of possible words for the game 
    char words[][20] = {"apple", "yummy", "rhythm", "wizard", "icebox", "avenue", "galaxy", "oxygen", "gossip", 
                        "calmness", "subway", "balance", "expansion", "observation", "appeasement", "substance", 
                        "breathtaking", "orange"}; 
    int lives = 7; 
    size_t n = sizeof(words)/sizeof(words[0]); //automatic count of words in an array of possible words
 
    printf("Choosing a word for the game...\n"); 
 
    int word = ChooseRandomWord(n); 
 
    printf("\nWord has been chosen. Game is ready!\n"); 
 
    int len_word = strlen(words[word]); 
    bool char_guessed[len_word]; 
 
    for(i=0; i < len_word; i++) 
    { 
        char_guessed[i]=false; 
    } 
    int incorrect_guesses = 0, characters_guessed = 0; 
    char guess; 
    bool incorrect_guess; 
 
    while(incorrect_guesses < lives && characters_guessed < len_word) 
    { 
        DisplayWord(words[word], len_word, char_guessed); 
        DisplayHangman(incorrect_guesses); 
        printf("\nPlease enter a character and make a Guess: "); 
        scanf("%c", &guess); 
        while((getchar()) != '\n'); 
        incorrect_guess = true; 
        if(SanityCheck(guess)) 
        { 
            for(i=0; i < len_word; i++) 
            { 
                if(!char_guessed[i] && words[word][i] == guess) 
                { 
                    char_guessed[i] = true; 
                    characters_guessed++; 
                    incorrect_guess = false; 
                } 
            } 
            if(incorrect_guess) 
            { 
                incorrect_guesses++; 
            } 
        } 
        else 
        { 
            printf("\nThe character entered was invalid. Please enter a lower case Latin character!\n"); 
        } 
    } 
    if(characters_guessed == len_word) 
    { 
        printf("\nCongratulations! You won the game."); 
    } 
    else if(incorrect_guesses == lives) 
    { 
        printf("\nSorry! You lost the game."); 
    } 
}
