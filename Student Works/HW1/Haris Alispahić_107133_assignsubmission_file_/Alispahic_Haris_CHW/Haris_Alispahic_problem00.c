#include<stdio.h>
#include<math.h> // Using package because of commands

int main () {

    double dSideA, dSideB, dSideC, dAngleA, dAngleA2, dAngleB, dAngleC;

 printf("Enter Value for A: ");
    scanf("%lf", &dSideA);
    
 printf("Enter Value for B: ");
    scanf("%lf", &dSideB);

 printf("Enter Value for C: ");
    scanf("%lf", &dAngleC);    
    
    if ( dAngleC == 90 ) {
        printf("Right Triangle"); }
        
    if ( dAngleC>90 ) {
        printf("Obtuse Triangle"); }
    
    dSideC = sqrt( (dSideA * dSideA) + ( dSideB * dSideB )-( 2 * dSideA * dSideB ) * cos(dAngleC)); // Formula
    
    dAngleA = acos( (dSideC * dSideC +dSideB *dSideB -dSideA *dSideA )/( 2 * dSideC * dSideB ) ); // Formula
    
    dAngleA = (dAngleA*180)/M_PI; // Formula for Angle A (M_PI (Value of Pi))
    
    dAngleB = 180-dAngleC-dAngleA; // Formula for Angle B
    
   
    if ( dAngleA2<90 && dAngleB<90 && dAngleC<90 ) { // If All 3 angles are 90
        printf("Acute Triangle");  // Print Message
    }
    return 0;
}