#include<stdio.h>

int main(){

//declaring variables
    int dInput;
    while(dInput != 999){
        printf("\n Please enter one or two digit number: ");
        scanf("%d", &dInput);
        if(dInput <= 99){
            printf("\n %d%d%d ",dInput,dInput,dInput);
        }
        if(dInput>99 && dInput<999){
            printf("\n Only one and two digit numbers...");
        }
    }//end while
    return 0;
}