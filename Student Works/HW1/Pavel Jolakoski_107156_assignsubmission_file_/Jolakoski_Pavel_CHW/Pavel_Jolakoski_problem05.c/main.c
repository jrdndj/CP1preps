#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    int dN, dC, dK;

    printf("Enter number of rows: \n");
    scanf("%d", &dN);

    for (dK = 1; dK <= dN; dK++){
        for (dC = 1; dC <= 2*dK-1; dC++){
            printf("*");
        }//endInnerFor
        printf("\n");
    }//endFirstOuterFor
    for (dK = 1; dK <= dN - 1; dK++){
        for (dC = 1 ; dC <= 2*(dN-dK)-1; dC++){
            printf("*");
        }//endInnerFor
        printf("\n");
    }//endSecondOuterFor

    return 0;
}
