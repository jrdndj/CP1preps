#include <stdio.h>

int main(){
    //declare variables
    int dR, dC, dFirstMatrix[10][10], dSecondMatrix[10][10], dThirdMatrix[10][10];

    //ask for input
    printf("\nEnter positive value (that is less 10) for R and C: ");
    scanf("%d", &dR);
    scanf("%d", &dC);

    //check that R and C are positive integers and less than 10
    if (dR <= 0 || dC <= 0 || dR >= 10 || dC >= 10) {
        printf("Error: R and C must be positive integers less than 10.\n");
        return 1;
    }

    //ask for input
    printf("\nEnter elements of the first matrix (%d x %d): ", dR, dC);
    for (int dCtr=1; dCtr<=dR; dCtr++) {
        for (int dCtr1=1; dCtr1<=dC; dCtr1++) {
            printf("\nEnter element e[%d][%d] of matrix: ", dCtr, dCtr1);
            scanf("%d", &dFirstMatrix[dCtr][dCtr1]);
        }
        
    }

    //print the matrix
    for (int dCtr=1; dCtr<=dR; dCtr++) {
        for (int dCtr1=1; dCtr1<=dC; dCtr1++) {
        printf("%d ", dFirstMatrix[dCtr][dCtr1]);
        if (dCtr1==dC) {
            printf("\n");
        }
        }
    }
    printf("\n");

    //ask for input
    printf("\nEnter elements of the second matrix (%d x %d): ", dC, dR);
    for (int dCtr=1; dCtr<=dC; dCtr++) {
        for (int dCtr1=1; dCtr1<=dR; dCtr1++) {
            printf("\nEnter element e[%d][%d] of matrix: ", dCtr, dCtr1);
            scanf("%d", &dSecondMatrix[dCtr][dCtr1]);
        }
    }

    //print the matrix
    for (int dCtr=1; dCtr<=dC; dCtr++) {
        for (int dCtr1=1; dCtr1<=dR; dCtr1++) {
        printf("%d ", dSecondMatrix[dCtr][dCtr1]);
        if (dCtr1==dR) {
            printf("\n");
        }
        }
    }
    printf("\n");

    //make values for 3rd matrix (multiplication of two matrixes)
    for (int dCtr=1; dCtr<=dR; dCtr++) {
        for (int dCtr1=1; dCtr1<=dR; dCtr1++) {
            dThirdMatrix[dCtr][dCtr1]=0;
            for(int dCtr2=1; dCtr2<=dC; dCtr2++) {
                dThirdMatrix[dCtr][dCtr1]+=dFirstMatrix[dCtr][dCtr2]*dSecondMatrix[dCtr2][dCtr1];
            }
        }
    }

    //print third matrix
    for (int dCtr=1; dCtr<=dR; dCtr++) {
        for (int dCtr1=1; dCtr1<=dR; dCtr1++) {
        printf("%d ", dThirdMatrix[dCtr][dCtr1]);
        if (dCtr1==dR) {
            printf("\n");
        }
        }
    }
    return 0;
}//endOfmain