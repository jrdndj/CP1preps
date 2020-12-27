/*
    Asks for positive ints until user writes 0
    Gives error if they type in a negative one
*/
#include<stdio.h>
int main(){
//Declare vars
int dIntegers;
int dLimit=1;
int dResult=0;
int dCounter=0;
int dSum=0;

//prompt user for input
printf("Please input positive integers, when you're done type 0\n");
scanf(" %d",&dIntegers);
//Checking if first number is 0
if(dIntegers==0){
            printf("\nNO AVERAGES");
            return 1;
}//EndIF
for(int i=0;i<dLimit;i++){
    scanf(" %d",&dIntegers);
    if(dIntegers==0){
            printf("The Average is %d",dResult);
            return 1;
    }//EndIf
    else{
    dCounter++;
    dLimit=dCounter+1;
    dSum=dSum+dIntegers;
    dResult=dSum/dCounter;
    }//EndElse
}//EndFor

return 0;
}
/*
I tried having the error for negative integers with another if statement, but it wouldn't make it continue normally,
it either stopped the program or printed out a random number like 642220 etc.
I also tried switch cases for the whole program but I managed to make it too complicated and decided a for loop with if would be better
*/
