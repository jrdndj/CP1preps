#include <stdio.h>
#include <stdlib.h>

/*
Write a program that asks the user to type an
integer N and that writes the number of prime
numbers lesser or equal to N.


*/


int main()
{
    //declare variables
    int dI, dJ, dN, dIsPrime;

    printf("Find prime numbers between 1 to: ");
    scanf("%d", &dN);

    printf("All prime numbers between 1 to %d are:\n", dN);

    //Find all Prime numbers between 1 to end
    for(dI=2; dI<=dN; dI++){
        // Assume that the current number is Prime
        dIsPrime = 1;

        //Check if the current number i is prime or not
        for(dJ=2; dJ<=dI/2; dJ++)
        {
            /*
              If i is divisible by any number other than 1 and self
              then it is not prime number
             */
            if(dI%dJ==0){
                dIsPrime = 0;
                break;
            }//endIf
        }

        //If the number is prime then print
        if(dIsPrime==1){
            printf("%d, ", dI);
        }//endIf
    }//endFor

    return 0;
}
