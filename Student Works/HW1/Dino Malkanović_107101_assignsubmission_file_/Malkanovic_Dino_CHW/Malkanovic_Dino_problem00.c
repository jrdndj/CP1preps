#include<stdio.h>
#include<math.h>

int main ()

{

    double dSideA, dSideB, dSideC, dAngleA, dAngleB, dAngleC; //declaring variables

    printf("Input side a: "); //taking user input for side a
    scanf("%lf", &dSideA);

    printf("Input side b: "); //taking user input for side b
    scanf("%lf", &dSideB);
    
    printf("Input angle C: "); //taking user input for side angle C
    scanf("%lf", &dAngleC);    


    if ( dAngleC==90 ) { //if angle C is 90 degrees prints message
        printf("Right Triangle"); }
        
    if ( dAngleC>90 ) { //if angle C is bigger than 90 degrees prints message
        printf("Obtuse Triangle"); }

    dSideC=sqrt((dSideA*dSideA)+(dSideB*dSideB)-(2*dSideA*dSideB)*cos(dAngleC)); //formula for calculating side c

    dAngleA=acos((dSideC*dSideC+dSideB*dSideB-dSideA*dSideA)/(2*dSideC*dSideB)); //formula for calculating angle A
    dAngleA=(dAngleA*180)/M_PI; //converting from radian to degree

    dAngleB=180-dAngleC-dAngleA; //caluclating andlge B

    if ( dAngleA<90 && dAngleB<90 && dAngleC<90 ) { //if all angles are smaller than 90 degrees prints message
        printf("Acute Triangle"); }

    return 0;

}