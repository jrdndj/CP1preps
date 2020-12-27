/*
Problem 2
*/

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for (i = 1; i <= rows; i++)
    {
        /* Print leading spaces */
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        /* Print star */
        for (j = i; j <= rows; j++)
        {
            printf("*");
        }

        /*Next line */
        printf("\n");
    }

    return 0;
}