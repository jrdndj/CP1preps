#include<stdio.h>

int main ()

{

    int dUser; //declaring variables

    printf("Enter number of rows: "); //printing message
    scanf("%d", &dUser); //user input
    
    for (int i=1 ; i<=dUser ; i++) { //priting normal triangle
        for (int j=1 ; j<=i ; j++) {
            printf("*"); } //end 1st for  
            printf("\n"); } //end 2nd for

    for (int i=dUser-1 ; i>0 ; i--) { //printing triangle in reverse
        for (int j=1 ; j<=i ; j++) {
            printf("*"); } //end 1st for  
            printf("\n"); } //end 2nd for    

    return 0;

}