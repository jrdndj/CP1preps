#include<stdio.h>

int main ()

{

    int dUser, dRows; //declaring variables
   
    printf("Enter number of columns: "); //priting message
    scanf("%d", &dUser); //user input
    
    dRows=dUser;
    
    for (int i=1 ; i<=dUser ; i++)  {
        for (int j=1; j<i; j++) { //for loop printing empty spaces
        printf(" "); }  
            for (int k=1; k<=dRows; k++) { //for loop printing stars
            printf("*"); }  
            dRows--; //printing in reverse
    printf("\n"); } 

    return 0;

}