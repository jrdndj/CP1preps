#include <stdio.h>

int main(void) {
    int number;
    int row, column;

    
    printf("Enter your input: ");
    scanf("%d",&number);

    row = 1;
    while (row <= number) {
        column = 1;
        while (column <= number) {
            if (column <= (number - row)) {
                printf(" ");
           } else {
                printf("*");
           }
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
