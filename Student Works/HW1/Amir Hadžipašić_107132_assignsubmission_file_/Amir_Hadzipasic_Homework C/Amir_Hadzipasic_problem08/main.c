#include <stdio.h>
#include <stdlib.h>
/*
*Multiplication Table: A program that will ask the user to input an integer between 1 to 10 only. If
*the user inputs “2”, it will display the multiplication table values from 1 from 1 to 10 and the
*values of 2 from 1 to 10.
*/

//this one is actually clever one
int main()
{
    int n = 11; // n is guess what, number..
    int i,j; // those are counters
    int m = 1; // i'll use it as  helper in making a table
    printf("Input a number from 1 to 10\n");
    while (n > 10 || n < 1) // until number from 1 to 10 isn't inputted
        scanf("%d",&n); // input
    printf("  x  "); // prints x
    for (i = 1; i <= n; i++) // prints first row
    {
        printf ("  %d  ",i);
    }
    printf("\n");
    for (i = 0; i < 10; i++) // from 1 to 10, prints row
        {
         for (j = 0; j <= n; j++) // prints columns
        {
            if (j == 0) // if it's first column
                {
                if (m < 10) // if number is less than 10
                printf("  %d  ", m); // print in this form
                else
                    printf(" %d  ",m); // if number is 10 print this form
                }
            else if (m * j > 9) // if number is 2 digit
                printf(" %d  ", m * j); // print this form
            else
                printf("  %d  ",m * j); // if number is 1 digit print this form
        }
        m++;
        printf("\n");
        }
    return 0;
}
