#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void printHangman(int penaltyCount) {
    char *body[6] = { " ", " ", " ", " ", " ", " "};
    switch(penaltyCount) {
        case 6: body[0]="O"; body[1]="/"; body[2]="|"; body[3]="\\"; body[4]="/"; body[5]="\\"; break;
        case 5: body[0]="O"; body[1]="/"; body[2]="|"; body[3]="\\"; body[4]="/"; break;
        case 4: body[0]="O"; body[1]="/"; body[2]="|"; body[3]="\\"; break;
        case 3: body[0]="O"; body[1]="/"; body[2]="|"; break;
        case 2: body[0]="O"; body[1]="/"; break;
        case 1: body[0]="O"; break;
        default: break;

    }
    printf("\t __________\n"
           "\t|         |\n"
           "\t|         %s\n"
           "\t|       %s %s %s\n"
           "\t|        %s %s\n"
           "\t|             \n"
           "\t|             \n", body[0], body[1], body[2],
           body[3], body[4], body[5]);
}

void printEntriesForHangmanGame(char *word, char correctlyGuessedCharacters[], int *ptrTotalCharactersGuessed) {
    for(int i = 0 ; i < strlen(word); ++i) {
        bool characterGuessed = true;
        for(int j = 0 ; j < *ptrTotalCharactersGuessed ; ++j) {
            if(correctlyGuessedCharacters[j] == word[i]) {
                printf("%c ", word[i]);
                characterGuessed = false;
                break;
            }
        }
        if(characterGuessed)
            printf("___ ");
    }
}

bool checkIfGivenCharacterIsInWord(char guessedCharacter, char *word, char *correctlyGuessedCharacters, int *ptrCorrectlyGuessedCharactersIndex) {
    bool result = false;
    for(int i = 0 ; i < strlen(word) ; ++i) {
        if(guessedCharacter == word[i]){
            correctlyGuessedCharacters[(*ptrCorrectlyGuessedCharactersIndex)] = guessedCharacter;
            (*ptrCorrectlyGuessedCharactersIndex)++;
            result = true;
        }
    }
    return result;
}

int main () {
    int penaltyCount = 0;
    int *ptrPenaltyCount = &penaltyCount;
    char *words[10] = { "hello", "world", "Wednesday", "Terminator",
                        "Phone", "Apple", "Television", "Flutter", "React", "JavaScript"};
    int wordIndex = ((int)rand()) % 10;
    char correctlyGuessedCharacters[strlen(words[wordIndex])];
    int currentCorrectlyGuessedCharactersIndex = 0;
    int *ptrCorrectlyGuessedCharactersIndex = &currentCorrectlyGuessedCharactersIndex;
    char input[100];

    while(penaltyCount < 6) {
        printHangman(penaltyCount);
        printf("\n\n\n");
        printEntriesForHangmanGame(words[wordIndex], correctlyGuessedCharacters, ptrCorrectlyGuessedCharactersIndex);

        printf("\nPlease enter a character: \n");
        scanf("%s", input);

        while(strlen(input) != 1)
            (*ptrPenaltyCount)++;
        bool result = checkIfGivenCharacterIsInWord(input[0], words[wordIndex], correctlyGuessedCharacters, ptrCorrectlyGuessedCharactersIndex);

        if(!result)
            (*ptrPenaltyCount)++;

        if(strlen(words[wordIndex]) == (*ptrCorrectlyGuessedCharactersIndex))
            break;
    }

    if(penaltyCount == 6)
        printf("You lost the game");
    else
        printf("You won the game");
    return 0;
}
