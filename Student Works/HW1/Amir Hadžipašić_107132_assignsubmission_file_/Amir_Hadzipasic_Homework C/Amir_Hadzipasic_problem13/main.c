#include <stdio.h>
#include <stdlib.h>
/*
*Write a C program to input elements in an array. After all the numbers are inserted in the array,
*put even and odd elements in two separate arrays.
*/

// mentally exhauseted to comment it, i'm binging it, listen to whole SOAD album, lot of Distrubed, slipknot, black sabbath, maiden.... going to take a walk and strech
int main()
{
    int odd[50],even[50]; // arrays for odd and evens
    int arr[50],n,i; // arr is numbers array, n is number of numbers and i is iterator
    int od = 0,ev = 0; // limits for odd and even arrays
    printf("How much numbers friend ?\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                {
                even[ev] = arr[i];
                ev++;
                }
            else
            {
                odd[od] = arr[i];
                od++;
            }
        }
    for (i = 0; i < od; i++)
        printf("%d ",odd[i]);
    printf("\n");
    for (i = 0; i < ev; i++)
        printf("%d ",even[i]);
    return 0;
}
