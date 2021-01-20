#include <stdio.h>
/*
Nastasija Šišović
ID;89201058
Given a positive integer N,what is the minimum positive integer K, such that K! is a multiple of the square of N!?
*/
//Global variables
long dFactorial, dFactSqr;
int n;
//Declare  functions
long getFactorial(int),getMultiply(int),checkMultiply(int, long);

int main(){
//Local variables
int dNumbertest;

//User input
printf("\nHow many tests do you want to do?\nPlease input a number between 1 and 10.\n");
scanf(" %d",&dNumbertest);

//Main part
for(int p=1; p<=dNumbertest; p++){
printf("\nInput a positive integer!\n");
scanf(" %d", &n);
dFactorial = getFactorial(n);
checkMultiply(1,getMultiply(n));
}//End Main1

return 0;
}//End Main

//Function definitions

//This function calculates the factorial of the integer n
long getFactorial(int n){
if (n == 0)
    return 1;
  else
    return (n*getFactorial(n-1));
}//End getFactorial

//This function squares the factorial of the input
long getMultiply(int h){
    long dFactSqr=dFactorial*dFactorial;
    return dFactSqr;
}//End getMultiply

//This function checks if K! is divisible by N!
long checkMultiply(int k,long dFactSqr){
    for(k=1; k<=20000; k++){
        if(getFactorial(k)%dFactSqr==0){
            printf("%d", k);
            break;
        }//End If
    }//End For
}//End checkMultiply
