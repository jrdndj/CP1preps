#include <stdio.h>
#include <stdlib.h>

int main()
{
        //declaring variables
        int array[100], oddArray[100], evenArray[100];
        int dI, dJ = 0, dK = 0, dN;

        printf("Enter the size of the array: ");
        scanf("%d", &dN);

        printf("Enter the elements of the array n:\n");
        for (dI = 0; dI < dN; dI++)
        {
            printf("array[%d]= ",dI);
            scanf("%d", &array[dI]);
        }//endFor

        /*  Copy odd and even elements into their respective arrays */

        for (dI = 0; dI < dN; dI++)
        {
            if (array[dI] % 2 == 0)
            {
                evenArray[dJ] = array[dI];
                dJ++;
            }//endIf
            else
            {
                oddArray[dK] = array[dI];
                dK++;
            }//endElse
        }//endFor

        printf("\nThe elements of odd array are:\n");
        for (dI = 0; dI < dK; dI++)
        {
            printf("oddArray[%d]= %d\n",dI, oddArray[dI]);
        }//endFor

        printf("\nThe elements of even array are:\n");
        for (dI = 0; dI < dJ; dI++)
        {
            printf("evenArray[%d]= %d\n", dI, evenArray[dI]);
        }//endFor

    return 0;
}//endMain
