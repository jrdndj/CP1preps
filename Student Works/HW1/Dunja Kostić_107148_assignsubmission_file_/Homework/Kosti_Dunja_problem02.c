#include <stdio.h>
#include <stdlib.h>

 int main()
{
    //Declaring variables
    int n, i, j, k;

    //Ask user for integer
    printf("Please, insert integer: \n");
    scanf("%d", &n);

    //Make for loops
    for(i=1; i<=n; i++) {
        for(j=1; j<i; j++) {
                printf(" ");
            }
            for(k=i; k<=n; k++) {
                printf("*");
            }
        printf("\n");
     }


   return 0;
    }//endmain


