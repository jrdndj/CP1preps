#include <stdio.h>
#include <stdlib.h>

int main() {

    //declaring variables
    int dInput;

    //asking the user for some input
    printf("Enter a value for n, so I can draw you a picture :) \n");
    scanf("%d", &dInput);
    printf("\n");

    //printing top triangle
    for(int dOuter=1; dOuter<=dInput; dOuter++) {

        //drawing the stars *
        for(int dInner=1; dInner<=dOuter; dInner++){
            printf("*");
        }//end inner for

        printf("\n");
    }//end outer for

    //printing bottom triangle
    for(int dOuter=dInput-1; dOuter>=1; dOuter--) {

        //drawing the stars *
        for(int dInner=dOuter; dInner>=1; dInner--){
            printf("*");
        }//end inner for

        printf("\n");
    }//end outer for

    return 0;

}//end main