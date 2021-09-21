#include<stdio.h>
#define CHECKER_NUM 4
int main(){
    //declare varaibles
    int dUserInput;
    int dRemainder;

    //interactive input
    printf("\n Please enter 4-digit positive number: \n");
    scanf(%d , %dUserInput);

    //we need to check input
    if( dUserInput > 999 && dUserInput < 10000){
        printf("\n %d is a 4 digit positive integer. \n", dUserInput);

        //calculate the remainder
        dRemainder = dUserInput % CHECKER_NUM;

        //if the remainder is 0 than it is divisible
        if(dRemainder == 0){
            printf("\n %d is actually divisible by %d. \n", dUserInput, CHECKER_NUM);
        }//end if
        else{
            printf("\n %d is not divisible by %d. \n", dUserInput, CHECKER_NUM);
        }
    }//endif
    else if(dUserInput <= 999){
        printf("\n %d is probably a 1-3 digit integer \n");
    }//end else if
    else if(dUserInput >= 10000){
        printf("\n %d is probably a 5 or more digit integer \n");
    }//end else if
    else{
        printf("\n %d is not a 4 digit positive integer. \n");
    }//end else
    printf("\n Thank you for your input. \n");
    return 0;
}