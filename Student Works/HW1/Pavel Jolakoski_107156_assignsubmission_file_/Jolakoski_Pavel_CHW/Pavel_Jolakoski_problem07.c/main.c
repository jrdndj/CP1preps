#include <stdio.h>
#include <stdlib.h>

int main()
{

    //declare variables
    int dN;


    printf("Please start entering 1 or 2 digit integers,\nthe program will stop if you enter -999, 999, or any alphabetical character: ");
    printf("\n");

    //while loop unknown number of numbers.
    while(scanf("%d", &dN)){

        if(dN == -999 || dN == 999){
            break;
        }//endIf
        else if(dN < 1 || dN > 99){
            printf("\nPlease only enter positive 1 or 2 digit integers:\n");
        }//endIfElse
        else{
            printf("%d%d%d\n", dN,dN,dN);
        }//endElse
    }//endWhile
    return 0;
}//endMain
