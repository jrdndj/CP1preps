#include <stdio.h>
#include <stdlib.h>


/*
    Write a program in C to count a total
     number of duplicate elements in an array.Minimum
     should be 5 and maximum is 25 elements. Inputs
     must be integers (both negative and positive).


*/
int main()
{
    //declare variables
    int array[25], array2[25], dCount = 0, dN, dTemp;

    printf("Enter the how many elementos you want in array from 5-25: ");
    scanf("%d", &dN);

    if(dN >= 5 && dN < 25){
        printf("Enter the elementos in the array: ");
        for(int dI = 0; dI<dN; dI++){

            printf("array[%d]= ",dI);
            scanf("%d", &array[dI]);
        }//endFor


    }//endIf
     else{
        printf("Wrong numbrero of elemento.");
    }//endElse

    printf("Number of same elements is: %d", dCount);




    return 0;
}
