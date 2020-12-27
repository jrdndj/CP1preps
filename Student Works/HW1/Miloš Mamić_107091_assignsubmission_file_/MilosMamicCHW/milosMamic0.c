/*
Problem 0
*/
#include <stdio.h>
#include <math.h>

#define RAD_2_DEG  (57.2958)
#define TOTAL_DEG  (180.0)

int main(void)
{
    int  a, b, c;
    double A, B, C;
    scanf("%d %d %d", &a, &b, &c);
    // note: acos returns the angle in radians
    //        one radian is (approx) 57.2958 degrees
    A = RAD_2_DEG * acos((double)(b * b + c * c - a * a) / (2.0 * b * c));
    B = RAD_2_DEG * acos((double)(c * c + a * a - b * b) / (2.0 * a * c));
    //absorb fractional degree errors
    C = TOTAL_DEG - (A + B);
    if (A = 90) {
        printf("right triangle");
    }
    else
        printf("%.2f %.2f %.2f", A, B, C);
    return 0;
}