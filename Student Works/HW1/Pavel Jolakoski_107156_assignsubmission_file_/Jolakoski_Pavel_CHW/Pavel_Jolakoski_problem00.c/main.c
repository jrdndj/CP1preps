#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//problem00:

int main()
{
    //determine variables
    //Initialized by user
    float fA, fB, fCAngle;

    //Needed in the program
    float fC;
    float fA2;
    float fB2;
    float fC2;
    float fTemp;
    float fAngleTemp;


    //initializing variables
    printf("Input side a: ");
    scanf("%f", &fA);

    printf("Input side b: ");
    scanf("%f", &fB);

    printf("Input angle C: ");
    scanf("%f", &fCAngle);


    //do the mathematizing
    //c^2 = a^2 + b^2 – 2*a*b*(cos C)


    fA2 = pow(fA,2);
    //testing phase
    printf("\nThe sqr of %f is %f", fA, fA2);

    fB2 = pow(fB,2);
    //testing phase
    printf("\nThe sqr of %f is %f", fB, fB2);

    fAngleTemp = cos(fCAngle);
    //testing phase
    printf("\nThe cos of %f is %f",fCAngle, fAngleTemp);

    fC2 = fA2 + fB2 - 2 * fA * fB * fAngleTemp;
    //testing phase
    printf("\nC^2 is %f", fC2);

    fC = sqrt(fC2);
    printf("\nThe side c is: %f", fC);

    //now lets check the triangle form using the sides.

    if(fCAngle <= 0 || fCAngle > 180){
        printf("\nPlease enter a valid angle.");
    }
    else if(fC2 < fA2 + fB2 || fCAngle < 90 ){
        printf("\nThe triangle is acute.");
    }
    else if(fC2 > fA2 + fB2 || fCAngle > 90){
        printf("\nThe triangle is obtuse.");
    }
    else if(fC2 == fA2 + fB2 || fCAngle == 90){
        printf("\nThe triangle is right.");
    }


    //im bad at math honestly, so i had no idea what i was doing here.

    return 0;
}
