#include<stdio.h>

int main ()

{
 
    int dSmall, dArray[10]; //declaring variables and array with 10 elements
     
    printf("Enter 10 integers: "); //printing message

    for (int i=0 ; i<10 ; i++) { //for loop printing out the array
        scanf("%d", &dArray[i]); } 
       
    dSmall=dArray[0]; //setting firat elemt of array as the smallest value
    for (int i=0 ; i<10 ; i++) { //for loop going through every elment on array and checks if its smaller than the first element
        if (dArray[i]<dSmall) {
        dSmall=dArray[i]; } //if theres anything smaller it will assign that value to dSmall and continue to check other elements
    }
        
    printf("Smallest number is: %d", dSmall); //prints smallest number
    
    return 0;

}