#include <stdio.h>
#include <stdlib.h>
/*
*Write a program that asks the user to type 10 integers and returns the smallest integer in the
*list.
*/
// lazy to use a list so i'll use array : P
int main()
{
    int i,n; // i is counter, n is number
    int arej[10]; // arej is array of numbers
    printf("Input 10 numbers\n");
    for (i = 0; i < 10; i++) // loops 0 to 9
    {
        printf("Number %d: ",i+1); // aesthetic purpose
        scanf("%d",&arej[i]); // inputs a number into array
    }
    n = arej[0]; // first number of array is n
    for (i = 1; i < 10; i++) // 1 to 9 loop
    {
        if (arej[i] < n) // if number is bigger than number in current position in array
            n = arej[i]; // number is that number in current position in array
    }
    printf("Smallest one is %d",n);
    return 0;
}
