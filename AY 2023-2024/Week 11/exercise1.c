#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define integer variables
    int a = 12, b = 6;

    // Define integer pointers
    int *p1, *p2;

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;

    // Perform arithmetic operations
    printf("Addition: %d\n", *p1 + *p2);
    printf("Subtraction: %d\n", *p1 - *p2);
    printf("Multiplication: %d\n", *p1 * *p2);

    // Check for division by zero before performing division
    if (*p2 != 0) {
        printf("Division: %d\n", *p1 / *p2);
    } else {
        printf("Division by zero is undefined.\n");
    }

    // Delete pointers from memory
    free(p1);
    free(p2);

    return 0;
}
