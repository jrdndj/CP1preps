/*
        This program accepts an integer, a float, and a double
        number. It prints the sum in float with 2 decimal places.
*/

#include <stdio.h>

int main(){
        //declares variables first
        int num1;
        float num2, sum;
        double num3;

        //asks user for input
        printf("Please enter an integer: ");
        scanf("%d", &num1);

        printf("Please insert a float: ");
        scanf("%f", &num2);

        printf("Please insert a double: ");
        scanf("%lf", &num3);

        //finds the sum of numbers inputted
        sum = num1 + num2 + num3;

        //prints the sum of the numbers
        printf("The sum of the %d %.1f %.2f is %.2f: \n", num1, num2, num3, sum);

        return 0;

} //end main
