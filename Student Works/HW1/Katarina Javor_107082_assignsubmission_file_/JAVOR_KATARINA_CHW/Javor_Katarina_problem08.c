// This program is written by Katarina Jvor, 14.12.2020
// here we have a program that executes the multiplication table
#include <stdio.h>

int main() { 
    // declare a varible
    int dInput;
    
    // interactive input (aks the user for the number between 1-10)
    printf("\n Insert a number beteen 1-10: ");
    scanf("%d", &dInput);
    // check if the number is 1-10
    if (dInput < 1 || dInput > 10) {
        printf("Invalid input. Please try again.");
        return 1;
    }
    
    // use for loop to go trough sequence from 1 to dInput
    // print the first row
    printf("x");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber);
    } // end for loop
    // first row multiplied by 1
    printf("\n1");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber);
    } // end for loop
    // first row multiplied by 2
    printf("\n2");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*2);
    } // end for loop
    // first row multiplied by 3
    printf("\n3");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*3);
    } // end for loop
    // first row multiplied by 4
    printf("\n4");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*4);
    } // end for loop
    // first row multiplied by 5
    printf("\n5");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*5);
    } // end for loop
    // first row multiplied by 6
    printf("\n6");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*6);
    } // end for loop
    // first row multiplied by 7
    printf("\n7");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*7);
    } // end for loop  
    // first row multiplied by 8
    printf("\n8");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*8);
    } // end for loop
    // first row multiplied by 9
    printf("\n9");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*9);
    } // end for loop
    // first row multiplied by 10
    printf("\n10");
    for (int dNumber=1; dNumber<=dInput; dNumber++) {
        printf("   %d   ", dNumber*10);
    } // end for loop
  
    printf("\n Thank you for using this program :)");
    
    return 0;
} // end main