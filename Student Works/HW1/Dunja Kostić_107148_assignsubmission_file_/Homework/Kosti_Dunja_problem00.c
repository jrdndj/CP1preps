#include <stdio.h>
#include <stdlib.h>

 int main()
{
    //Declaring variables
    int a, b, c, A;

    //Ask the user for sides and angle
    printf("Please, enter a side of triangle: \n");
    scanf("%d", &a);

    printf("Please, enter b side of triangle: \n");
    scanf("%d", &b);

    printf("Please, enter c side of triangle: \n");
    scanf("%d", &c);

    printf("Please, enter an angle of triangle: \n");
    scanf("%d", &A);

    //Check if triangle is valid
    if((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Triangle is valid.");
    }

    //Check angle, print traingles
    if(A == 90) {
        printf("Right triangle.")
    }
    else if(A < 90) {
        printf("Accute triangle. ")
    }
    else if(A > 90) {
        printf("Obtuse triangle. ");
    }

    //If triangle is not valid, print eror
    else{
        printf("Triangle is not valid.")
    }

    return 0;
}//endmain

