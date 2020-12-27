/*
This program was written by Melanie Lakota on 14th December 2020.
*/
#include <stdio.h>
//state the max size for the array of numbers 
#define maxsize 25  

int main()
{
    
    //declare variables
    int dArray[maxsize];
    int dElements;
    int dNum = 0;

    //ask user to give the number of elements 
    printf("\n Enter size of your array, must be a number from 5 to 25 : \n");
    scanf("%d", &dElements);
    
    //give statement what will happen if user inputs number lower than 5 or higher than 25
    if (dElements<5 || dElements>25) {
        printf("\n You need to give a number between 5 and 25 please :) \n");
        scanf("%d", &dElements);

    }//endif
    
    //ask user to input the elements of array
    printf("\n Enter elements of your array: \n");
    for(int i=0; i<dElements; i++) {
        scanf("%d", &dArray[i]);
    }//endfor
    
    //find the duplicate numbers in array 
    for(int i=0; i<dElements; i++) {
        for(int j=i+1; j<dElements; j++) {
            //if loop finds the same element, count +1 into dNum variable which we will print later
            if(dArray[i] == dArray[j]) {
                dNum++;
            }//endif
        }//endfor
    }//endfor

    printf("\n The number of duplicate elements found in array is: %d \n", dNum);

    return 0;
}