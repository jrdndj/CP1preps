#include<stdio.h>

int main(){

    //declare variables
    int i, j, dUserInput; 

    //interactive input
    printf("Please enter the maximum number of stars that will be printed in the first row: ");
    scanf("%d", &dUserInput);

    //iterate through rows 
    for(i=1; i<=dUserInput; i++){
    
        //print spaces 
        for(j=1; j<i; j++){
        
            printf(" ");

        }//end first inner for

        //print stars
        for(j=i; j<=dUserInput; j++){
        
            printf("*");

        }//end second inner for

        //move to next line
        printf("\n");

    }//end outer for

    return 0;

}//end main
