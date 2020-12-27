#include<stdio.h>
#include<stdlib.h>

int main() {

    //declaring variables
    int dInput;
    float fAvg=0;
    int dCounter=0;

    //start do while
    do {

        //asking user for input
        printf("Type a positive integer: ");
        scanf("%d", &dInput);
        if(dInput < 0) {
            printf("Error. Please enter a positive value.\n");
            dCounter--;
        }//end if
        else {
            fAvg = fAvg+dInput;
            dCounter++;
        }//end else

    }while(dInput != 0); //end do while

    //print the average if it's not zero
    if(fAvg != 0){
    fAvg=fAvg/(dCounter-1);
    printf("\nThe average is: %f", fAvg);
    }//end if
    else{
        printf("There is no average!");
    }//end else

    return 0;

}//end main