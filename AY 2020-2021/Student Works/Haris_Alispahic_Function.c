// Hagrid's Code Challenge Haris Alispahić 18.12.2020
#include<stdio.h>
// Declaration of Functions
int getNumber();
void sumNumbers(int, int);
void diffNumbers(int, int);
void productNumber(int, int);
void divNumber(int, int);

int main() {
    // Local Variables
    int dnum1 = 0, dnum2 = 0;

    // Calling Functions 
    dnum1 = getNumber();
    dnum2 = getNumber();
    // Printing Functions
    
    sumNumbers (dnum1, dnum2);
    diffNumbers (dnum1, dnum2);
    productNumber (dnum1, dnum2);
    divNumber (dnum1, dnum2);
    
}

int getNumber() { // getNumber Function for user Input

    int dInput = 0; // Variable Declaration
    printf("Please enter a number: "); // Print,Scan
    scanf(" %d ", &dInput);
    return dInput; // Return value int since function is Int
}


void sumNumbers(int dnum1, int dnum2) { // sumNumbers function for Sum of 2 inserted numbers
    int sum; // variable Declaration
     sum = dnum1 + dnum2; // Sum Formula
     printf("\nSum is %d", sum); // Sum Print out to User
}

void diffNumbers(int dnum1, int dnum2) { // diffNumbers function for the difference of 2 inserted numbers
    int dif; // variable Declaration
     dif = dnum1 - dnum2; // difference Formula
     printf("\nDifference is %d", dif); // Print out to user the result
}

void productNumber(int dnum1, int dnum2) { //productNumber function for the product of 2 numbers
    int prod; // variable Declaration
     prod = dnum1 * dnum2; // Formula for Product
     printf("\nProduct is %d", prod); // Print out result
}
// Note : Since every funtion is "void" we do not have a return type!
void divNumber(int dnum1, int dnum2) { // divNumber function for the division of 2 numbers
    int div, rem; // variable Declaration
     div = dnum1 / dnum2; // division formula
     rem = dnum1 % dnum2; // Remainder formula just in case (odd numbers)
     printf("\nQuotient is %d, and the remainder is %d", div,rem); // Print result
            
}// End
 // Apologies for not using different commands for * and / , i didn't figure out how :(

