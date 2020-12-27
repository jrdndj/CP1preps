#include <stdio.h>
#include <stdlib.h>
// this program outputs stars from n, boring classic program
int main()
{
    int n,i,j,ln = 0; // declaration, n is number i, j are counters and ln is number of lines
    printf("Input a number\n");
    scanf("%d",&n); // input
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            {
                if (j >= ln) // if j is larger than line
                    printf("*"); // prints star
                else
                    printf(" "); // prints space
            }
        printf("\n"); // end of line
        ln++; // increment line
    }
    return 0;
}
