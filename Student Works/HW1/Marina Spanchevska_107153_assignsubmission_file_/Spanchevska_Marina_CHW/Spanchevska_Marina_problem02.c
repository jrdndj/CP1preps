#include <stdio.h>
#include <stdlib.h>

int main() {

    //declaring variables
    int dInput;

    //asking the user for some input
    printf("Enter a value for n, so I can draw you a picture :) \n");
    scanf("%d", &dInput);

    //for going through n=rows
    for(int dOuter=1; dOuter<=dInput; dOuter++) {

        //drawing the empty spaces
        for(int dInner=1; dInner<=dOuter; dInner++){
            printf("  ");
        }//end first for

        //drawing the stars *
        for(int dInner=dInput; dInner>=dOuter; dInner--){
            printf("* ");
        }//end first for

        printf("\n");
    }//end outer for

    return 0;

}//end main
