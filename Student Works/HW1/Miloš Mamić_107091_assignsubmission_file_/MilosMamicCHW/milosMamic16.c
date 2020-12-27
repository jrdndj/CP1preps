/*
 Problem 16
 */
#include<stdio.h>
int main()
{
    int i, p, n;
    int s = 1001;
    printf("\nPRIME NUMBERS less than %d are :: \n\n", s);
    //prime 
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