//This code was written by Marko Taleski :P
//C code for a starts depending on the user input of a number

#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaring the variables
    int dN=0;
    int dNN=0;
    //Asking the user for an input of a number
    printf("\nPlease input a number.\n");
    scanf("%d", &dN);
    //Printing what number we have inputed
    printf("N=%d\n", dN);
    dNN = dN;
    //start of the for loop that will get us our starts
    for(int i=1; i<=dN; i++) {
        //for loop for the white spaces before the starts
        for(int j=1; j<i; j++) {
            printf(" ");
        }//end of first inner for loop

        //for loop for the starts
        for(int k=1; k<=dNN; k++) {
            printf("*");
        }//end of second inner for loop

        //decreasing the number so the number of starts also decreases
        dNN--;

        //printing a new line so we get that triangle shape
        printf("\n");
    }//end of the main for loop

    return 0;
}
