/*
    Program accepts input as and array, then makes 2 separate arrays with odd and even values
*/
#include<stdio.h>
int main(){
//Declare vars
int n;
int dElem;
int a=0;//counter of even numbers
int b=0;//counter of odd numbers

//User input
printf("Insert the length of the array:\n");
scanf(" %d",&n);
int dArr[n];
int dEven[n],dOdd[n];
printf("Input the values of the array:\n");
for(int i=0; i<n; i++){
    scanf(" %d",&dElem);
    dArr[i]=dElem;
}//EndForArr

//Separating the array
for(int i=0; i<n; i++){
    if(dArr[i]%2==0){
        dEven[a]=dArr[i];
        a++;
    }//EndIf
    else{
        dOdd[b]=dArr[i];
        b++;
    }//EndElse
}//EndForMain

//Printing the 2 new arrays using for loops
printf("The elements of the even array are:\n");
for(int i=0; i<a; i++){
    printf("%d ", dEven[i]);
}//EndForEven
printf("\nThe elements of the odd array are:\n");
for(int i=0; i<b; i++){
    printf("%d ", dOdd[i]);
}//EndForOdd


return 0;
}
