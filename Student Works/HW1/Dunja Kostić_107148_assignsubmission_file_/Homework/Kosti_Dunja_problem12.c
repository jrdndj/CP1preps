#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variable
    int number;

    //Ask user for number
    printf("Please, enter your number:");
    scanf("%d", &number);

    printf("Your number in Roman number is: ");

    while (number > 0) { //Converting into roman numbers
        if (number >= 1000) {
             printf("M");
             number = number - 1000;
      } else if (number >= 500) {
             if (number >= 900) {
                 printf("CM");
                 number = number - 900;
           } else {
                 printf("D");
                 number = number - 500;
                         }
             } else if (number >= 100) {
                    if (number >= 400) {
                        printf("CD");
                        number = number - 400;
                    } else {
                        printf("C");
                        number = number - 100;
                        }
                } else if (number >= 50) {
                     if (number >= 90) {
                            printf("XC");
                            number = number - 90;
                        } else {
                             printf("L");
                             number = number - 50;
                        }
                } else if (number >= 9) {
                        if (number >= 40) {
                            printf("XL");
                            number = number - 40;
                        } else if (number == 9) {
                                printf("IX");
                                number = number - 9;
                        } else {
                                printf("X");
                                number = number - 10;
                        }
                } else if (number >= 4) {
                        if (number >= 5) {
                                printf("V");
                                number = number - 5;
                        } else {
                                printf("IV");
                                number = number - 4;
                        }
                } else {
                        printf("I");
                        number = number - 1;
                }
        }
        printf("\n");
}//endmain

