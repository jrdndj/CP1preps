#include <stdio.h>

int main() {

    //declaring variables
    int dA, dB, dC;

    //taking their values from user
    printf("Please type value for a: \n");
    scanf("%d", &dA);

    printf("Please type value for b: \n");
    scanf("%d", &dB);

    printf("Please type value for angle C: \n");
    scanf("%d", &dC);

    //A triangle is a right triangle if one angle measures 90 degrees. A triangle is an obtuse
    //triangle if one angle measures more than 90 degrees. A triangle is an acute triangle if all
    //angles measure less than 90 degrees.

    if (dC == 90) {
        printf("Triangle is a right.");
    } else if (dC > 90)  {
        printf("Triangle is an obtuse.");
    } else if (dC < 90 && dC >= 0) {
        printf("Triangle is an acute.");
    } else
        printf("Invalid value.");

    return 0;
} //end main
