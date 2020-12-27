// Anastasija_Anteljevic_problem02.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows: *");
        scanf("%d", &rows);
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= 1; j++) {
            printf("|*");
        }
        printf("\n");
    }
    return 0;
}
