#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#define KEY_UP 72
#define KEY_DOWN 80

void help()
{
    system("cls");
    char c2;
    while(1)
    {
        printf("//game guidelines\\\\n\n");
        printf("To play this game input coordinates in following formats:"
               "\n1 3  \nor 1\n   3\nFor first row 3rd column\n(X,Y), X is the row and Y is the column\n"
              "\nin Player vs Player mode turns are fixed 1st player is always X and second player is O\n"
               "\nWhile in Player vs Computer mode the player is always X"
               "\nYour goal is to get 3 Symbols in a row for a victory or block opponent from achieving victory to Tie the game"
               "\n\nTo exit this menu press space");
       c2 = getch();
       if(c2 == 32)
            break;
    }
    return 0;
}
int menu()
{
    int n = 1;
    char c2;
    while(1)
    {
        system("cls");
        printf("Use UP and DOWN arrows to go up and down and SPACE to select\n\n");
        printf("\n\nPlayer vs Player");
        if (n == 1)
            printf(" <---");
        printf("\n\nPlayer vs Computer");
        if (n == 2)
            printf(" <---");
        printf("\n\nHelp");
        if (n == 3)
            printf(" <---");
        printf("\n\nQuit");
        if (n == 4)
            printf(" <---");
        c2 = getch();
        if(c2 == 80)
            n++;
        else if(c2 == 72)
            n--;
        else if (c2 == 32)
        {
            if (n == 4)
                exit(0);
            else if (n == 3)
            {
                help();
            }
            else
                return n;
        }
        if (n == 5)
            n = 1;
        if (n == 0)
            n = 4;
    }
    return n;
}

#endif // MENU_H_INCLUDED
