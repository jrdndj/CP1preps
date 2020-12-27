// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that converts arabic number to roman
#include <stdio.h>

int main() { 
    // declare varibles
    int dInput;

    // interactive input (ask the user to input number)
    printf("\n Insert number: ");
    scanf("%d", &dInput);
    printf("\n %d in roman numbers is ", dInput);
    
    //check if input is greater then 0
    while (dInput > 0) {
        // check if number is greater then 1000 - M
        if (dInput >= 1000) {
            printf("M");
            dInput-=1000;
        } // end if (1000)
        // check if input is greater then 500 - D
        else if (dInput >= 500) {
            // check if input greater then 900 - (1000-100)
            if (dInput >= 900) {
                printf("CM");
                dInput-=900;
            } // end if (900)
            else {
                printf("D");
                dInput-=500;
            } // end else 
        } // end else if (500)
        // check if input greater then 100 -C
        else if (dInput >= 100) {
            // check if input is greater then 400 - (500-100)
            if(dInput >= 400) {
                printf("CD");
                dInput-=400;
            } // end if (400)
            else {
                printf("C");
                dInput-=100;
            } // end else
        } // end else if (100)
        //check if greater then 50 - L
        else if (dInput >= 50) {
            // ckeck if input greater then 90 - (100-10)
            if (dInput >= 90) {
                printf("XC");
                dInput-=90;
            } // end if (90)
            else {
                printf("L");
                dInput-=50;
            } // end else
        } // end else if (50)
        // check if input greater then 9 
        else if (dInput >= 9) {
            // check if greater then 40 - (50-10)
            if (dInput >= 40) {
                printf("XL");
                dInput-=40;
            } // end if (40)
            else if (dInput == 9) {
                printf("IX");
                dInput-=9;
            } // end else if (9)
            else {
                printf("X");
                dInput-=10;
            } // end else
        } // end else if (9)
        // check if greater then 5 - V
        else if (dInput >= 4) {
            if (dInput >= 5) {
                printf("V");
                dInput-=5;
            } // end if (5)
            else {
                printf("IV");
                dInput-=4;
            } //end else (4)
        } //end if(5)
        else {
            printf("I");
            dInput-=1;
        } // end else
    } // end while
    
    return 0;
} // end main