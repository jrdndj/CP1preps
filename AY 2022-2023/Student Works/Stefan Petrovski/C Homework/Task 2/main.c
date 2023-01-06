#include <stdio.h> //include preprocess directive (standard input/output header). Used for functions scanf()/printf().
#include <stdlib.h> //include preprocess directive (standard library header). Used for memory allocation, random generator, string conversion.
#include <string.h> //include preprocess directive (string header). Used for function strcmp() in this code.
#include <time.h>//include preprocess directive that is responsible for generating random number each time the program compiles.

int MAX_NUM_MISTAKES = 6; //declare variable of type int that sets the allowance up to 6 mistakes made from the user before losing the game. 
char *words[] = {"koper", "famnit", "hangman", "apple", "bitola"}; //defining the array of words to guess from. 

int main(void){
    
    //General Game Introduction. 
    printf("Welcome to the game of Hangman!\n");
    printf("Here are some simple rules: \n");
    
    printf("\n");
    printf("1. There are 5 words that are given for you to guess.\n" 
           "Each time you run the program, new word should be in for the game.\n"); 
    printf("2. You have 6 attempts to guess the letter or word, before the game is over and you get hanged.\n"); 
    
    printf("\n");
    printf("That's it, enjoy it, and good luck!\n"); 
    printf("------------------------------------------\n");

    srand(time(0));//Defining the random generator.  
    char *word = words[rand() % (sizeof(words) / sizeof(words[0]))];  /*generates random word from the array of words each time
    we run the program. */

char guesses[26] = {0};  //defining array of all possible chars to select from the alphabet.
char guessed_letters[26] = {0}; //defining array of guessed letters. 
int number_of_guesses = 0;  //declare variable of type int for number of guesses made. 

/*initialising an array with series of underscores, one for every 
letter in the word.*/

char current_state[strlen(word) + 1];  //declare array of chars with size one larger than length of the word.
for(int i = 0; i < strlen(word); i++){  //loop that recaps over each character in the word.
    current_state[i] = '_';  //set the i-th element of the array to an underscore. 
}
current_state[strlen(word)] = '\0';  /*Sets the last element of the array 
to null character used to mark the end of the string. Without this at the end of the word it was showing '@'*/

/*Loop that asks the user to enter a letter, which is read from users input and cheks 
to see if it has already been used by the loop.*/

while(1){ //infinite loop that continues until being interrupted
    printf("Current word is : %s\n", current_state);  //print current state of word from the array. 
    printf("Guessed Letters : %s\n", guessed_letters);  //print the guessed letters stored in different array.
    printf("Enter a letter : \n");  //asks the user to enter a letter.
}
} //comment when putting two parts together delete this '}' bracket !!!. When trying it individually keep it in the code.

Explenation: 
With the already written code or this first part everything is declared properly but since i choose to do this program with while loop which in this
case and the amount of code i provided you for the first part, unfortunately everything it does is an infinite loop. I could not figure out where to divide the 
code elsewhere to compile when being divided so i chose this part. I know that it does not make sense to provide you with only loop, but this is mainly to 
try and stick to the at least 2 commitments rule. 
