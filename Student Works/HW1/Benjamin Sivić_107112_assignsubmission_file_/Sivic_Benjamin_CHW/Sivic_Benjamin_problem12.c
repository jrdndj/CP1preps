/*
    The program takes an integer and converts it to its Roman equivalent, if I have done the conversion correctly
*/
#include<stdio.h>
int main(){
//Declare vars
int dNumb;

//User input
printf("Input a number from 0 to 1000 and it will be converted into its Roman equivalent: \n");
scanf(" %d",&dNumb);

//checking if the number is within the range
if((dNumb<0) || (dNumb>1000)){
    printf("\nWhat you entered is not within the specified range, Emperor Nero is mad!");
    return 1;
}//EndIfCheck
do{
        if(dNumb==1000){
            printf("M");
            dNumb=dNumb-1000;//infinite loop if this is left out
        }//EndIfM
        else if(dNumb>=500){
            printf("D");
            dNumb=dNumb-500;
        }//EndIfD
        else if(dNumb>=100){
            printf("C");
            dNumb=dNumb-100;
        }//EndIfC
        else if(dNumb>=50){
            printf("L");
            dNumb=dNumb-50;
        }//EndIfL
        else if(dNumb>=10){
            printf("X");
            dNumb=dNumb-10;
        }//EndIfX
        else if(dNumb>=5){
            printf("V");
            dNumb=dNumb-5;
        }//EndIfV
        else if(dNumb>=1){
            printf("I");
            dNumb=dNumb-1;
        }//EndIfI
    }while(dNumb!=0);


return 0;
}
