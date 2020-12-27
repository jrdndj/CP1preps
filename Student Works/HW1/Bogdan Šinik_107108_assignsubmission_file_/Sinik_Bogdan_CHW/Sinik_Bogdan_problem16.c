#include<stdio.h>
int main(){
    
    int dDivisible, dCounter, dCurrentNumber;
    dCounter=0;
    dCurrentNumber=1;
    while(dCounter != 1001){
        dCurrentNumber++;
        dDivisible=0;
        for(int j=1; j<=dCurrentNumber; j++){
            if(dCurrentNumber % j == 0){
                dDivisible++;
            }
        }
        
        if(dDivisible == 2){
            dCounter++;
        }

    }
    printf("\n %d",dCurrentNumber);
    return 0;
}