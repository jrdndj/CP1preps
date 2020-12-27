// This progam is written by Katarina Javor, 14.12.2020
// here we determine if the triangle is rigth, acute or obtuse
#include <stdio.h>

int main() {

    // declare varibles
    float fSideA, fSideB;
    int dAngleC;

    // inetractive input (aks the user to input values of variables)
    printf("\n Input length of side a: ");
    scanf("%f", &fSideA);
    printf("\n Input length of side b: ");
    scanf("%f", &fSideB);
    printf("\n Input size of the angle C: ");
    scanf("%d", &dAngleC);

    // use if statement to check if the angle is right, acute or obtuse
    if (dAngleC > 90) {
        printf("\n This is an obtuse triangle!");
    } // end if
    else if (dAngleC < 90) { // we have to check another agnle because this is not enough inforation
        int dAngleB;
        printf("\n This is not enough information to know what type of triangle this is. \n Please insert size of angle B:");
        scanf("%d", &dAngleB);
        // check what type of angle this is
        if (dAngleB + dAngleC < 180) { // the sum of all angles in triangle is 180, the sum of two angle has to be less then 180
            if (dAngleB > 90) {
                printf("\n This is an obtuse triangle!");
            } // end if
            else if (dAngleB == 90) {
                printf("\n This is a rigth triangle!");
            } // end else if
            else { // still not enough information
                int dAngleA;
                printf("\n This is not enough information to know what type of triangle this is.\n Please insert size of angle A:");
                scanf("%d", &dAngleA);
                if (dAngleA + dAngleB + dAngleC == 180) {
                    if (dAngleA > 90) {
                        printf("\n This is an obtuse triangle!");
                    } // end if
                    else if (dAngleA < 90) {
                        printf("\n This is an acute triangle!");
                    } // end else if
                    else {
                        printf("\n This is the right triangle!");
                    }
                } // end if
                else {
                    printf("\n The sum of all triangle has to be 180. Please try again");
                    return 0;
                } // end else
            } // end else
        } // end if
        else {
            printf("\n The sum of two angles has to be less then 180. Please try again.");
            return 0;
        }
    } // end else if
    else {
        printf("\n This is a right triangle!");
    } // end esle 

    printf("\n Thank you for using this program :)");

    return 0;
} // end main