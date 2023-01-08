#include <stdio.h>

int main(){
        //declare data types here
        int dNum, dCtr, dCtr1, dCtr2;

        //ask the user for input
        printf("\n Please, insert value for N: ");
        scanf("%d", &dNum);

        //print pattern with for loop
        if (dNum>0){
                printf("\n N=%d", dNum);
                printf("\n");
                for (int dCtr = 1; dCtr <= dNum; dCtr++){
                //first inner for loop
                for (int dCtr1 = 1; dCtr1 < dCtr; dCtr1++){
                printf(" ");
                }//endofloop

                //second inner for loop
                for (int dCtr2 = dCtr; dCtr2 <= dNum; dCtr2++){
                printf("*");
                }//endofloop
                printf("\n");
                }
        }
        else {
                return 1;
        }
        return 0;
}//endofmain