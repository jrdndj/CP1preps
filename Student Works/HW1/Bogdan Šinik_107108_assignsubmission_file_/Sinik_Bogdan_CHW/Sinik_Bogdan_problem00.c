#include<stdio.h>
#include <math.h>
int main(){

    //declaring variables
    int a,b,c,A,B,C;
    int dInputSides, dInputAngles;
    char cFirstSide,cSecondSide,cAngle;
    //promt the user
    printf("\n Which two sides of triangle do you want to insert? a,b or c\n");
    printf("\n First side: "); 
    scanf(" %c", &cFirstSide);
    printf("\n Second side: "); 
    scanf(" %c", &cSecondSide);
    if ((cFirstSide == 'a' && cSecondSide == 'b') ||(cFirstSide == 'b'&& cSecondSide == 'a' )){
        printf("\n Insert value of a: ");
        scanf("%d",&a);
        printf("\n Insert value of b: ");
        scanf("%d",&b);
        printf("\n Insert angle C: ");
        scanf("%d",&C);
        c = sqrt(pow(a,2) + pow(b,2) - 2 * a * b * cos(C));
    }
    else if ((cFirstSide == 'a' && cSecondSide == 'c')||(cFirstSide == 'c'&& cSecondSide == 'a')){
        printf("\n Insert value of a: ");
        scanf("%d",&a);
        printf("\n Insert value of c: ");
        scanf("%d",&b);
        printf("\n Insert angle B: ");
        scanf("%d",&C);
        c = sqrt(pow(a,2) + pow(b,2) - 2 * a * b * cos(C));
    }
    else if ((cFirstSide == 'b' && cSecondSide == 'c')||(cFirstSide == 'c'&& cSecondSide == 'b' )){
        printf("\n Insert value of b: ");
        scanf("%d",&a);
        printf("\n Insert value of C: ");
        scanf("%d",&b);
        printf("\n Insert angle A: ");
        scanf("%d",&C);
       c = sqrt(pow(a,2) + pow(b,2) - 2 * a * b * cos(C));
    }else{
        printf("ERROR Wrong input!");
    }
    B=asin(b/(c/sin(C)));
    A=180-B-C;
    if(A==90||B==90||C==90){
        printf("Right Triangle");
    }
    else if(A>90||B>90||C>90){
        printf("Obtuse Triangle");
    }else{
        printf("Acute Triangle");
    }
    
    return 0;
}