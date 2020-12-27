/*
 Problem 4
 */
#include<stdio.h>

int main()
{
    int i, p, s, n;

    printf("\nEnter Limit(N) upto which u want :: ");
    scanf("%d", &s);
    printf("\nPRIME NUMBERS less than %d are :: \n\n", s);

    for (n = 1; n < s; n++)
    {
        p = 1;              //for loop
        for (i = 2; i < n; i++)
            if (n % i == 0)
            {
                p = 0;
                break;
            }
        if (p)
            printf(" %d ", n);
    }

    printf("\n");
    return 0;
}