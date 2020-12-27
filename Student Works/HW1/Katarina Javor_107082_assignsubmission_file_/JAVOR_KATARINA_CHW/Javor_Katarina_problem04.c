// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that executes the prime numbers 
#include <stdio.h>

int main() { 
    // declare varibles
    int dInput, dPrime;
    
    // interactive input (ask the user for some positive integer)
    printf("\n Insert positive integer: ");
    scanf("%d", &dInput);
    
    // check if dInput is negative
    if (dInput < 0) {
        printf("\n Please, enter positive integer.Try again.");
        return 1;
    } // end if
    
    printf("\n Prime numbers from 1 to %d are: ", dInput);
    // use for loop to go trough the sequence form 1 to dInput
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        dPrime=0;
        for (int dNumber2=2; dNumber2<=dNumber/2; dNumber2++){
        if (dNumber % dNumber2 == 0) {
            dPrime=1;
            break;
        } // end if
        } // end for loop (dNumber2)
        // print prime numbers
        if (dPrime == 0) {
            printf(" %d \n", dNumber);
        } // end if
    } // end for loop (dNumber)
    
    printf("\n Thank you for using this program :)");
    
    return 0;
}