#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Example usage of the function
    int x = 5, y = 10;

    // Print the values before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(&x, &y);

    // Print the values after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
