#include <stdio.h>

int main(){

    int count = 0;
    int temp;
    int Prime(int num);
    while (1) {
        for (int i = 2; i < 8000; i++) {
            if (Prime(i) == 1) {
                temp = i;
                count++;
            }
            if (count == 1001) {
                printf("%d", temp);
                break;
            }

        }
        break;
    }

    return 0;
}
int Prime(int num) {
    int i, temp;

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}