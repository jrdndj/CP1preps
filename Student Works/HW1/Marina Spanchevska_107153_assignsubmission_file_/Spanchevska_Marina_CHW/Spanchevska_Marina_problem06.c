#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //declaring variables
    signed int dArray[10];
    signed int dSmall;

    //asking the user for some input
    printf("Please enter 10 integers and I will find the smallest one \n");

    //inputting the array of integers
    for(int dCtr=0; dCtr<10; dCtr++) {
         scanf("%d", &dArray[dCtr]);
    }
    printf("\n");

    dSmall = dArray[0];

    //finding the smallest integer
    for(int dCtr=1; dCtr<10; dCtr++) {

        if(dArray[dCtr]<dSmall){
            dSmall = dArray[dCtr];
        }//end if

    }//end for

    //prints the result
    printf("The smallest integer you have entered is %d", dSmall);

    return 0;

}//end main