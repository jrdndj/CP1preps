// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that counts the duplicate numbers of array
#include <stdio.h>

int main() { 
    // declare varibles
    int dSize;
    int dArray[dSize];
    int dCounter;

    // interactive input (ask the user to input dimension of array)
    printf("\n Insert dimension of array (5-25): ");
    scanf("%d", &dSize);
    if (dSize < 5 || dSize > 25) {
        printf("Inesrt dimension between 5-25. Please try again.");
    }
    // use for loop to insert elements of array
    for (int dNumber=0; dNumber<dSize; dNumber++) {
        printf("\n Insert elements of array: ");
        scanf("%d", &dArray[dNumber]);
    } // end for loop
    
    // go trough 2 for loops to check if there are some duplicates
    for (int dNum1=0; dNum1<dSize; dNum1++){
        for (int dNum2=dNum1+1; dNum2<dSize; dNum2++) {
            if (dArray[dNum1] == dArray[dNum2]) {
                dCounter++;
            } // end if
        } // end for loop (dNum2)
    } // end for loop (dNum1)
    printf("\n The number of duplicates is %d", dCounter);
    
    return 0;
} // end main