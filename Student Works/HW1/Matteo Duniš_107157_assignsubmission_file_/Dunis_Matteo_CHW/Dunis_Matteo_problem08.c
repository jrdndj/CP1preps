#include <stdio.h>
int main(){
    int j, i, n;
    printf("Input a number between 1 and 10 : "); //user could input a number >10
    scanf_s("%d", &n);
    printf("Multiplication table from 1 to %d \n", n);
    for (i = 1;i <= 10;i++){ /*Changing the 10 also influences the first column 
                             (i.e how many numbers the user inputed number multiplies (changing to 15, mulitiplies the n until 15 so 1x1, 1x2...1x15, 2x1, 2x2, 2x15, ...); 
                             Can also make that part interactive with a scanf and then changing the 10 to the name of variable used in said scan) */
        for (j = 1;j <= n;j++){
            if (j <= n - 1)
                printf(" %d \t",i * j);
            else
                printf(" %d \n", i * j);
        }
        printf("\n");
    }
}