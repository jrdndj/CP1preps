#include<stdio.h>
#include<stdlib.h>

int main() {

    //declare variable
    int dSize;

    //ask the user for size of array
    printf("Input the size of an array (5-25): \n");
    scanf("%d", &dSize);

    //if the array is not 5-25 print error
    if(dSize > 25 || dSize < 5) {
        printf("Error.\n");
    }//end if

    //declare array
    int aDiff[dSize];

    //ask the user to enter the elements of the array
    printf("Insert the elements of the array: \n");

    //inputs the array
    for(int dCtr=0; dCtr<dSize; dCtr++) {
        scanf("%d", &aDiff[dCtr]);
    }//end for

    //sorts the array
    for (int dI = 0; dI < dSize; dI++) {
        for (int dJ = dI + 1; dJ < dSize; dJ++) {
        int tmp = 0;
        if (aDiff[dI] > aDiff[dJ]) {
        tmp = aDiff[dI];
        aDiff[dI] = aDiff[dJ];
        aDiff[dJ] = tmp;
        }
    }
    }

    //counts number of duplicate numbers
    int dCounter = 0;
    for (int dCtr = 1; dCtr <= dSize; dCtr++) {
        if(aDiff[dCtr] == aDiff[dCtr-1])
        dCounter++;
    }// end for
    printf("The number of duplicate numbers is: %d", dCounter);


}//end main