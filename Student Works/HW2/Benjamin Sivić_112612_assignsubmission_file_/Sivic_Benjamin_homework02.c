/*
    Benjamin Sivić 89201007
    This program takes a positive integer N and searches for the minimum positive integer K, such that K! is a multiple of the square of N!

    The program does not give me correct values if the input is higher than 5, it just prints 10 or 34.
    Even when I changed the type to double the problem persisted.

    I tried using fmod, but I was not able to implement it correctly into my existing code, I would have to rewrite it completely.
    I checked if I put & where needed etc. and it would either just crash the program or give me a number like 622643 no matter how high I put the range for checking in checkMult();

*/
#include <stdio.h>
//Global vars
long dFact;
int n;
//Declaration of functions
long getFact(int);
long getMult(int);
long checkMult(int, long);

int main(){
//Local vars
int dNumTest;//number of test cases


//Asking user for number of tests
printf("\nHow many tests do you want to do?\nPlease input a number between 1 and 10.\n");
scanf(" %d",&dNumTest);

//Implementing the functions and printing the results
for(int a=1; a<=dNumTest; a++){
printf("Input a positive integer!\n");
scanf(" %d", &n);
dFact = getFact(n);
checkMult(1,getMult(n));
}//EndForMain

return 0;
}//EndMain

//Function definitions

//This function calculates the factorial of the integer n
long getFact(int n){
if (n == 0) // Base case
    return 1;
  else
    return (n*getFact(n-1));
}//EndgetFact

//This function just squares the factorial of the input
long getMult(int j){
    long dFacSquare=dFact*dFact;
    return dFacSquare;
}//EndgetMult

//This function checks if K! is divisible by N! and if it is it prints it, since we are iterating k from 1 onwards it will find the lowest number that is divisible
long checkMult(int k,long dFacSqrt){
    for(k=1; k<=20000; k++){
        if(getFact(k)%dFacSqrt==0){
            printf(" %d\n", k);
            break;
        }//EndIf
    }//EndFor
}//EndcheckMult
