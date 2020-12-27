//This code was written by Marko Taleski :P
//C code for Roman numerals

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Declaring variables
    int dN=0;
    int dTemp=0;

    //Asking the user to input a number that will be converted in to Roman numberals
    printf("\nPlease insert a number from 0 to 1000.\n");
    scanf("%d", &dN);
    //First i check if the number is between 0 and 1000
    if( dN>0 && dN<1000 ) {

        //I save this number into a temp variable so we don't the original number
        dTemp = dN;

        //Now this part of the code is quite long but i see no other way to do it
        printf("\nThe number converted into Roman numerals is: ");
        while(dTemp != 0){
            if (dTemp >= 1000)
            {
               printf("M");
               dTemp -= 1000;
            }//end of if statement for 1000

            else if (dTemp >= 900)
            {
               printf("CM");
               dTemp -= 900;
            }//end of else if statement for 900

            else if (dTemp >= 500)
            {
               printf("D");
               dTemp -= 500;
            }//end of else if statement for 500

            else if (dTemp >= 400)
            {
               printf("CD");
               dTemp -= 400;
            }//end of else if statement for 400

            else if (dTemp >= 100)
            {
               printf("C");
               dTemp -= 100;
            }//end of else if statement for 100

            else if (dTemp >= 90)
            {
               printf("XC");
               dTemp -= 90;
            }//end of else if statement for 90

            else if (dTemp >= 50)
            {
               printf("L");
               dTemp -= 50;
            }//end of else if statement for 50

            else if (dTemp >= 40)
            {
               printf("XL");
               dTemp -= 40;
            }//end of else if statement for 40

            else if (dTemp >= 10)
            {
               printf("X");
               dTemp -= 10;
            }//end of else if statement for 10

            else if (dTemp >= 9)
            {
               printf("IX");
               dTemp -= 9;
            }//end of else if statement for 9

            else if (dTemp >= 5)
            {
               printf("V");
               dTemp -= 5;
            }//end of else if statement for 5

            else if (dTemp >= 4)
            {
               printf("IV");
               dTemp -= 4;
            }//end of else if statement for 4

            else if (dTemp >= 1)
            {
               printf("I");
               dTemp -= 1;
            }//end of else if statement for 1

        }
    }
    else {
        printf("\nThe number you have entered is not between 0 and 1000\n");
    }
    return 0;
}
