#include <stdio.h>
#include<math.h>
int main() {
    int dUI, a = 0, num = 2, i, prime = 0;
    printf("Enter Nth Number\n");
    scanf_s("%d", &dUI);

    while (a != dUI){
        int count = 0;
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0){
                count++;
                break;
            }
        }
        if (count == 0){
            a++;
            prime = num;
        }
        num = num + 1;
    }
    printf("%dth prime number is %d ", dUI, prime);
    return 0;
}