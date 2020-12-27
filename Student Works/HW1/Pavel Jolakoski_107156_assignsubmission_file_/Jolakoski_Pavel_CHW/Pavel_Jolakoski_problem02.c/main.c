#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    int dN,dM;

    //initializing the number of stars
    printf("N=");
    scanf("%d",&dN);
    dM=dN;

   for(int dI=1;dI<=dN;dI++)
   {
       for(int dJ=1;dJ<dI;dJ++)
       {
           printf(" ");
       }//endFirstInnerFor
       for(int dK=1;dK<=dM;dK++)
       {
           printf("*");
       }//endSecondInnerFor
       dM--;

      printf("\n");
    }//endOuterFOR

    return 0;
}//endMain
