#include <stdio.h>

int main()
{
    //declaring variables
    int dN;
    int dCtr;
    int dCounter=0;

    //ask the user for input
    printf("Enter N: ");
    scanf("%d",&dN);

    if (dN < 2) {
        printf("Error.");
    }//end if
    else {
        while (dN > 1) {
            dCtr=2;
            for (int dGo=2; dGo<dN; dGo++) {
                if (dN % dGo == 0 && dN != dGo){
                    dCtr++;
                }//end if
            }//end for
            if (dCtr == 2) {
                dCounter++; //counts the no. of prime numbers
            }//end if
            dN--;
        }//end while
    }//end else

    //printing the result
    printf("\nThe number of prime numbers lesser or equal to N are: %d", dCounter);

    return 0;
}