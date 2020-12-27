#include<stdio.h>

int main(){
    //declaring variables
    int dInput, dCounter;
    //promt the user
    printf("Enter the integer N: \n");
    scanf("%d",&dInput);
    
    printf("Prime numbers are that are smaller or equal to %d are: \n",dInput);    
    //for loop
    for(int i=2;i<=dInput;i++){
       dCounter=0;
       //inner for loop
        for(int j=1;j<=i;j++){
            if(i%j==0){
                dCounter++;
            }
        }//end inner for loop
        //if 
       if(dCounter==2){
            printf("%d ",i);
        }//end if
    }//end for
    return 0;
}