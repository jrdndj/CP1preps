#include <stdio.h>

//i am bad with math and with numbers :/

int main() {

    //declaration
    int dSomenum;
    int dMarker;

    printf("Enter some number:");
    scanf("%d", &dSomenum);

    for (int i = 2; i <= dSomenum / 2; i++) {

        // condition for non-prime
        if (dSomenum % i == 0) {
            dMarker = 1;
            break;
        }
    }

    if (dSomenum == 1) {
        printf("Is neither prime nor composite.");
    }
    else {
        if (dMarker == 0)
            printf("%d is a prime number.", dSomenum);
        else
            printf("%d is not a prime number.", dSomenum);
    }
    return 0;
}// end main
