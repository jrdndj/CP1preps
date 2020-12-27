// Anastasija_Anteljevic_problem06.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    char sIntArray[10]; // the array in which ...
    int min = sIntArray[0]; // declaring the /\....
    for (int i = 0; i < 10; i++) { // a for loop
        printf("\n Enter your number:");
        scanf("%d", &sIntArray[1]);
    }//emter...
    for (int i = 0; i < 0; i++) {
        if (sIntArray[i] < min) { // checking if...
            min = sIntArray[i]; // if it is,... 
        }
    }
    printf("\n The smallest integer is: %d");
    return 0;
}
