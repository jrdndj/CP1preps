#include<stdio.h>

int main() {
    int d;
    int c;
    printf("Calendar of a specific month will be shown.\n");
    printf("Which day of the week does the month start?\nInput figure among following figures.\n");
    printf("0:Sun, 1:Mon, 2:Tue, 3:Wed, 4:Thu, 5:Fri, 6:Sat\n");
    scanf("%d", &d);
    printf("How many days does the month have?\n");
    scanf("%d", &c);
    printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    int k;
    for (k = 0; k < d; k++)
        printf("     ");
    for (int j = 1; j <= c; j++) {
        printf("%5d", j);

        if (++k > 6) {
            k = 0;
            printf("\n");
        }
    }

    if (k)
        printf("\n");
    return 0;
}