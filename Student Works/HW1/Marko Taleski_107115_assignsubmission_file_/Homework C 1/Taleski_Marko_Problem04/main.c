//This code was written by Marko Taleski :P
//C code for prime numbers up to the input of the user

#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaring the variables
    int dN=0;
    int i,j;
    //Asking the user for a number
    printf("\nPlease input a number.\n");
    //
    scanf("%d", &dN);
    printf("\nAll the prime numbers between 1 and %d are: \n", dN);
    for(i=2; i<=dN; i++) {

        //First we must assume that the number we are currently on is prime
        int dCheck = 1;

        //For loop to check if the number is prime
        for(j=2; j<=i/2; j++) {
            //The j starts from 2 and goes to the half of the current number because a the biggest divider of a number is its half
            //With the if statement we check if the number we are currently on has a divider
            if(i%j == 0)
            {
                dCheck = 0;
                break;
            }
        }

        //If the variable dCheck did not change then its a prime number
        if(dCheck == 1)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
