/*
    Asks for an integer and then prints all prime numbers that are smaller or equal to the input
*/
#include<stdio.h>
int main(){
//declare vars
int n;

//Prompt user input
    printf("Enter an integer: \n");
    scanf("%d",&n);

//For loop for the result
    printf("Prime numbers until %d are:\n",n);
    for(int i=2; i<=n; i++){
        int dCounter=0;
        for(int j=1; j<=i ;j++){
            if(i%j==0){dCounter++;}
        }//EndForJ
       if(dCounter==2){printf("%d ",i);}
    }//EndForI
return 0;
}
