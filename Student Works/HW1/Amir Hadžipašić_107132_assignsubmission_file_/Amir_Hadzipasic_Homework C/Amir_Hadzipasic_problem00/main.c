#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
*Create a C Program that will do the following below:
*The program should allow the user to input a value for variables a, b, c and be able to determine
*if the sides/angles represent a Right Triangle, Acute Triangle or an Obtuse Triangle.
*Note the following facts:
*1. A triangle has 3 sides a, b, c and 3 angles A, B, C, where angle A is opposite side a, angle
*B is opposite side b, and angle C is opposite side c.
*2. A triangle is a right triangle if one angle measures 90 degrees. A triangle is an obtuse
*triangle if one angle measures more than 90 degrees. A triangle is an acute triangle if all
*angles measure less than 90 degrees.
*3. Cosine Law states that:
*a. c
*2 = a
*2 + b
*2 – 2ab(cos C)
*b. b
*2 =a
*2 +c
*2 –2ac(cosB)
*c. a
*2 =b
*2 +c
*2 –2bc(cosA)
*4. Sine Law states that: a/sin A = b/sin B = c/sin C
*5. 180 degrees is equal to π radians */

int RAO_triangle() // function that uses Pythogorean method
{
    float a,b; // variables for sides of triangle
    float c_angl; // angle of C point
    int  c; // variable for side c
    int res; //variable for storing reuslt
    printf("Input 2 sides of Triangle then angle in order a b then angle c!\n");
    scanf("%f %f %f",&a,&b,&c_angl); // triple input
    res = a*a + b*b;
    c_angl = c_angl * (M_PI / 180.0); // conversion to radian
    c_angl = cos(c_angl); // cosine function
    c = res - 2*a*b*c_angl;  // calculating c side
    if (res == c) // if sum of smaller sides squared is equal to bigger side squared
        return 1;
    else if (res > c) // if sum is larger
        return 2;
    else // if sum is smaller
        return 3;
}
int main()
{
    int n;
    n = RAO_triangle();
    if (n == 1)
        printf("Right triangle");
    else if (n == 2)
        printf("Acute triangle");
    else
        printf("Obtuse triangle");
    return 0;
}
