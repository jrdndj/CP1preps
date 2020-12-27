/*The program should allow the user to enter a value of n and writes picture*/


#include<stdio.h>
int main(){
    //declaration
    int dN;

    //print to user 
    printf("\n Please, input an integer. \n N = ");
    scanf("%d", &dN);

    // We use two for loops one to go down trough the rows and other to print * in the row
    for (int i = 0; i < dN; i++) {
        for (int j = 0; j < dN; j++) {
            if (j < i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}