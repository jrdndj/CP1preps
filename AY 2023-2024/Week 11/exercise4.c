#include <stdio.h>
#include<stdlib.h>

// Function to return a pointer to an integer
int* returnPointerToInteger(int value) {
    // Allocate memory for an integer variable
    int* ptr = (int*)malloc(sizeof(int));

    // Check if memory allocation is successful
    if (ptr != NULL) {
        // Assign the value to the dynamically allocated integer
        *ptr = value;
        return ptr; // Return the pointer
    } else {
        // Handle memory allocation failure
        fprintf(stderr, "Memory allocation failed.\n");
        return NULL;
    }
}

int main() {
    // Example usage of the function
    int num = 42;
    
    // Call the function and get a pointer to the integer variable
    int* numPtr = returnPointerToInteger(num);

    // Check if the pointer is valid
    if (numPtr != NULL) {
        // Print the value through the pointer
        printf("Value through pointer: %d\n", *numPtr);

        // Don't forget to free the allocated memory when done
        free(numPtr);
    }

    return 0;
}
