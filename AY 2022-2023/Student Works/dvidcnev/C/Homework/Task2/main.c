#include <stdio.h>
#include <string.h> //for strings
#include <stdbool.h> //for bools
#include <stdlib.h> //for rand() function
#include <time.h> //for srand(time()) function

char inputchar () { //to input a char and check if it's only one character
    char str[128];
    bool correctinput = false;
    while ( correctinput == false ) { // a loop which repeats until we get a string ( character ) that is less than 2
        printf("\nInput a letter: ");
        scanf("%s", str);
        if ( strlen(str) < 2 ) { //if the length is less than one
            char special = str[0];
            correctinput=true; //we could also use break here
            return special; // returns the character
        }
        else { //if the length is more than 1
            printf("\nError input, please enter only one character. Try again.");
            continue; //continues the while loop
        }
    }
}

void printBody(int mistakes, char* body) { //print the body of the stick figure
    switch(mistakes) {

        //measure by the amount of mistakes and draw the figure's body parts
        case 6: body[5] = '\\'; break; 
        case 5: body[4] = '/'; break;
        case 4: body[3] = '\\'; break;
        case 3: body[2] = '|'; break;
        case 2: body[1] = '/'; break;
        // case 1: body[0] = 1; break;
        case 1: body[0] = 'O'; break;
        default: break;

    }

    printf("\t _________\n"
           "\t|         |\n"
           "\t|         %c\n"
           "\t|        %c%c%c\n"
           "\t|        %c %c\n"
           "\t|             \n"
           "\t|             ", body[0], body[1], body[2],
           body[3], body[4], body[5]);
}


int main() {

    //array of words
    const char words[23][10] = { "sausage", "pineapple", "jeff", "horse", "cockroach", "Tokyo", "Levi", "Italy", "house", "pistol", "water", "Jordan", "car", "sodium"
    , "karate", "slipper", "Ohio", "lemon", "toys", "glove", " lightning", "spider", "Russ" }; 

    srand(time(0)); //for rand() function

    const int upper = 23, lower = 0; //the limits for the amount of words in the char words[][] 

    int randomnum = ( rand() % upper ) + lower; //generating a random number ( random word ) from the array of words
    int n = strlen(words[randomnum]); //length of the chosen random word

    int mistakes = 0; //0 mistakes as of beggining the program

    char word[n]; //create another char with the length of the random word
    strcpy(word, words[randomnum]); //copy the random word into the empty char 

    bool win = false, end=false; 

    char character, answer[n], body[6]; 

    memset(body, ' ', 6); //set body to be empty

    strcpy(answer, word); //copy the word into answer[n] ( same length )

    for (int i=0; i<n; i++) { //make our second copied random word into underscored lines
        answer[i] = '_';
    }

    printf("\nWelcome to hangman!");
    printf("\nYou may only make up to 6 mistakes.");
    printf("\nThe words are randomly chosen.");
    printf("\nGood luck!\n");




    do {
        bool guessedright=false;
        int count = 0;
        printf("\nWord: ");
        for ( int i=0; i<n; i++) { //printing our word which is _ with spaces inbetween
            printf("%c ", answer[i]);
        }
        character=inputchar(); 

        for (int i=0; i<n; i++) { //checking if the character fits one of our letters in the word
            if ( character == word[i] ) { //if yes
                if ( character == answer[i] ) { //if already entered
                    printf("\nYou've already entered this character.\n");
                    guessedright=true;
                    break;
                }
                else { //if the letter is not it
                    answer[i] = word[i];
                    guessedright=true;
                }
            }
        }

        if ( !guessedright ) { //if we didn't guess right
            printf("\nWrong guess!\n");
            mistakes++;
            printBody(mistakes, body);
            printf("\n");
        }

        for (int i=0; i<n; i++) { //count how many _ there are to the word
            if ( answer[i] == '_' ) {
                count++;
            } 
        }
        if ( count == 0 ) { //if there are no _ ( which means the word has been guessed )
            end=true;
            win=true;
        }
        else if ( mistakes == 6 ) { //if there are more than 5 mistakes
            end=true;
        }


    } while ( !end ); //end of while

    if ( win ) { //if we have guessed the correct word
        printf("\nCorrect! The word is %s.", answer);
    }
    else { //if we have more than 5 mistakes
        printf("\n\nYou lost! The word was %s.", word);
    }

    return 0;
}