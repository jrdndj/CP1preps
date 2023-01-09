#include <stdio.h>

void printError(int dN) {
    while (dN <= 0) {
        printf("Enter a positive value for n: ");
        scanf("%d", &dN);
    }
    for (int i = 0; i < dN; i++) {
        printf("Error\n");
    }
}

int main() {
    int dN;
    printf("Enter the number of errors to print: ");
    scanf("%d", &dN);
    printError(dN);
    return 0;
}