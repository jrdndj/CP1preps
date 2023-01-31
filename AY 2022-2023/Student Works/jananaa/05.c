#include <stdio.h>

int main()
{
    int num, smallest;

    printf("Please enter 10 integers:\n");

    // read in the first number
    scanf("%d", &num);
    smallest = num;

    // read in the remaining numbers
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num);
        if (num < smallest) {
            smallest = num;
        }
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}