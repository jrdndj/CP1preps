#include<stdio.h>
#include <math.h>
#define Pi 3.14159265

int main() {
    
    double a, b, c, A, B, C, cosA, cosB;
   
    printf("\nEnter the sides of triangle!");
   
    printf("\nSide a: ");
    scanf(" %lf", &a);
    printf("\nSide b: ");
    scanf(" %lf", &b);
    printf("\nSide c: ");
    scanf(" %lf", &c);

    //calculating angels
    cosA = ((b * b) + (c * c) - (a * a)) / (2 * b * c);
    cosB = ((c * c) + (a * a) - (b * b)) / (2 * c * a);

    //calculating the values of angles
    A = cos(cosA); 
    B = cos(cosB); 
    A = (180.0 / Pi) / A; 
    B = (180.0 / Pi) / B; 
    C = 180.0 - A - B;

    printf("\nAngles are:\nA= %.1lf \nB= %.1lf \nC= %.1lf", A, B, C);

    if (A == 90.0 || B == 90.0 || C == 90.0) {
        printf("\nRight Triangle!\n");
    }
    else if (A < 90.0 && B < 90.0 && C < 90.0) {
        printf("\nAcute Triangle!\n");
    }
    else {
        printf("\nObtuse Triangle!\n");
    }

    return 0;

}