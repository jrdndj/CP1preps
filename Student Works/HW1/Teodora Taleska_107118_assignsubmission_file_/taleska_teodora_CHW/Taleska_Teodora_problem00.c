/*
  This program in C was written by Teodora Taleska. In this program we will deal with finding types of triangles. :)
*/

#include<stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
     //declare variables
      double a, b, c;
      double cosA;
      double cosB;
      double A, B, C;
      
     //little representation of what is in the program
      printf("\n--> In this program we will see three types of triangles, among which are: Right Triangle, Acute Triangle and Obtuse Triangle. <--");
      
     //now allowing the user to input some values
      printf("\n-Insert the dimensions below and we will find out what kind of triangle it is!");
      printf("\n-First, determine how many centimeters you want the sides of the triangle to be.");
     //input side a
      printf("\n-- side a: ");
      scanf(" %lf", &a);
     //input side b
      printf("\n-- side b: ");
      scanf(" %lf", &b); 
     //input side c
      printf("\n-- side c: ");
      scanf(" %lf", &c); 
      
     //let's start with the calculations 
     //With The Law of Cosines we calculated the cosines of angles
      cosA = ((b*b) + (c*c) - (a*a)) / (2*b*c);
      cosB = ((c*c) + (a*a) - (b*b)) / (2*c*a);
     
     //calculating the values of angles
      A = cos(cosA); //radians
      B = cos(cosB); //radians
   //-------------------------------------   
      A = (180.0/PI)/A; //degrees
      B = (180.0/PI)/B; //degrees
      C = 180.0 - A - B;
      
     //showing the angles
      printf("\nYour calculated angles are: \nA= %.2lf \nB= %.2lf \nC= %.2lf", A, B, C);
      
     //detection of the triangle
      if( A==90.0 || B==90.0 || C==90.0 ) {
        printf("\n\nFrom the given values we come to the conclusion that your triangle is: Right Triangle :)\n");
      } else if( A<90.0 && B<90.0 && C<90.0) {
        printf("\n\nFrom the given values we come to the conclusion that your triangle is: Acute Triangle :)\n");
      } else {
       printf("\n\nFrom the given values we come to the conclusion that your triangle is: Obtuse Triangle :)\n");
     }
     
	return 0;
	
}//endmain



















