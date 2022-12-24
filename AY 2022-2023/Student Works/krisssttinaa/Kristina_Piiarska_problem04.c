#include <stdio.h>

int main(){
        //declare data types here
        int dNum, dCtr, dCtr1, dCtr2;

        //ask the user for input
        printf("\n Insert dimention for pattern: ");
        scanf("%d", &dNum);

        //print pattern with for loop
        for (int dCtr = 1; dCtr <= dNum; dCtr++){
                //inner for loop
                for (int dCtr2 = dNum+1-dCtr; dCtr2 <= dNum; dCtr2++){
                printf("*");
                }//endofloop
                printf("\n");
        }
        for (int dCtr = 1; dCtr < dNum; dCtr++){
                //inner for loop
                for (int dCtr2 = dNum; dCtr2 > dCtr; dCtr2--){
                printf("*");
                }//endofloop
                printf("\n");
        }
        return 0;
}
