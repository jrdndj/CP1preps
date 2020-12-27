#include<stdio.h>

int main(){

//declaring variables
int dArray[10], dInput, dMin;

//promt the user
printf("\n Please insert 10 integers: ");
//for loop
for(int i=1; i<=10; i++){
    printf("\n insert number %d: ",i);
    scanf("%d", &dInput);
    dArray[i] = dInput;
}
dMin = dArray[0];
for(int i=0; i<10; i++){
    if(dArray[i] < dMin){
        dMin=dArray[i];
    }//end if
}//end for

//printing minimum
printf("\n Minimum of those numbers is: %d", dMin);
    return 0;
}