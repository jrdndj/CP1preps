#include<stdio.h>

int main(){
    int dMultiplicationNumber;
    printf("Which multiplication table do you want to draw?: ");
    scanf("%d", &dMultiplicationNumber);
    
    printf("x\t");
    for(int i=1; i<=dMultiplicationNumber; i++)
        printf("%d\t", i);

    for(int i=1; i<=10; i++){
        printf("\n%d\t", i);
        for(int j=1; j<=dMultiplicationNumber; j++)
            printf("%d\t", i*j);
    }

    return 0;
}