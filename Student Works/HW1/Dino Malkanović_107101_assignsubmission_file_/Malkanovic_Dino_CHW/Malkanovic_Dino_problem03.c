#include<stdio.h>

int main ()

{

    int dNumber=1; //declaring variables
    int dCount=0;
    int dSum=0; 
    float fAvg=0;

    while (dNumber!=0) { //while loop asking user for input
        printf("Enter a positive integer: ");
        scanf("%d", &dNumber);
        if (dNumber>0) { //if the number is positive it will increment the counter and sum every positive input
        dSum+=dNumber;
        dCount++; }
        else if (dNumber<0) { //if number is less than zero prints ERROR
            printf("ERROR\n"); }
    } //end while

    if (dSum!=0) { 
        fAvg=dSum/dCount; //formula for calculating average
        printf("Average is: %.2f", fAvg); } //printing results
    else { printf("NO AVERAGE"); } //if there are no elements in array prints NO AVERAGE

    return 0;

}