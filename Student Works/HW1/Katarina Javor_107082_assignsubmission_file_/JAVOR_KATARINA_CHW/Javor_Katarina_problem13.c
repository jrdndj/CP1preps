// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that seperates even from odd numbers in array
#include <stdio.h>

int main() { 
    // declare varibles
    int dSize;
    int dArray[dSize];
    int dEven;
    int dOdd;

    // interactive input (ask the user to input dimension of array)
    printf("\n Insert dimension of array: ");
    scanf("%d", &dSize);
    // use for loop to inser elements of array
    for (int dNumber=0; dNumber<dSize; dNumber++) {
        printf("\n Insert elements of array: ");
        scanf("%d", &dArray[dNumber]);
    } // end for loop
    
    // make two arrays to store even and odd elements
    int dEvenArray[dSize];
    int dOddArray[dSize];
    for (int dNumber=0; dNumber<dSize; dNumber++) {
        if (dArray[dNumber] % 2 == 0) {
            dEvenArray[dNumber]=dArray[dNumber];
            printf("\n Even elements are %d", dEvenArray[dNumber]);
        } // end if 
        else {
            dOddArray[dNumber]=dArray[dNumber];
             printf("\n Odd elements are %d", dOddArray[dNumber]);
        } // end else
    } // end for loop
    
    
    return 0;
}