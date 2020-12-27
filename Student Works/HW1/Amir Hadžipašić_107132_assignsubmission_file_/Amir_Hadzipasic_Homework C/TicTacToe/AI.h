#ifndef AI_H_INCLUDED
#define AI_H_INCLUDED

int checker(int game[3][3]){
    int i;
    if (game[0][0] == game[1][1] && game[1][1] == game[2][2])
        if (game[0][0] != 2)
                return game[0][0];
    if (game[0][2] == game[1][1] && game[1][1] == game[2][0])
        if (game[1][1] != 2)
                return game[1][1];
    for (i = 0; i < 3; i++)
        {
        if (game[i][0] == game[i][1]&& game[i][1] == game[i][2])
        {
            if (game[i][0] != 2)
                return game[i][0];
        }
        else if (game[0][i] == game[1][i] && game[2][i] == game[1][i])
            {
            if (game[0][i] != 2)
                return game[0][i];
            }
        }
    return 0;
}
int smaller (int x){
    if (x > 0 && x < 4)
        return 1;
    else
        printf("\nUser you didn't input good coordinates\n\n");
    return 0;
}

void declare(int n){
    if (n == -1)
        printf("Player O wins\n\n");
    else if (n == 1)
        printf("Player X wins\n\n");
    else
        printf("Game is tied\n\n");
    return;
}
int rowXY(int game[3][3], int p)
{
    int i,n=0;
    for (i = 0; i < 3; i++)
        if (game[p][i] == 2)
            n = (p+1)*10 + i + 1;
    return n;
}

int colXY(int game[3][3], int p){
    int i,n=0;
    for (i = 0; i < 3; i++)
        if (game[i][p] == 2)
            n = (i+1)*10+p+1;
    return n;
}
int diagXY(int game[3][3],int num)
{
    int i,n=0;
    if (num == 1)
    {
        for (i = 0; i < 3; i++)
            if (game[i][i] == 2)
                n = (i+1)*10+i+1;
    }
    else
    {
        for (i = 0; i < 3; i++)
            if (game[i][3-1-i] == 2)
                n = (i+1)*10 + 3-i;
    }
    return n;
}
int getMove(int game[3][3], int p)
{
    int i,j,row[3],col[3],diag = 0, sdiag = 0;
    if (p == 9)
        {
        if (game[1][1] == 1)
            return 31;
        else
            return 22;
        }
    else
    {
        for(i = 0; i < 3; i++)
        {
            col[i] = 0;
            row[i] = 0;
            for (j = 0; j < 3; j++)
            {
                row[i] += game[i][j];
                col[i] += game[j][i];
                 if (i == j)
                    diag += game[i][j];
                if ((i+j) == 2)
                    sdiag += game[i][j];
            }
        }
	    for (i = 0; i < 3; i++)
            {
             if (row[i] == 0)
                return rowXY(game,i);
            if (col[i] == 0)
                return colXY(game,i);
            }
            if (diag == 0)
                return diagXY(game,1);
            if (sdiag == 0)
                return diagXY(game,2);
             for (i = 0; i < 3; i++)
            {
            if (row[i] == 4)
                return rowXY(game,i);
            if (col[i] == 4)
                return colXY(game,i);
            }
            if (diag == 4)
                return diagXY(game,1);
            if (sdiag == 4)
                return diagXY(game,2);

         
             for (i = 0; i < 3; i++)
            {
             if (row[i] == 3)
                return rowXY(game,i);
             if (col[i] == 3)
                return colXY(game,i);

            }
            if (diag == 3)
                return diagXY(game,1);
             if (sdiag == 3)
                return diagXY(game,2);
             for (i = 0; i < 3; i++)
            {
             if (row[i] == 3)
                return rowXY(game,i);
             if (row[i] == 3)
                return colXY(game,i);

            }
            if (diag == 3)
                return diagXY(game,1);
             if (sdiag == 3)
                return diagXY(game,2);
             for (i = 0; i < 3; i++)
            {
             if (row[i] == 6)
                return rowXY(game,i);
             if (row[i] == 6)
                return colXY(game,i);
            }
            if (diag == 6)
                return diagXY(game,1);
             if (sdiag == 6)
                return diagXY(game,2);
               for (i = 0; i < 3; i++)
            {
             if (row[i] == 2)
                return rowXY(game,i);
             if (row[i] == 2)
                return colXY(game,i);
            }
            if (diag == 2)
                return diagXY(game,1);
             if (sdiag == 2)
                return diagXY(game,2);
        }
            return 0;
    }


#endif // AI_H_INCLUDED
