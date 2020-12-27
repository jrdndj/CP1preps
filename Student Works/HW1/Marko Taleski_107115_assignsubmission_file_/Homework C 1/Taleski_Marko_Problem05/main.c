//This code was written by Marko Taleski :P
//C code for prime numbers up to the input of the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int dN=0;

    printf("\nPlease enter a number.\n");
    scanf("%d", &dN);

    //For loop so the program can print the stars from 1 star to 5 stars
    for(int i=1; i<= dN; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }//end of inner for
        printf("\n");
    }//end of first for

    //For loop so the program can print stars from 5 stars to 1 star
    for(int i=1; i<= dN -1 ; i++) {
        for(int j=1; j<=dN -i; j++) {
            printf("*");
        }//end of inner for
        printf("\n");
    }//end of outer for

    return 0;
}
