/*
This program in C was written by Teodora Taleska.
*/

#include<stdio.h>

int main() {

  float a[100];
  int i;
  int sum;
  
  printf("\n-Please write positive integers as many as you want! If you want to stop enter '0'-zero. \n");
   
   for(int i=0; i<100; i++) {
   while( a[i]!=0 ) {
     scanf("%f", &a[i]);
    if ( a[i]<0 ){
      printf("Error! This is not positive integer!");
      return 0;
    } else if( a[i]==0 ) {
    float average = sum/i;
   printf("Average is %.2f", average);
     return 0;
    }else {
     scanf("%f", &a[i]);
     sum += a[i];
    }
   }
  }
  
  return 0;
}//end main

