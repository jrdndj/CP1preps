#include <stdio.h>
#include <stdlib.h>
/*
Animal insurance: A program that prints the insurance fee to pay for a pet according to the
following rules:
*A dog that has been neutered costs $50.
*A dog that has not been neutered costs $80.
*A cat that has been neutered costs $40.
*A cat that has not been neutered costs $60.
*A bird or reptile costs nothing.
*Any other animal generates an error message.
*/
int main()
{
    char c; // character for input
    printf("Input a code for your animal\n");
    scanf("%c",&c); // getting the character
    switch(c) // checking the cases
    {
    case 'd': case 'D': // if it's d or D
        printf("A dog that has been neutered costs $50.\n" // 2 line printf
        "A dog that has not been neutered costs $80.");
        break;
    case 'c': case 'C': // if it's c or C
        printf("A cat that has been neutered costs $40.\n"
        "A cat that has not been neutered costs $60.");
        break;
    case 'b': case 'B': case 'r': case 'R': // if it's b or B or r or R
        printf("Costs nothing");
        break;
    default:
        printf("Error in the input sir");
        break;
    }
    return 0;
}
