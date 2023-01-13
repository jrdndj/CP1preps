/*Write a program in C to count a total number of duplicate elements in an array. Minimum should
be 5 and maximum is 25 elements. Inputs must be integers (both negative and positive).*/
#include <stdio.h>
int main(){
    //declare vars 
    int dN, dCtr, dCtr1, dCount=0, dArray[25];

    //ask for length of array
    printf("Please, enter the desired length of array: ");
    scanf("%d", &dN);

    //ask for input of array
    for (dCtr=1; dCtr<=dN; dCtr++) {
        printf("Insert the %d element of array: ", dCtr);
        scanf("%d", &dArray[dCtr]);
    }
    
    //search for the total number of duplicate elements in an array
    for (dCtr=1; dCtr<=dN; dCtr++) {
        for (dCtr1=dCtr+1; dCtr1<=dN; dCtr1++) {
            if( dArray[dCtr]==dArray[dCtr1] ){ //compare 2 elements
                dCount++;
            }
        }
    }
    if (dCount > 0) {
            printf("\nThere is %d duplicate number(s) in an array\n", dCount);
    }
    else{
        printf("\nThere is no duplicate numbers in array");
    }

    return 0;
}