// Anastasija_Anteljevic_problem00.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    // I will declare the variable here

    double dSideA, dSideB, dSideC;
    double dAngleA, dradA, dsinA;
    double dAngleB, dradB, dsinB;
    double dAngleC, dradC;
    const double Pi = 3.1415;

    //Now we insert the variables

    printf("This will twll you the type of triangle by giving me two sides of the triangle and the angle between them!");
    printf("\n Enter the first side of the triangle: ");
    scanf("%lf", &dSideA);
    printf("\n Enter the second side of the triangle: ");
    scanf("%lf", &dSideB);
    printf("\n Enter the angle between them: ");
    scanf("%lf", &dAngleC);
    if (dAngleC == 90) {
        printf("\n This Triangle is Right!");
    }
    else if (dAngleC > 90) {
        printf("\n This Triangle is Obtuse!");
    }

    // If the entered angle is acute we need to check the other angles
    else {
        // First we convert Angle C from degree to radius
        dradC = dAngleC * Pi / 180;
        //Then we by using the Cosinus theorem we can easily find the side C
        dSideC = sqrt(dSideA * dSideA + dSideB * dSideB + 2 * dSideA * dSideB * cos(dradC));
        // By having side C, now we can find angles A and B by using sin theorem
        dsinA = dSideA * sin(dradC) / dSideC;
        dAngleA = asin(dsinA) * 180 / Pi;
        dsinB = dSideB * sin(dradC) / dSideC;
        dAngleB = asin(dsinB) * 180 / Pi;
        // Other options next to using side C to find side B is to use side A
        // Abd to conclude we check if the angles A and B are acute, right or something else.
        if (dAngleA == 90 || dAngleB == 90) {
            printf("\n This Triangle is Right!");
        }
        else if (dAngleA > 90 || dAngleB > 90) {
            printf("\n This Triangle is Obtuse!");
        }
        else {
            printf("\n This Triangle is Acute!");
        }
    }
    return 0;
}