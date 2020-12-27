/*
 The program should allow the user to input a value for variables a, b, c and be able to determine
if the sides/angles represent a Right Triangle, Acute Triangle or an Obtuse Triangle.
 */
#include<stdio.h>
int main(){
    //declare variables
    int a, b, C;

    //inputs
    printf("Input side a: ");
    scanf("%d", &a);
    printf("Input side b: ");
    scanf("%d", &b);
    printf("Input angle C: ");
    scanf("%d", &C);
    //if else statments to check what triangle you have inputed
    if(C == 90){
        printf("Right Triangle");
    }else if(C < 90){
        printf("Acute Triangle");

    }else if(C > 90){
        printf("Obtuse Triangle");

    }



    return 0;
}