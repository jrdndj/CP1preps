#include <stdio.h>

int main(){
        //declare variables
        int dArr[10], dA, dCtr, dCtr1;

        //ask the user for an input (for an array)
        for(int dCtr = 0; dCtr<10; dCtr++){
                printf("\n Enter a number for slot %d: ", dCtr);
                scanf("%d", &dArr[dCtr]);
        }//endforloop
        printf("\n");

        //arranges elements of the array in ascending order
        for (dCtr = 0; dCtr<10 ; dCtr++){
                for (dCtr1 = dCtr+1; dCtr1<10; dCtr1++){
                        if ( dArr[dCtr]>dArr[dCtr1]){
                               dA = dArr[dCtr];
                               dArr[dCtr] = dArr[dCtr1];
                               dArr[dCtr1] = dA;
                        }
                }
        }//endprintloop

        //print the elements of array
        printf("\n The numbers arranged in ascending order: \n");
        for (dCtr = 0; dCtr < 10; dCtr++)
            printf("%d\n", dArr[dCtr]);

        return 0;
}//endofmain