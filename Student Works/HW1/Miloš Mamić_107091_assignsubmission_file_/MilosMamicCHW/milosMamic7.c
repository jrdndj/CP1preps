/*
Problem 7
*/
#include <stdio.h>
int main() {
    int a;
    printf("number");
    scanf("%d", &a);
    while (a != -999) {
        for (int i = 0; i < a; i++)
            printf("%d%d", a);
        printf("%d%d", a);

    }

}