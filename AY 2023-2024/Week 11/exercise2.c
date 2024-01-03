#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define integer variable
    int a = 4;

    // Define integer pointer and assign the address of 'a'
    int *p = &a;

    // Define another pointer and assign the address of 'p'
    int **p2 = &p;

    // Print the value of 'a' using the second pointer
    printf("Value of 'a' using p2: %d\n", **p2);

    // Delete the pointers (not the variable 'a')
    free(p);
    free(p2);

    return 0;
}
