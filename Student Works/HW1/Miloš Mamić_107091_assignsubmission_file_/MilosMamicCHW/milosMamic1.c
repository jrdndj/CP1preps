/*
Problem 1
*/

#include <stdio.h>

int main() {
    char a;

    printf("\nWhat animal would you like to insure? ");
    printf("\nIf the animal is neutered use the first capital letter");
    printf("\nIf the animal is not neureted use non capital letter");
    printf("\n We do dogs,cats and birds");
    scanf("%c", &a);

    switch (a)
    {
    case 'D':
        printf("\nA dog that has been neutered costs $50");
        break;

    case 'd':
        printf("\nA dog that has not been neutered costs $80.");
        break;

    case 'C':
        printf("\nA cat that has been neutered costs $40.");
        break;

    case 'c':
        printf("\nA cat that has not been neutered costs $60");
        break;

    case 'B':
        printf("\nA bird or reptile costs nothing");
        break;

        // operator doesn't match any case constant
    default:
        printf("\nError!");
    }

    return 0;
}