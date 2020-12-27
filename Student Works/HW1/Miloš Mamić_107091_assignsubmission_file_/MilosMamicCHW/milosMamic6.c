/*
Problem 6
*/

#include <stdio.h>

int main()
{
    int n, min;
    printf("Enter 10 numbers");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if ((n < min) || (i == 0))
            min = n;
    }
    printf("\nThe smallest number is %d", min);
    return 0;
}