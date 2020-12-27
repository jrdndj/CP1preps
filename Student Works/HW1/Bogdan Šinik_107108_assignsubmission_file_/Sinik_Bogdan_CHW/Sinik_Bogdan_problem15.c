#include<stdio.h>

int main(){
    //declare variables
    char sString[1000], dCounter, dLength, dMax;
    //promt the user
    printf("\n Please insert the string: \n");
    scanf("%s", sString);
    dLength = strlen(sString);
    dCounter=1;
    dMax=dCounter;
    //for loop
    for(int i=0; i<dLength; i++){
        if(dCounter>dMax){
                dMax=dCounter;
        }//endif
        if(sString[i] != sString[i+1]){
            dCounter++;
        }//endif 
         else {
             dCounter=0;
        } //endelse
     }//end for
    printf("\n Length of the longest substring without repeating characters is: %d", dMax);

    return 0;
}