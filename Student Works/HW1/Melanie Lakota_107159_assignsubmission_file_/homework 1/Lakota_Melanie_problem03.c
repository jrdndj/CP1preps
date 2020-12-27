/*
This cide was written by Melanie Lakota. Not e
*/

#include <stdio.h>

int main()
{
    
    //declare variables
    int dUserInput;
    int dSum=0;
    int dAvg=0;
    int dCounter=0;
    
    //ask user to input positive values
    printf("\n Please input positive integers. \n");
    scanf("%d", &dUserInput);
    
    
    //my idea was to get a positive value, add it onto dSum and each time the counter would go up by 1 to represent a number and then we would get an average which would be printed later, but it failed :(
    while(dUserInput>0) {
        dSum += dUserInput;
        dCounter++;
        dAvg = dSum/dCounter;
        
    }//endwhile
    
    //when user enteres 0 without any other number, the sum would stay 0 and it prints no average 
    if(dSum == 0){
        printf("\n No average!\n");
    }
    
    //then for when user enteres 0, the program would stop and print the value, but it decided not to do so 
    if (dUserInput == 0) {
        printf("\n The average is: %d \n", dAvg);
        return 0;
    }//endif
    
    //and for negative values it prints an error and scans number again
    if(dUserInput<0) {
        printf("\n Enter positive integers. \n");
        scanf("%d", &dUserInput);
    }//endif
    return 0;
}
