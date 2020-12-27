#include<stdio.h>

int main () {
    // Declaring Variables 
    int dNumber; 
    int dCount=0;
    int dSum=0; 
    float fAvg=0; // Float for a decimal number

    while (dNumber!=0) { // While Input isn't 0 (Repeat Following)
        
    printf("Enter a positive integer: "); // User Info
        scanf("%d", &dNumber); // Scan Input 
        
        if (dNumber>0) { // If numbers are positive 
        dSum+=dNumber; // Sum of all numbers 
        dCount++; // Add 1 to Counter
    }
        else 
        if (dNumber<0) { // If inserting a Negative Number
            printf("ERROR"); // Print Out ERROR
        }
    }

    if (dSum!=0) { // If Sum isn't 0
        fAvg = dSum/dCount; // Formula for Average
        printf("Average is: %.2f", fAvg); // Print out Average (with decimal spaces)
    } 
    else { printf("NO AVERAGE"); // Else Print 
    }
   printf("\nThank You for using my Program!"); // Wholesome Comment
} 