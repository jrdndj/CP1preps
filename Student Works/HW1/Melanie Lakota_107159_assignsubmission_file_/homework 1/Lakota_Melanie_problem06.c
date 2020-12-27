/*
This code was written by Melanie Lakota on 14th December 2020.
*/ 
#include <stdio.h>

int main()
{
    
    //declare variables
    int dNumbers[10];
    int dMin;
    
    //ask user to give 10 numbers which will be evaluated 
    printf("\n Please enter 10 integers: \n");
    
    //save numbers into array
    for (int i=0; i<10; i++) {
         scanf("%d", &dNumbers[i]);
    }//endfor
    
    //declare the minimum is the number at the 0 spot for now
    dMin=dNumbers[0];
    
    //if any other number is smaller than the first one, we save that one into the dMin variable
    for (int i=0; i<10; i++) {
        if (dMin > dNumbers[i]) {
            dMin = dNumbers[i];
        }
    }
    
    //print the smallest number
    printf("\n The smallest number is: %d \n", dMin);

    return 0;
}
