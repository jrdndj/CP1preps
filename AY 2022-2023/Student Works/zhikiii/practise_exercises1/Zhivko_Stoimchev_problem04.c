#include<stdio.h>

int main(){
    int dAsterisks;
    printf("Enter number n: ");
    scanf("%d", &dAsterisks);

    for(int i=0; i<=dAsterisks; i++){
        for (int j = 0; j < i; j++)
            printf("*");
        printf(" \n");
    }

    for(int i=dAsterisks-1; i>0; i--){
        for (int j = i; j > 0; j--)
            printf("*");
        printf(" \n");
    }

    return 0;
}
