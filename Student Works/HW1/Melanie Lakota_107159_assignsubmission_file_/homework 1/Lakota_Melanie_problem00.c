/*
This program is written by Melanie Lakota on 14th December 2020.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    
    //declare variables
    int dSideA;
    int dSideB;
    double dSideC;
    double dAngleC;
    double dAngleB;

    //ask user to give information about two side lengths and one angle
    printf("\n Please input side a: \n");
    scanf("%d", &dSideA);
    
    printf("\n Please input side b: \n");
    scanf("%d", &dSideB);
    
    printf("\n Please input the angle between sides a and b: \n");
    scanf("%lf", &dAngleC);


    //give result for when angle is 90
    if (dAngleC == 90) {
        printf("\n This is a right triangle. \n");
    }//endif
    
    
    //give result for when angle is more than 90
    if (dAngleC > 90) {
        printf("\n This is a obtuse triangle. \n");
    }//endif 
    
    
    //calculate for when angle is less than 90 
    //we need to only check one more angle in the triangle
    dSideC=(dSideA*dSideA) + (dSideB*dSideB) - 2*dSideA*dSideB*cos(dAngleC);

    dAngleB=dSideB/(dSideC/sin(dAngleC));


    if (dAngleC < 90) {
        
        //if it is a right angle, it is a right triangle
        if (dAngleB == 90){
            printf("\n This is a right triangle. \n");
        }//endif
        
        //if it is more than 90 degrees, it is an obtuse triangle
        if(dAngleB > 90) {
            printf("\n This is an obtuse triangle. \n");
        }//endif
        
        //if it is less than 90 degrees, it is an acute triangle
        if(dAngleB < 90) {
            printf("\n This is an acute triangle. \n");
        }//endif
    }//endif
    
   

    return 0;
}
