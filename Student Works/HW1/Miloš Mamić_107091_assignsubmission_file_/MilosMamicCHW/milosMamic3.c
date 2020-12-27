/*
Problem 3
*/

#include <stdio.h>

int main() {
    int counter, sum, a;
    double G;
    printf("\nEnter postivie number ");
    scanf("%d", &a);
    if (a < 0)
    {
        for (int i = 0; i > a; i++) {
            printf("ERROR,please write another number");
            scanf("%d", &a);
        }

    }
    else
        //store array would be useful here 
    {
        if (a > 0) {
            for (int j = 0; j < a; j++) {
                sum += a;
                counter++;

            }
        }
        else {
            if (a == 0) {
                printf("NO AVERAGE");
            }
            else {}
        }
        G = sum / counter;
        printf("%f", &G);

    }

    return 0;
}