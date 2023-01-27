#include <stdio.h>

int main(){
    short int n;

        printf("\nPlease enter int n: ");
        scanf("%hu", &n);

    if (n>=3){
        for (int i = 0; i < n; i++) {
            if (i==0){
                for (int j = 0; j < n ; j++) {
                    printf("*");
                }
            } else if (i==n-1){
                for (int j = 0; j < n ; j++) {
                    printf("*");
                }
            } else {
                for (int j = 0; j < n-i-1; j++) {
                    printf(" ");
                } 
                printf("*");
            }
            printf("\n");
        }

    } else {
        printf("\nIncorrect input. \nRun the program again!");
    }

    return 0;
}