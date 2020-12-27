#include<stdio.h>

int main ()

{

    int dInput, dColumn, dRow; //declaring variables

    printf ("Insert any number from 1 to 10: "); //printing message
    scanf ("%d",&dInput); //user input

    while (dInput>0 && dInput<=10) {
        printf ("x"); //print x in first place of first row and column
        for (dRow=1 ; dRow<=dInput ; dRow++) //print numbers from 1 to dInput in 1st row
            printf("%4d" ,dRow); //4 before d is used to space numbers
            printf("\n"); //new row

        for (dColumn=1 ; dColumn<=dInput; dColumn++) { //prints number from 1 to dInput in 1st column
            printf ("%d" ,dColumn);

        for (dRow=1 ; dRow<=dInput ; dRow++ ) //prints rest of rows and columns
            printf("%4d", dRow*dColumn); //calculates table
            printf("\n"); //next row

        }
        break;
    }

    if (dInput<0 ||dInput>10) { //if number is not between 1 and 10 prints error
        printf("You must enter a number from 1 to 10"); }

    return 0;

}