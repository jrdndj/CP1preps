//This code was written by Marko Taleski :P
//C code for average of positive numbers inputed by the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring the variables
    int dN=0;
    int dSumOfPositiveN=0;
    float fAverage=0;
    int dCounter=0;
    //Ask the user for to input a number
    printf("Please input a number.\n");

    //I use a while loop so the user can input an arbitrary number of numbers
    while(scanf("%d", &dN)) {
        //I use an if statement to check the input
        if( dN < 0 ) {
            printf("\nPlease input a positive number.\n");
        }//end of if
        else if ( dN == 0 ) {
            break;
        }//end of else if
        else {
            dCounter++;
            dSumOfPositiveN+=dN;
            //Ask the user for to input a number
            printf("Please input a number.\n");
        }//end of else
    }// end of while

    //I use an if statement here to check if the are any positive numbers
    if( dCounter == 0 ) {
        printf("\nThere is no average.\n");
    }//end of if statement
    else {
        fAverage = (float)dSumOfPositiveN / (float)dCounter;
        printf("\nThe average of all the positive numbers is %f.\n", fAverage);
    }//end of else
    return 0;
}
