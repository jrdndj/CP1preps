#include <stdio.h>

int main(){
    //declare variables
    int dInt, dCtr, dCtr1;

    printf("Multiplication Table\n");
    printf("Enter an integer from 1 to 10 ONLY\n");
    scanf("%d", &dInt);

    // Check if the user's input is within the valid range
    if (dInt < 1 || dInt > 10) {
    printf("Invalid input. Please, try again.\n");
    return 1;
    }

    //print the multiplication table
    printf("x  ");
    for (dCtr=1; dCtr<=dInt; dCtr++) {
        printf("%d  ", dCtr);
    }
    printf("\n");
    //print the multiplication table
    for (dCtr = 1; dCtr <= 10; dCtr++) {
        printf("%d ", dCtr);
        for (dCtr1 = 1; dCtr1 <= dInt; dCtr1++) {
         printf("%d ", dCtr*dCtr1);
        }
    printf("\n");
    }
return 0;
}