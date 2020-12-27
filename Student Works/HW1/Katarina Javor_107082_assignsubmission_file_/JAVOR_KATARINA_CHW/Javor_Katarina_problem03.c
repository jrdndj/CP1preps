// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that calculates the average of input numbers
#include <stdio.h>

int main() { 
    // declare varibles
    int dInput;
    float fAverage;
    int dSum = 0;
    int dCounter = 0;
    
    printf("\n Hello user. Please insert here some numbers, to calculate the average. When you're finised press 0.");

    // ask for input until user presses 0
    while (dInput != 0) {
    // interactive input (ask the user for positive integer)
    printf("\n Insert positive integer: ");
    scanf("%d", &dInput);
    dSum += dInput;
    dCounter++;
    if (dInput < 0) {
        printf("\n Please, insert positive integer. Try again.");
        return 1;
    } // end if
    } // end while
    
    // calculate the average
    fAverage = dSum / dCounter;
    printf("\n The average is %f", fAverage);

    return 0;
}