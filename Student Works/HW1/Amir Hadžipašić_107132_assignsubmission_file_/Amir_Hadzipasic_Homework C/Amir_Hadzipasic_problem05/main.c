#include <stdio.h>
#include <stdlib.h>
/*
*Allow the user to enter a number. This number will determine the maximum number of asterisks
*in a row. Print a left-based triangle that will have the user’s input number as the maximum
*number.
*/
int main()
{
     int i, j, stars; // i and j are counters, stars are maximum length of stars
    printf("Enter the number of rows\n");
    scanf("%d", &stars); // input
    for (i = 0; i < stars;i++) // loops from 0 to stars
    {
        for (j = 0; j < stars; j++) // loops from 0 to stars
            if (j < i+1) // if j is smaller than current i
                printf("*"); // prints star
        printf("\n"); // newline
    }
    for (i = stars-1; i > 0;i--) // loops from stars-1 to 0
    {
        for (j = 0; j < stars; j++) // loops from 0 to stars
            if (j < i) // if j is smaller than current i
                printf("*"); // prints star
        printf("\n"); // prints newline
    }
    return 0;
}
