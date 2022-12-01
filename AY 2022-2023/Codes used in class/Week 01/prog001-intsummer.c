/*
Write a programme which prints out the sum of the numbers  a (int), 
b (float) and c (double).
*/ 
#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  /* Your code goes here */
  sum = a + b + c;

  printf("\n The sum of a, b, and c is %f. \n", sum);
  return 0;
}
