#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "AI.h"
#include "menu.h"

void draw(int game[3][3]){
    printf("Player 1 (X)  -  Player 2 (O)\nPlease input coordinates example 1 1 for first row and first column\n\n");
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("| ");
            if(game[i][j] == 1)
                printf(" X |");
            else if(game[i][j] == -1)
                printf(" O |");
            else
                printf("   |");
        }
        printf("\n");
    }
    printf("\n");
    return;
}


void delay(int number_of_seconds){
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
void gameloop(int neal){
    int i,j;
    int p = 1,moveX,moveY,played = 1;
    int x,y,place = 9, play = 0;
    int game [3][3];
    for (i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            game[i][j] = 2;
    while (place > 0){
    j = 1;
    played = 1;
    system("cls");
    draw(game);
    while (j && play == 0)
    {

            if (p == 1)
                printf("Player X: write coordinates x y\n");
            else
            printf("Player O: write coordinates x y\n");
            while (j)
                {
            scanf("%d %d",&x,&y);
            if (smaller(x) && smaller(y))
            {
                if (game[x-1][y-1] == 2)
                {
                    game[x-1][y-1] = p;
                    j = 0;
                    if (p == 1 && neal == 1)
                        p = -1;
                    else if (p == -1 && neal == 1)
                        p = 1;
                }

                else
                    printf("\nThat space is occupied, try again\n\n");
                }

            }
             if (neal == 2)
                        {
                        //play = checker(game);
                        if (play == 0)
                            {
                            moveX = getMove(game,place);
                            moveY = moveX%10;
                            moveX /= 10;
                            if (game[moveX-1][moveY-1] == 2)
                            game[moveX-1][moveY-1] = -1;
                            place--;
                            }
                        }


    }

    play = checker(game);
    j = 1;
    place --;
    }
    system("cls");
    draw(game);
    declare(play);
    return;
}


int main()
{
    PlaySound(TEXT("Tic-tac-toe.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
    int n,m;
    printf("Welcome to my Tic Tac Toe game, My name is Amir and this is my game\n");
    printf("Created by Amir Hadzipasic");
    delay(3);
    m = menu();
    while(1)
        {
        system("cls");
        gameloop(m);
        printf("\n\nEnter 0 to exit to menu\n");
        scanf("%d",&n);
        if (n == 0)
        m = menu();
        }
    return 0;
}
