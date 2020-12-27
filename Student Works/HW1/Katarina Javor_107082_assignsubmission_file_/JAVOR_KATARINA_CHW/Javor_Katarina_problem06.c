// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that prints the smallest number of array
#include <stdio.h>

int main() {
    // declare varibles
    char sArray[10];
    int dMin;

    // interactive input (ask the user for the elements of array)
    for (int dNumber = 0; dNumber < 10; dNumber++) {
        printf("\n Insert 10 elements: ");
        scanf("%d", &sArray[dNumber]);
    } // end for loop

    // check for the smallest number
    dMin = sArray[0];
    for (int dNumber = 0; dNumber < 10; dNumber++) {
        // check if element on index dNumber is lower then element o 0th index, if true use this as new smallest element
        if (dMin > sArray[dNumber]) {
            dMin = sArray[dNumber];
        } // end if
    } // end for loop (dNumber)
    printf("\n The smallest number in array id %d", dMin);

    printf("\n Thank you for using this program :)");

    return 0;
} // end main