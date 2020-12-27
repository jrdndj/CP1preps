//This code was written by Marko Taleski :P
//C code for Triangle

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //defining variables
    double fA=0;
    double fB=0;
    double fC=0;
    double fAlpha=0;
    double fBeta=0;
    double fGamma=0;

    //Ask the user to input 2 sides and the angle gamma of the triangle he wants to check
    printf("\nPlease enter the side a of the triangle.\n");
    scanf("%lf",&fA);
    printf("\nPlease enter the side b of the triangle.\n");
    scanf("%lf",&fB);
    printf("\nPlease enter the angle gamma of the triangle.\n");
    scanf("%lf",&fGamma);

    //Using mathematical formulas to calculate the other side and the other 2 angles
    fC=pow(pow(fA, 2)+pow(fB, 2)-((2*fA*fB)*cos(fGamma)), 2);

    fBeta=cos((pow(fA, 2)+pow(fC, 2)-pow(fB, 2))/2*fA*fC);

    fAlpha=cos((pow(fC, 2)+pow(fB, 2)-pow(fA, 2))/2*fC*fB);

    //Checking if the triangle is right
    if((fAlpha==90) || (fBeta==90) || (fGamma==90)) {
        printf("\nThe triangle is a right triangle.\n");
    }//end of if statement

    //Checking if the triangle is obtuse
    if((fAlpha>90) || (fBeta>90) || (fGamma>90)) {
        printf("\nThe triangle is a obtuse triangle.\n");
    }//end of if statement

    //Checking if the triangle is acute
    if((fAlpha<90) && (fBeta<90) && (fGamma<90)) {
        printf("The triangle is a acute triangle.\n");
    }//end of if statement

    return 0;
}
