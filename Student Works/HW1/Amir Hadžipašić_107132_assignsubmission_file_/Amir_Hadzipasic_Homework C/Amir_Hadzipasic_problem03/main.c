#include <stdio.h>
#include <stdlib.h>
/*
*Write a program that asks the user to type a positive integer. When the user types a negative
*value the program writes ERROR and asks for another value. When the user types 0, that
*means that the last value has been typed and the program must write the average of the
*positive integers. If the number of typed values is zero the program writes 'NO AVERAGE'.
*/
int main()
{
    float avg = 0; // avg is average
    int n = 1,non = 0; //  n is number, non is number of numbers
    printf("Input as much positive integers as you want, input 0 for end\n");
    while (n != 0)
    {
        scanf("%d",&n);
        if (n < 0) // if number is negative
            printf("\nERROR\n");
        else
        {
            avg += n; // adding number to variable (sum)
            if (n != 0) // if number isn't 0
                non++; // increment number of numbers
        }
    }
    if (non > 0) // if only number inputed was 0
        printf("Average is %.2f",avg/(float)non);
    else
        printf("NO AVERAGE");
    return 0;
}
