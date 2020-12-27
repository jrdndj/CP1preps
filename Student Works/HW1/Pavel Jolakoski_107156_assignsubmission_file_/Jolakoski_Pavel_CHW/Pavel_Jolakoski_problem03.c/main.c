#include <stdio.h>
#include <stdlib.h>


/* Write a program that asks the user to type a positive integer. When the user types a negative
value the program writes ERROR and asks for another value. When the user types 0, that
means that the last value has been typed and the program must write the average of the
positive integers. If the number of typed values is zero the program writes 'NO AVERAGE'.
*/

int main()
{

    //declare variables
    int dN;
    int dSum=0;
    float fAvg=0;
    int dCount = 0;

    printf("Please enter a positive integer if you want to stop enter any alphabetic character or a 0: ");
    printf("\n");


    while(scanf("%d", &dN)){

        if(dN < 0){
            printf("Enter another value thats a positive integer: \n");

        }//endIf
        else if(dN == 0){
            break;
        }//endElseIf
        else{
            dCount++;
            dSum += dN;
        }//endElse
    }//endWhile

    if(dCount == 0){
        printf("NO AVEREGE.");
    }
    else{
    fAvg = dSum / dCount;

    printf("\nThe sum of all the numbers is: %d", dSum);
    printf("\nTheir average is: %f", fAvg);
    }


    return 0;
}
