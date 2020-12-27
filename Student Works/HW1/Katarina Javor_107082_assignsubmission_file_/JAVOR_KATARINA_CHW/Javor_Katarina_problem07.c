// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that prints the user input 3 times
#include <stdio.h>

int main() { 
    // declare varibles
    int dInput;
    
    // interactive input (ask the user to input the number)
    // do this until user inputs 999
    while (dInput != 999) {
        printf("\n Insert a number with one or two digits: ");
        scanf("%d", &dInput);
        // check it input is less then 100 (has max 2 digits)
        if (dInput < 100) {
            printf("%d%d%d ", dInput, dInput, dInput); // print input 3 times
        } // end if
        else {
            printf("\n You have to insert number less then 100. Please, try again");
        } // end else
    } // end while 
    
    printf("\n Thank you for using this program :)");
    
    return 0;
} // end main