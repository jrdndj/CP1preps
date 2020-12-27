/*
This program was written by Melanie Lakota on 14th December 2020.
*/
#include <stdio.h>

int main()
{
    //declare variables
    int dNum;
    
    //let user know how they can quit program because it otherwise runs into infinity 
    printf("\n Quit anytime you want by typing 999.\n");
    
    //set condition unless the given value is 999, program continues with work
    while (dNum != 999) {
        
            //tell user to give a number, scan and save it 
            printf("\n Input single-digit or two-digit number: \n");
            scanf("%d", &dNum);
            
            //if the number is less than 99 (aka single-digit or two-digit), print it 3 times
            if (dNum < 99) {
                printf("%d%d%d\n", dNum, dNum, dNum);
            }
           
            
        printf("\n");
        
            
    }
    
    //state what happenes when given 999 (program quits)
    if (dNum = 999) {
    printf ("\n K, bye! \n");
    }

    return 0;
}
