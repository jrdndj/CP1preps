// Anastasija_Anteljevic_problem03.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void main()
{
    // We declare the variables 
    int n;
    // Now we ask the user to insert the value 'n'
    printf("\n Enter the value of n: ");
    scanf_s("%d", &n);
    //We are going to use the For loop
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}