#include<stdio.h>

int main (){
    //declaration
    int a; 
    int b;
    int c; 
    //input the angle size
    printf("Please enter the angles of the triangle.\nTheir sum must be 180.\n");
    printf("The first angle is: \n");
    scanf("%d", &a);
    printf("The side angle is: \n");
    scanf("%d", &b);
    printf("The third angle is: \n");
    scanf("%d", &c);
    //find what type of triangle it is
    if(a == 90 || b == 90 || c == 90){
        printf("You have a Right Triangle.\n");
    } else if(a < 90 && b < 90 && c < 90){
        printf("You have an Acute Triangle.\n");
    } else if(a > 90 || b > 90 || c > 90){
        printf("You have an Obtuse Triangle\n");
    } else printf("Your input was invalid. Please enter the angles again correctly\n");

    return 0;

}