#include <stdio.h>
#include <stdlib.h>




int main()
{
//declaring the variables
      int R,C;
      int i,j;
    int matrix[10][20];


    //interactive input
    printf("Insert value for R (less than 10) : ");
    scanf("%d", &R);
    printf("Insert value for C (less than 10) : ");
    scanf("%d", &C);

    //input elements in the  first matrix
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("Enter element in [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    //print the first matrix
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

        //input elements in the second matrix
    for (i = 0; i < C; i++)
    {
        for (j = 0; j < R; j++)
        {
            printf("Enter element in [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    //print the second matrix
    for (i = 0; i < C; i++)
    {
        for (j = 0; j < R; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;


}//endmain
