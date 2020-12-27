#include<stdio.h>
int main()
{
    int a[10], i, dSmallest;
    printf("\nPlease Enter 10 integers: \n");
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &a[i]);
    }

    dSmallest = a[0];
    for (i = 1; i < 10; i++)
    {
        if (dSmallest > a[i])
        {
            dSmallest = a[i];
           
        }
    }
    printf("\nSmallest element is: %d", dSmallest);

    return 0;
}