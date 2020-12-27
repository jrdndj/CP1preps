// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that executes the structure depening on the dimension
#include <stdio.h>

int main() { 
    // declare a varible
    int dSize;
    
    // interactive input (aks the user for the length of the variable)
    printf("\n Please, insert dimenstion: ");
    scanf("%d", &dSize);
    
    // use for loop to execute the sturucture
    for (int dRow=1; dRow<=dSize; dRow++) {
        // print blank space
        for (int dCol=1; dCol<=dRow; dCol++) {
            printf(" ");
        } // end for loop (dCol)
        // print stars
        for (int dStar=dRow; dStar<=dSize; dStar++) {
            printf("*");
        } // end for loop (dStar)
        printf("\n");
    } // end for loop (dRow)
  
    printf("\n Thank you for using this program :)");
    
    return 0;
} // end main