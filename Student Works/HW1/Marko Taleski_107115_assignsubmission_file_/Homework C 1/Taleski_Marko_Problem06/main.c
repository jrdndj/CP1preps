//This code was written by Marko Taleski :P
//C code for smallest integer in a list

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring the variables
    int array[10];
    int dMin=0;
    //Asking the user to input the integers in to the array
    printf("\nPlease enter 10 integers: \n");
    for(int i=0; i<10; i++) {
        scanf("%d", &array[i]);
    }

    //Now in order to find the smallest integer we first take the first integer in the array and compare it to the others
    dMin=array[0];
    for(int i=0; i<10; i++) {
        if(dMin>array[i]) {
            dMin = array[i];
        }
    }
    printf("\nThe smallest integer in the list is %d.\n", dMin);
    return 0;

}
