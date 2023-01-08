#include <stdio.h>

int main(){
        //declare variables
        int dArr[10], a=0;

        //ask the user for an input
        for(int dCtr=0; dCtr<10; dCtr++){
        printf("\n Enter number for slot %d: ", dCtr);
        scanf("%d", &dArr[dCtr]);
        }//endforloop
        printf("\n");

        //sort an array
        for (int dCtr = 0; dCtr<10; dCtr++){
                //printf("\n %d", dArr[dCtr]);
                for (int dCtr1 = dCtr+1; dCtr1 <10; dCtr1++){
                        //printf("\n %d", dArr[dCtr1]);
                        //printf("\n");
                        if (dArr[dCtr]>dArr[dCtr1]){
                                a=dArr[dCtr];
                                dArr[dCtr]=dArr[dCtr1];
                                dArr[dCtr1]=a;
                        }
                }//endforloop
        }//endforloop

        for (int dCtr = 0; dCtr<10; dCtr++){
                printf("%d", dArr[dCtr]);
        }

        printf("\n The smallest number is: %d \n", dArr[0]);
        return 0;
}
