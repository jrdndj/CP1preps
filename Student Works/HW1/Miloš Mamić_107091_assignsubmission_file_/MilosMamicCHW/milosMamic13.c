/*
Problem 13
*/

#include <conio.h>

int main()
{
    int a[10000], b[10000], i, n, j, k, temp, c = 0;

    printf("\nEnter size of the  array : ");
    scanf("%d", &n);
    printf("\nEnter elements in array : ");
    for (i = 0; i < n; i++)
    {  // odd
        scanf("%d", &a[i]);
        if (a[i] % 2 == 1)
            c++;
    }
    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

        }

    }

    k = 0;
    j = n - c;
     // even 
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (k < n - c)
                b[k++] = a[i];
        }
        else
        {
            if (j < n)
                b[j++] = a[i];
        }
    }

    printf("\n After sorting even and odd elements:\n ");

    for (i = 0; i < n; i++)
    {  
        a[i] = b[i];
        printf("%d ", a[i]);

    }


}