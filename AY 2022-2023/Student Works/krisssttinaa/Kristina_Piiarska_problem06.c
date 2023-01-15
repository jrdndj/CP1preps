#include <stdio.h>

int main(){
    //declare variables
    int dDigit;
do{
    printf("\nEnter a one or two-digit integer (999 to exit): ");
    scanf("%d", &dDigit);

    if (dDigit!=999) {
    printf("%d%d%d", dDigit, dDigit, dDigit);
    }
} while(dDigit!=999);
}