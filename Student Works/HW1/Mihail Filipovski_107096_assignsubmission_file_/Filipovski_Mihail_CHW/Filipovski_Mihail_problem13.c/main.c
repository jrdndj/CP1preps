#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], i, n;
        printf("Enter the size of an array \n");

        scanf("%d", &n);
        printf("Enter the elements of the array \n");

        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Even numbers in the array are :\n");
        for (i = 0; i < n; i++)
        {
            if (array[i] % 2 == 0)
            {
                printf("%d \n", array[i]);
            }
        }

        printf("\n Odd numbers in the array are :\n");
        for (i = 0; i < n; i++)
        {
            if (array[i] % 2 != 0)
            {
                printf("%d \n", array[i]);
            }
        }
    return 0;
}
