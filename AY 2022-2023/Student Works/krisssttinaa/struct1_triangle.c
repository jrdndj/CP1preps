/*Using the Triangle record, write program which asks the user to enter 
a triangle and its color, makes a record of the triangle which the user defined, 
then checks if the triangle equilateral and changes to color to green ('g') 
if the triangle is equilateral.*/

#include <stdio.h>
#include <string.h>

//Declare a struct type called Triangle
struct Triangle {
  float a; //Side a of the triangle
  float b; //Side b of the triangle
  float c; //Side c of the triangle
  char color[15]; //Color of the triangle
};

int main() {
  struct Triangle trgTriangle1; //Declare a variable of type Triangle called trgTriangle1

  printf("Insert value for side a:");
  scanf("%f", &trgTriangle1.a);

  printf("Insert value for side b:");
  scanf("%f", &trgTriangle1.b);

  printf("Insert value for side c:");
  scanf("%f", &trgTriangle1.c);
  
  printf("Insert the color of triangle:");
  scanf("%s", trgTriangle1.color);

  printf("\nWe have a triangle with sides a=%f, b=%f, c=%f, and color %s\n\n", trgTriangle1.a, trgTriangle1.b, trgTriangle1.c, trgTriangle1.color);

  // Check if all sides of the triangle are equal
  if (trgTriangle1.a == trgTriangle1.b && trgTriangle1.b == trgTriangle1.c) {
    // If all sides are equal, change the color of the triangle to Green
    char sColor[15] = "Green";
    strcpy(trgTriangle1.color, sColor);
  }
  return 0;
}//endOfMain