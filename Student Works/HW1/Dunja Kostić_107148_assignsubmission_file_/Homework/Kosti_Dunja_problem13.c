#include <stdio.h>
#include <stdlib.h>

int main()
{
        //Declaring variables
        int numbers[100], i, num;

        //Input, ask for length and elements of array
        printf("Enter the size of an array \n");
        scanf("%d", &num);
        printf("Enter the elements of the array \n");

        //Loop
        for (i = 0; i < num; i++)
        {
            scanf("%d", &numbers[i]);
        }
        printf("Even numbers in the array are: \n");
        for (i = 0; i < num; i++) //Declaring even numbers
        {
            if (numbers[i] % 2 == 0)
            {
                printf("%d \t", numbers[i]);
            }
        }
        printf("\n Odd numbers in the array are:\n");
        for (i = 0; i < num; i++) //Declaring odd numbers
        {
            if (numbers[i] % 2 != 0)
            {
                printf("%d \t", numbers[i]);
            }
        }
    return 0;
     }



//endmain

