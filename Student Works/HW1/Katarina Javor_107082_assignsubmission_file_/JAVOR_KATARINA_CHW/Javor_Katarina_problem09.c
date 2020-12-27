// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that executes the calendar depending on users input
#include <stdio.h>

int main() {
    // declare varibles
    int dDay, dNumOfDays;

    // interactive input (ask the user to chose from which day the month should start and how many days does it have)
    printf("\n This is a special calendar. Please chose from which day the wanted mounth should start. \n 0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
    scanf("%d", &dDay);
    printf("\n How many days does the mounth have (28-31):");
    scanf("%d", &dNumOfDays);
    
    // check if the rigth number of days
    if (dNumOfDays < 28 || dNumOfDays > 31) {
        printf("\n Invalid number of days. Please try again.");
    } // end if
    else {
        printf("\n Sun   Mon   Tue   Wed   Thu   Fri   Sat \n");
        // Print appropriate spaces 
        for (int dNum=0; dNum<dNumOfDays; dNum++) {
            printf("     "); 
        // print numbers 1-dDays
        for (int dNum2=1; dNum2<=dNumOfDays; dNum2++) { 
            printf("%5d", dNum2); 
            if (dNum++ > 6) { 
                dNum = 0; 
                printf("\n"); 
            } // end if
        } // end for loop  
  
        if (dNum) 
            printf("\n"); 
  
        dNumOfDays=dNum; 
    } // end for loop
    
    } // end else
    
    return 0;
} // end main