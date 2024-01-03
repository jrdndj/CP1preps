#include <stdio.h>

int main() {
    // Define an array of 5 integer pointers
    int* array[5];

    // Assign each pointer to the value of its index
    for (int i = 0; i < 5; ++i) {
        array[i] = &i;
    }

    // Print the values through the pointers
    for (int i = 0; i < 5; ++i) {
        printf("*p%d = %d\n", i + 1, *array[i]);
    }

    return 0;
}
