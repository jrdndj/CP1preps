#include<stdio.h>

int main ()

{

    int dSize; //declaring variable
    int dCount=0; //declaring counter
    int dArray[1]; //declaring array
    
    printf("Enter number of elements in array: ");
        scanf("%d", &dSize); //user input for number of elements
        
    if ( dSize<5 || dSize>25 ) { //checking if array if between 5 and 25 elements if not prints error
        printf("Array must have min 5 and max 25 elements"); }
        
    else {
        printf("Enter elements in array : "); //for loop taking input from and user and putting it in array
        for (int i=0 ; i<dSize ; i++) {
            scanf("%d", &dArray[i]); }
            
    for (int i=0 ; i<dSize-1 ; i++) {
            if(dArray[i]==dArray[i+1]) { //for loop comparing every element of array at i with i+1 and if it finds same numbers increments counter
                dCount++; }
    }
    
    printf("Number of duplicate numbers is: %d", dCount); //printing number of duplicates
    
    } //end else
    
    return 0;

}