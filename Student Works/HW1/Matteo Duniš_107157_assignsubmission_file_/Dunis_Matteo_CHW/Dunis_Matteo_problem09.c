#include <stdio.h>
int main() {
    int start_day, days_in_month, i;

    printf("Enter start day: ");
    if (scanf_s("%d", &start_day) != 1)
        return 1;

    printf("Enter days in month: ");
    if (scanf_s("%d", &days_in_month) != 1)
        return 1;

    printf("\n M  T  W  T  F  S  S  \n");
    for (i = 1; i < start_day; i++) {
        printf("   ");
    }

    for (i = 1; i <= days_in_month; i++) {
        printf("%2d", i);
        if ((i + start_day - 1) % 7 == 0) {
            printf("\n");
        }
        else {
            printf(" ");
        }
    }
    if ((days_in_month + start_day - 1) % 7 != 0) {
        printf("\n");
    }
    return 0;
}