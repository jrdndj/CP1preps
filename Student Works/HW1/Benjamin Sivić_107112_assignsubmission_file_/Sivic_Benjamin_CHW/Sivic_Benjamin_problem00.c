/*
    Receives input from user:sides a and b and angle C
    Then checks if the triangle is acute,right or obtuse
*/
#include<stdio.h>

int main(){

//Declare vars
int a,b,c,A,B,C,dCSqr, dASqr, dBSqr;

//Prompt user for input
printf("\nPlease input side a: ");
scanf("%d", &a);
printf("\nPlease input side b: ");
scanf("%d", &b);
printf("\nPlease input angle C: ");
scanf("%d", &C);

//Check for right angle
if(C==90){
    printf("\nRight triangle.");
}//EndIfRight
//Check for obtuse angle
if(C>90){
    printf("\nObtuse triangle.");
}//EndIfObtuse
//If none of the ifs are true than the angle c must be less than 90
//Calcute side c
dCSqr=(a*a+b*b)-(2*a*b*cos(C));
c=sqrt(dCSqr);
//Calculating remaining angles
A=cos((b*b+c*c-a*a)/(2*b*c));
B=cos((a*a+c*c-b*b)/(2*a*c));

//Checking if A or B are more than 0 radians, which is less than 90 degrees
if(A>0 && B>0){
    printf("\nAcute triangle.");
}//EndIf

return 0;
}
