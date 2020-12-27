// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that executes the matrix 
#include <stdio.h>

int main() {
    // declare varibles
    int dElR, dElC;

    // interactive input (aks the user to enter values and elements)
    printf("\n Insert two postive number (less then 10): ");
    scanf("%d %d", &dElR, &dElC);

    // check if R and C are less then 10 and positive integers
    if (dElR > 9 || dElC > 9 || dElR < 0 || dElC < 0) {
        printf("Invalid input, please try again.");
    } // end if

    int dArray[dElR * dElC]; // R and C array combined
    // input elements of array R
    for (int dNumber = 1; dNumber <= dElR; dNumber++) {
        for (int dNumber2 = 1; dNumber2 <= dElC; dNumber2++) {
            printf("\n Insert elements of first matrix (%d x %d)", dElR, dElC);
            printf("\n Insert element e%d%d: ", dNumber, dNumber2);
            scanf("%d", dArray[dNumber]);
        } // end for loop (dNumber2)
    } // end for loop (dNumber)

    printf("\n Entered first matrix: \n");

    // input elements of array C
    for (int dNumber = 1; dNumber <= dElR; dNumber++) {
        for (int dNumber2 = 1; dNumber2 <= dElC; dNumber2++) {
            printf("\n Insert elements of second matrix (%d x %d)", dElC, dElR);
            printf("\n Insert elements e%d%d: ", dNumber, dNumber2);
            scanf("%d", dArray[dNumber]);
        } // end for loop (dNumber2)
    } // end for loop (dNumber)

    printf("\n Entered second matrix: \n");

    printf("\n Result of multiplication: \n");

    return 0;
} // end main