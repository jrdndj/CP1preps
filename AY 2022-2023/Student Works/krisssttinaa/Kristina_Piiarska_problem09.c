#include <stdio.h>

int main(){
        //declare variables
        int  dLen, dCtr;

        //ask user for length of array
        printf("\n Enter length of array: ");
        scanf("%d", &dLen);
        int dArr[dLen];

        //ask the user for elements of array
        for (int dCtr = 0; dCtr < dLen; dCtr++){
            printf("\n Enter numbers for slot %d: ", dCtr);
            scanf("%d", &dArr[dCtr]);
        }//endforloop
        printf("\n");

        //print inserted elements
        printf("\n Elements of array: \n");
        for (dCtr = 0; dCtr < dLen; dCtr++){
            printf("%d", dArr[dCtr]);
        }
        int dCtrEven=0;
        int dCtrOdd=0;
        int dEvenArr[dLen];
        int dOddArr[dLen];
        //sort even and odd
        for (int dCtr = 0; dCtr < dLen; dCtr++){
            if ( dArr[dCtr]%2==0 ){          
                dEvenArr[dCtrEven]=dArr[dCtr];
                dCtrEven++;
                }
            else{ 
                dOddArr[dCtrOdd]=dArr[dCtr];
                dCtrOdd++;
                }
        }
        printf("\n");
        printf("\n dEvenArr: \n");
        for (dCtr = 0; dCtr < dCtrEven; dCtr++){
            printf("%d", dEvenArr[dCtr]);
        }

        printf("\n");
        printf("\n dOddArr: \n");
        for (dCtr = 0; dCtr < dCtrOdd; dCtr++){
            printf("%d", dOddArr[dCtr]);
        }
        printf("\n");
        return 0;
}