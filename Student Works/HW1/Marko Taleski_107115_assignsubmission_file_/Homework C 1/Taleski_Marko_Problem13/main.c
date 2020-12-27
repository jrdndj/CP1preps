//This code was written by Marko Taleski :P
//C code for Odd and Even arrays

#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Declaring the variables and arrays
    int aUserArray[100], aOddNumbers[100], aEvenNumbers[100];
    int dSize=0;
    int k=0;
    int j=0;

    //Ask the user for the size of his array
    printf("\nPlease input the size of the array.\n");
    scanf("%d", &dSize);

    //For loop for inserting the elements into the array
    printf("\nPlease insert the elements of the your array\n");
    for(int i=0; i<dSize; i++) {
        scanf("%d", &aUserArray[i]);
    }//end of for loop

    //Now with another for loop I divide the even and odd numbers into their own array
    for(int i=0; i<dSize; i++) {
        if( aUserArray[i] % 2 == 0 ) {
            aEvenNumbers[j] = aUserArray[i];
            j++;
        }//end of if statement
        else {
            aOddNumbers[k] = aUserArray[i];
            k++;
        }
        //end of else
    }//end of for loop

    //Now we print all the arrays first the user inputed, then the even numbers array and lastly the odd numbers array
    printf("\nThe elements in the user array are: ");
    for(int i=0; i<dSize; i++) {
        if( i == dSize - 1) {
            printf("%d.", aUserArray[i]);
        }//end of if statement
        else {
            printf("%d, ", aUserArray[i]);
        }//end of else
    }//end of for loop

    //Now the even numbers
    printf("\nThe even elements in the user array are: ");
    for(int i=0; i<j; i++) {
        if( i == j - 1) {
            printf("%d.", aEvenNumbers[i]);
        }//end of if statement
        else {
            printf("%d, ", aEvenNumbers[i]);
        }//end of else
    }//end of for loop

    //Lastly the odd numbers
    printf("\nThe odd elements in the user array are: ");
    for(int i=0; i<k; i++) {
        if( i == k - 1) {
            printf("%d.", aOddNumbers[i]);
        }//end of if statement
        else {
            printf("%d, ", aOddNumbers[i]);
        }//end of else
    }//end of for loop

    return 0;
}
