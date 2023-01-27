#include <stdio.h>

int check(dInput){
    if (dInput>0) {
        return dInput;
    }
    else{
        return 0;
    }
}
int perfect(dInput){
    int short dSum=0;
    for (int dCtr=1; dCtr<=(dInput/2); dCtr++) {
        if (dInput%dCtr==0) {
            dSum+=dCtr;
    }
    }
    return dSum;
}

int main(){
    int dInput;
    printf("\nLet's check if the number is perfect!");
    printf("\nPlease, enter the positive integer: ");
    scanf("%d", &dInput);
    int dGoodInput=check(dInput);

    while (dGoodInput==0) {
        printf("The number of teams must be positive integer.");
        printf("\nPlease, enter the positive integer: ");
        scanf("%d", &dInput);
        int dGoodInput=check(dInput);
        if (dGoodInput!=0) {
            break;
        }
    }

    int dSum=perfect(dInput);

    if (dInput==dSum) {
        printf("\n%d is a perfect number!", dInput);
    }
    else {
         printf("\n%d is NOT a perfect number!", dInput);
    }
    

    return 0;
}