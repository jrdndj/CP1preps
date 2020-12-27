//This code was written by Marko Taleski :P
//C code for duplicate elements in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Declaring variables and arrays
    int aUserArray[25];
    int dSize=0;

    //Asking the user for the size of his array
    printf("\nPlease input the size of your array, note the size must be between 5 or 25 elements.\n");
    scanf("%d", &dSize);

    //Checking if the size matches the criteria set by the code
    if( dSize > 5 && dSize < 25 ) {

        //for loop for gathering the elements of the array
        printf("\nPlease insert the elements of the your array.\n");
        for(int i=0; i<dSize; i++) {
            scanf("%d", &aUserArray[i]);
        }//end of for loop

        //for checking if there are duplicates we use 2 for loops and an if statement
        int dDuplicateCounter = 0;
        for(int i = 0; i < dSize; i++) {
        for(int j = i + 1; j < dSize; j++) {
            if(aUserArray[i] == aUserArray[j])  {
                dDuplicateCounter++;
                }//end of if statement
            }//end of inner for loop
        }//end of for loop

        //Printing how many duplicates there are in the array
        printf("\nThere are %d duplicate numbers in your array.\n", dDuplicateCounter);

    }//end of if statement

    else {
        printf("\nThe size of your array must be between 5 or 25 elements.\n");
    }//end of else
    return 0;
}
