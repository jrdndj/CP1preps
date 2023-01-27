#include <stdio.h>
int short check(int short dInput);

int main(){
    //declaration of variable
    short int dInput;

    //asking user for input
    printf("\nEnter the number: ");
    scanf("%hu", &dInput);

    //checks for correct, even input
    int short dGoodInput=check(dInput);
    while (dGoodInput==1) {
        printf("The number must be more than 1.");
        printf("\nPlease, enter other number: ");
        scanf("%hu", &dInput);
        int dGoodInput=check(dInput);
        if (dGoodInput!=1) {
            break;
        }
    }
    printf("\n");

    short int dNum=1;
    for (int dCtr = dInput; dCtr >= 1; dCtr--) {
        if (dCtr != 1){
            printf("%d, %d, ", dNum, dCtr);
        } else {
                printf("%d, %d ", dNum, dCtr);
        }
        dNum++;
    }
}
int short check(int short dInput){
    if (dInput>1) {
        return dInput;
    }
    else{
        return 1;
    }
}