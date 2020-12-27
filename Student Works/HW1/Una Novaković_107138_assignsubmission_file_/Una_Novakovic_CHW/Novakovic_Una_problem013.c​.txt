#include <stdio.h>
#include <stdlib.h>




int main()
{
//declaring the variables
        int numbers[100], i, num;

        printf("Enter the size of an array \n");



        scanf("%d", &num);

        printf("Enter the elements of the array \n");



        for (i = 0; i < num; i++)

        {

            scanf("%d", &numbers[i]);

        }



        printf("Even numbers in the array are: \n");

        for (i = 0; i < num; i++)

        {

            if (numbers[i] % 2 == 0)

            {

                printf("%d \t", numbers[i]);

            }

        }



        printf("\n Odd numbers in the array are:\n");

        for (i = 0; i < num; i++)

        {

            if (numbers[i] % 2 != 0)

            {

                printf("%d \t", numbers[i]);

            }

        }




    return 0;
     }



//endmain