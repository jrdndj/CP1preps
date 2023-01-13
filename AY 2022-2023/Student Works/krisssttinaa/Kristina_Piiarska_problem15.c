#include <stdio.h>
//Library for math operations
#include <math.h>

/*This program first prompts the user to enter values for the sides of triangle (dA, dB, dC). 
Then, it calculates the angles of the triangle using the cosine law.
It converts the angles to degrees and checks if any angle is equal to 90 degrees, 
then it prints that it's a right triangle. If any angle is greater than 90 degrees, 
it prints that it's obtuse triangle. Else - acute triangle*/

void determineTriangle(float fA, float fB, float fC){
//Determine the type of triangle
    if (fA > 0 && fB > 0 && fC > 0) {
        //calculates the angles of the triangle using the cosine law.
        float fAngleA = acos((pow(fB, 2) + pow(fC, 2) - pow(fA, 2)) / (2 * fB * fC));
        float fAngleB = acos((pow(fA, 2) + pow(fC, 2) - pow(fB, 2)) / (2 * fA * fC));
        float fAngleC = acos((pow(fA, 2) + pow(fB, 2) - pow(fC, 2)) / (2 * fA * fB));

        //Convert angles to degrees
        fAngleA = fAngleA * (180.0 / M_PI); //M_PI is radian 3.14
        fAngleB = fAngleB * (180.0 / M_PI);
        fAngleC = fAngleC * (180.0 / M_PI);

        if (fAngleA == 90 || fAngleB == 90 || fAngleC == 90) {
            printf("This is a right triangle.\n");
        } else if (fAngleA > 90 || fAngleB > 90 || fAngleC > 90) {
            printf("This is an obtuse triangle.\n");
        } else {
            printf("This is an acute triangle.\n");
        }
    } else {
        printf("Invalid input, all sides must be greater than 0.\n");
    }
}

//Main function
int main() {
    //Declare variables for sides and angles
    float fA, fB, fC;

    //Ask for user input
    printf("Enter a value for side A: ");
    scanf("%f", &fA);
    printf("Enter a value for side B: ");
    scanf("%f", &fB);
    printf("Enter a value for side C: ");
    scanf("%f", &fC);

    if (fA<=0 || fB<=0 || fC<=0) {
        printf("Sorry, the input can not be less or equal, only positive");
    }

    //Call the function that will determine the kind of triangle and print the answer
    determineTriangle(fA, fB, fC);
    return 0;
}//endOfMain