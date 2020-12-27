#include<stdio.h>

int main(){

    //declaring variables
    int dInput, dCounter, dSum;
    float fAverage; 
    //while
    dCounter = 0;
    dSum = 0;
    while(dInput != 0){

        printf("\n Please insert a positive integer: ");
        scanf("%d", &dInput);
        //check if it is positive
        if (dInput > 0){
            dSum=dSum+dInput;
            dCounter++;  
        }//end if
        if(dInput < 0){
            printf("\n ERROR: Only positive integers. Try again: ");
            
        }
    }//end while
    if (dCounter == 0){
        printf("\n NO AVERAGE!");
    }
    fAverage = (float)dSum / dCounter;
    printf("\n Average of all positive integers is: %f",fAverage);
    return 0;
}