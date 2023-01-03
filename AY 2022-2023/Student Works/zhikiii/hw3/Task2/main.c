#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(0));
    int random = rand() % 5;

    char *sWords[] = {"banana", "apple", "GOAT", "jordan", "zhiki"};
    // printf("%s\n ", sWords[random]);

    char *sTempWord = sWords[random];
    int len = strlen(sTempWord);

    char *sTempArr = malloc(len + 1);
    for (int i = 0; sTempWord[i] != '\0'; i++)
        sTempArr[i] = '_';

    char cLetter;
    int dHangman = 0, dCount;
    char body[7];
    for (int i = 0; i < 7; i++)
        body[i] = ' ';

    char sWrongLetters[6]="";

    while (dHangman <= 6)
    {
        printf(" |------\n"
               " |     |\n"
               " |    %c %c\n"
               " |    %c%c%c\n"
               " |    %c %c\n"
               "===\n",
               body[0], body[1], body[2], body[3], body[4], body[5], body[6]);

        printf("Missed letters: %s\n", sWrongLetters);
        dCount = 0;

        for (int j = 0; j < len; j++)
            printf("%c ", sTempArr[j]);

        printf("\nEnter a letter: ");
        scanf(" %c", &cLetter);
        for (int i = 0; i < len; i++)
        {
            if (sTempWord[i] == cLetter)
            {
                sTempArr[i] = cLetter;
                dCount++;
            }
            //else
                //strcpy(sWrongLetters, cLetter);
        }
        if (dCount == 0)
            dHangman++;

        int dCo = 0;
        for (int s = 0; s < len; s++)
            if (sTempArr[s] == '_')
                dCo++;
        if (dHangman == 1)
        {
            body[0] = '(';
            body[1] = ')';
        }
        else if (dHangman == 2)
            body[2] = '/';
        else if (dHangman == 3)
            body[3] = '|';
        else if (dHangman == 4)
            body[4] = '\\';
        else if (dHangman == 5)
            body[5] = '/';
        else if (dHangman == 6)
            body[6] = '\\';
        if (dCo == 0 || dHangman == 6)
            break;
    }

    printf("\nGame over!\n");
    if(dHangman == 6)
        printf("You lost :(\n");
    else
        printf("You win :)\n");
    printf(" |------\n"
           " |     |\n"
           " |    %c %c\n"
           " |    %c%c%c\n"
           " |    %c %c\n"
           "===\n",
           body[0], body[1], body[2], body[3], body[4], body[5], body[6]);
    for (int m = 0; m < len; m++)
        printf("%c ", sTempArr[m]);

    return 0;
}
