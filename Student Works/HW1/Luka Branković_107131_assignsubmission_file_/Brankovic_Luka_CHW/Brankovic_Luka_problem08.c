#include <stdio.h>

int main() {
    //declaring variables
    int dN;
    //inputing desiered number
    printf("Insert number from 1 to 10: \n");
    scanf_s("%d", &dN);
    //creating and printing the table
    //for
    for (int i = 0; i <= 10; i++)
    {
        //for2
        for (int j = 0; j <= dN; j++)
        {
            //if
            if (i == 0 && j == 0)
                printf(" X ");      
            else if (i == 0)
                printf(" %d ", j);
            else if (j == 0)
                printf(" %d ", i);
            else
                printf(" %d ", (i * j));
            //endif
        }//endfor2
        printf("\n");
    }//endfor
    return 0;
}