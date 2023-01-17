#include <stdio.h>

int main()
{
    int num, sum = 0, count = 0;
    float average;
    printf("\nEnter 0 when done!\n");
    printf("Please enter a positive integer: ");
    scanf("%d", &num);

    while(num != 0) {
        if (num < 0) {
            printf("ERROR\nPlease enter a positive integer: ");
            scanf("%d", &num);
        }
        else {
            sum += num;
            count++;
            printf("Please enter a positive integer: ");
            scanf("%d", &num);
        }
    }
    
    if (count > 0) {
        average = (float)sum/count;
        printf("Average of the positive integers is: %.2f\n", average);
    }
    else {
        printf("NO AVERAGE\n");
    }
    
    return 0;
}