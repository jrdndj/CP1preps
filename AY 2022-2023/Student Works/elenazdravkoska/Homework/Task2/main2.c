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

        if(strlen(words[wordIndex]) == (*ptrCorrectlyGuessedCharactersIndex))
            break;
    }

    if(penaltyCount == 6)
        printf("You lost the game");
    else
        printf("You won the game");
    return 0;
}
