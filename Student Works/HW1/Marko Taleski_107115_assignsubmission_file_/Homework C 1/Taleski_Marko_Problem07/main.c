//This code was written by Marko Taleski :P
//C code for printing an input 3 times

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int dN=0;
    //Asking the user for an input
    printf("\nPlease enter a one or two-digit number, the program will stop if you enter 999 or -999.\n");

    //I use a while loop so the user can input an arbitrary number of numbers
    while(scanf("%d", &dN)) {
        if ( dN == 999 || dN == -999 ) {
            break;
        }//end of if
        else if ( dN < 0 || dN > 99 ) {
            printf("\nPlease enter a positive one digit or two digit number.\n");
        }//end of else if
        else {
            printf("\n%d%d%d\n", dN,dN,dN);
            printf("\nPlease enter a one or two-digit number, the program will stop if you enter 999 or -999.\n");
        }//end of else
    }//end of while

    return 0;
}
