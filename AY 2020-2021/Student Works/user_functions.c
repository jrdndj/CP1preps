/*Create a C program that performs the following task:
receive an array of 5 numbers from the user
print the maximum and minimum values in the array
print the average of the values in the array
use user-defined functions
use local variables*/

#include<stdio.h>
//functiondeclaration
void getArr();
void findArr();

//definition of function main
int main(){
    getArr();//function call
    return 0;
}//end main

//definition of function getArr
void getArr(){
    //declaring variable(array length)
    int dLength;
    printf("\nEnter array length ");
    scanf("%d", &dLength);
    //declaring the array
    int dArr[dLength];
    //user input of array elements
    printf("\nArray elements are\n");
    for(int dCtr=0; dCtr<dLength;dCtr++){
        printf("at index %d: ", dCtr);
        scanf("%d", &dArr[dCtr]);
    }//end for
    findArr(dLength, dArr);//function call
}// end getArr

//definition of function findArr
void findArr( int dLength, int dArr[]){
    //initializing variables
    int dMin=dArr[0],dMax=dArr[0];
    float fAvrg=dArr[0];
    //for loop that searches for the min/max element and computes sum of array
    for(int dCtr=1;dCtr<dLength;dCtr++){
        fAvrg+=dArr[dCtr];//computing the sum
        if(dArr[dCtr]<dMin){
            dMin=dArr[dCtr];
        }//end first if
        if(dArr[dCtr]>dMax){
            dMax=dArr[dCtr];
        }//end second if
    }//end for
    //printing the result of the for loop
    printf("\nThe smallest element is %d, while the largest is %d ", dMin, dMax);
    printf("\nThe average of the array elements is %.2f", fAvrg/(float)dLength);
}//end findArr