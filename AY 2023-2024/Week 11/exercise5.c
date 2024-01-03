#include <stdio.h>

void processPointers(char *p1, int *p2) {
    if (*p1 == 's') {
        // Square the value p2 is pointing to
        *p2 = (*p2) * (*p2);
    } else if (*p1 == '+') {
        // Add +1 to the value at p2
        (*p2)++;
    } else {
        // Change the character at p1 to 'e'
        *p1 = 'e';
    }
}

int main() {
    // Example usage of the function
    char c = 's';
    int num = 5;

    // Pointers to character and integer
    char *p1 = &c;
    int *p2 = &num;

    // Call the function with the pointers
    processPointers(p1, p2);

    // Print the results
    printf("c: %c, num: %d\n", *p1, *p2);

    return 0;
}
