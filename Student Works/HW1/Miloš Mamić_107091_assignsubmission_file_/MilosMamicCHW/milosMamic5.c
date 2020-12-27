/*
Problem 5
*/
#include <stdio.h>  

int main()
{
    int n, m = 1;
    printf("Enter the number of columns");
    scanf("%d", &n);
    //first half 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    //second half 
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}