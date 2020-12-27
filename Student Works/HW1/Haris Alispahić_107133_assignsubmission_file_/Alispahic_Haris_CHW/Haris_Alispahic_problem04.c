#include<stdio.h>

int main () {
    
    int dInput, dPrime; // Int Variable Declaration

    printf("Enter a number: "); // Comment
    scanf("%d", &dInput); // Scanning User Input
    printf("Prime Numbers less than or equal to %d are: ", dInput); //Print out The Prime Numbers

    for (int i=1 ; i<=dInput ; i++) { // For Loop until the User Input
        dPrime = 1; // Set value of Prime Number
        for (int j=2; j<i; j++) // For Loop to see if a number is divisible by 2 & higher numbers
            if (i%j == 0) // Checking argument 
            {
                dPrime = 0; // If the result is true, break 
                break;
            }
        if (dPrime) //If its a Prime number, print out
            printf(" %d ", i); // Statement that goes back into the Print
    }
    printf("\nThank You for using my Program!"); // Wholesome Comment
}