#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variables
    int i, prime, lim_up, n;

    //Ask for integer
    printf("Please, type an integer: \n");
    scanf("%d", &lim_up);
    printf("\nPrime numbers less than or equal to [ %d ] are :: \n\n",lim_up);

    //Making loop
    for(n=1; n<=lim_up; n++)
    {
        prime = 1;
        for(i=2; i<n; i++)
            if(n%i == 0)
            {
                prime = 0;
                break;
            }
        if(prime)
            printf(" %d ",n);
    }

    printf("\n");
    return 0;
}
