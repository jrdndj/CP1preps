#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
const char *alcohol[] = {"vodka", "rakija", "tequila", "whisky", "aperol", "jager", "brandy", "cognac"};

int main()
{
    time_t TIME;
    srand ((unsigned) time (&TIME));   //we need this if we want to have new random number every time
    
    int dRandom=rand()%8;
    char sWord[20];
    strcpy(sWord, alcohol[dRandom]);    //determining the value of the guess word from a random word from the alcohol array

    char sTest[strlen(sWord)];
    for(int i; i<strlen(sWord);i++){
        sTest[i]='_';                       //creating a variable with as many underscores as letters in the word
    }//end for

    int dMistakes=6, dCntr, dCntrRepeats;
    char cInput, sInputs[dMistakes+10];
    printf("Topic of words: Alcoholic beverages\n");

    while (1){
        
        dCntr=0;
        for (int i = 0; i < strlen(sTest); i++) {
            if(sTest[i]=='_')   dCntr++;
        }//endfor
        
        //break the while loop if all the letters of the word are guessed
        if(strcmp(sTest,sWord)==0 || dCntr==0){
            printf("\n--------------------------------------------------\n");
            printf("\n\t\t  YOU WON");
            printf("\n\t   The word was: %s", sWord);
            printf("\n\t\t Nice job :)");
            break;
        }//end if
        
        //break the while loop if the stick figure is fully drawn
        if(dMistakes==0){
            printf("\n--------------------------------------------------\n");
            printf("\n\t\t  YOU LOST");
            printf("\n\t    The word was: %s", sWord);
            printf("\n\t   Better luck next time :)");
            break;
        }//end if
        
        printf("\n--------------------------------------------------\n");
        printf("\nGuess this word: %s\n", sTest);
        printf("\nType your guess letter here: ");
        scanf(" %c", &cInput);
        cInput=tolower(cInput);         //if the user uses uppercase, converting the guess letter to lowercase
        
        //checking if the input is letter(correct input)
        if (isalpha(cInput) == 0){
            printf("\nPlease input letter!\n");
            continue;
        }//endif
        
        //checking if the guess letter was already typed in
        strncat(sInputs,&cInput,1);
        dCntrRepeats=0;
        for (int j=0; j<strlen(sInputs); j++){
            if(sInputs[j]==cInput){
                dCntrRepeats++;
                continue;
            }//end if
        }//end for
        
        //changing the underscore with the guessed letter(if it is correct)
        dCntr=0;
        for (int i=0; i<strlen(sWord); i++){
            if(sWord[i]==cInput){
                sTest[i]=cInput;
                dCntr++;
            }//end if
        }//end for
        
        //if the underscores variable wasn't modified
        if(dCntr==0){
            //see if that mistake was already typed in
            if(dCntrRepeats!=1){
                printf("\nYou have already entered this letter!\n");
            }
            //or just say that the guess is incorrect and change the number of mistakes
            else{
                printf("\nIncorrect guess. Try again.\n");
                dMistakes--;
            }
        }//end if
        
        //drawing the stick figure for the proper number of mistakes
        switch(dMistakes){
            case 6:
                printf("\n+---+\n"
                    "|   |\n"
                    "|    \n"
                    "|    \n"
                    "|      \n"
                "=========\n");
                break;
            case 5:
                printf("\n+---+\n"
                        "|   |\n"
                        "|   O \n"
                        "|    \n"
                        "|      \n"
                    "=========\n");
                break;
            case 4:
                printf("\n+---+\n"
                        "|   |\n"
                        "|   O \n"
                        "|   | \n"
                        "|      \n"
                    "=========\n");
                break;
            case 3:
                printf("\n+---+\n"
                        "|   |\n"
                        "|   O \n"
                        "|  /| \n"
                        "|      \n"
                    "=========\n");
                break;
            case 2:
                printf("\n+---+\n"
                            "|   |\n"
                            "|   O \n"
                            "|  /|\\ \n"
                            "|      \n"
                        "=========\n");
                    break;
            case 1:
                printf("\n+---+\n"
                            "|   |\n"
                            "|   O \n"
                            "|  /|\\ \n"
                            "|  /   \n"
                        "=========\n");
                    break;
            case 0:
                printf("\n+---+\n"
                            "|   |\n"
                            "|   O \n"
                            "|  /|\\ \n"
                            "|  / \\ \n"
                        "=========\n");
                    break;
                    
            default:
                printf("\n+---+\n"
                        "|   |\n"
                        "|    \n"
                        "|    \n"
                        "|      \n"
                    "=========\n");
                    break; 
        }
    }
    return 0;
}



