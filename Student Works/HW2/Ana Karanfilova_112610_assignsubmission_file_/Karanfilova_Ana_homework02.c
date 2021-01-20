/*A C program that calculates the minimal multiple of input factorial squared
  This program was written by Ana Karanfilova (89201021)(its not the best but should work till 10)*/
#include<stdio.h>

//function declaraton
long long factorial(long long dNum);

int main(){
    //initializing variables
    long long dNum, dRes;
    int dTestNum;
    //interactive input that asks the user for number of test cases
    printf("\nEnter number of tests you want to calculate: \n");
    scanf("%d", &dTestNum);
    //making sure the entered input meets the requirements
    if( dTestNum<0 && dTestNum>200000 ){
        printf("\nInvalid input!");
    }//end if
    else{
        //going through every case
        while(dTestNum>0){
            //interactive input
            printf("Enter number: ");
            scanf("%lld", &dNum);
            int dCtr=1;//initialized here to start from 1 for every different case
        //checking the specified requirements
        if( dNum>0 && dNum<=200000){
        /*the formula(with notation from pdf doc) K!=x*N!^2 is restructured
        to K!%N!^2 with K being (N+counter) since K is a multiple of and therefore larger than N,
         K is computed by finding the minimal value which by modulo N!^2 gives remainder 0*/
        while((factorial(dNum+dCtr)%(factorial(dNum)*factorial(dNum)))!=0){
            dCtr++;
        }//end inner while
        //saving and printing the calculated result(number K from pdf)
        dRes=dNum+dCtr;
        printf("\n%lld\n", dRes);
        }//end if
        else{
            //error message if the entered test case doesn't meet the requirements
            printf("\nBetter luck next time.\n");
        }//end else
        dTestNum--;
        }//end outer while
    }//end else
    return 0;
}//end main

//function definition
/*It computes the factorial iteratively(less memory less time) by going through and multiplying all the numbers from
the user input until 2(not 1 because it's multiplication)*/
long long factorial(long long dNum){
    for(int dCtr=dNum-1; dCtr>1; dCtr--){
        dNum*=dCtr;
    }//end for
    return dNum;
}//end of function factorial