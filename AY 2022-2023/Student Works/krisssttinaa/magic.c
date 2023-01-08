/*1. A magic number is one which is equal to the sum of its divisors (ex. 6 is divisible by 1, 2, 3 and 6=1+2+3),
 write a function to check if a number is magic.
2. Use the function to write a program which finds all magic numbers in an array.
3. Write a program which checks if the sum of all elements in array is a magic number*/
#include <stdio.h>

int isMagic(int dN){
    if (dN==1) {
        return dN;
    }
    int dSum = 0;
    for (int dCtr = 1; dCtr <= dN/2;  dCtr++) {
        if (dN % dCtr == 0) {
            dSum += dCtr;
        }
    }
    return dSum;
}

int main(){
    int dN;
    printf("Enter the (positive) value for N: ");
    scanf("%d", &dN);
    while (dN < 0) {
        printf("Enter a POSITIVE value for N: ");
        int dNN;
        scanf("%d", &dNN);
        dN=dNN;
    }
    if(isMagic(dN)==dN){
       printf("%d is a magic number", dN);
    }
    else{
        printf("%d is not a magic number", dN);
    }
    return 0;
}