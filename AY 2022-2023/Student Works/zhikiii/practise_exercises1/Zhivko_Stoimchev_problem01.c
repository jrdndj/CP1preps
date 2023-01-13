#include <stdio.h>

int main(){
    int dNumber;
    printf("Enter number N: ");
    scanf("%d", &dNumber);

    int i,j,k;
    for(i=0; i<dNumber; i++){
        for(j=0; j<i; j++)
            printf(" ");
        for(k=j; k<dNumber; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}