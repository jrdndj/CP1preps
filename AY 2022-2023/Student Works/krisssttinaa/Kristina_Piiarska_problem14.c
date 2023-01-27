#include <stdio.h>
#include <string.h> //for strings
#include <stdlib.h> //for maloc()

//Function prototype
char* convertRoman(int dNum);

//Main function
int main(){
    //Declare some vars
    int dNumber;

    //Ask for input 
    printf("\nPlease, enter a number to convert: ");
    scanf("%d", &dNumber);

    //Use the function
    char* sNumber = convertRoman(dNumber);
    printf("%s\n", sNumber);
    free(sNumber);
    return 0;
}//endOfMain

//Function that converts int to string containing represantaion of int in roman numeral format
char* convertRoman(int dNum) {
    char* sNumber = (char*)malloc(50 * sizeof(char));
    memset(sNumber, 0, 50);
    if (dNum < 1 || dNum > 1000) {
        strcat(sNumber, "Invalid input. \nThis program converts only numbers from 1 to 1000.\n");
        return sNumber;
    }
    while (dNum!=0) {
        if (dNum==1000) {
        strcat(sNumber, "M");
        dNum -= 1000;
        }
        if (dNum>=900) {
        strcat(sNumber, "CM");
        dNum -= 900;
        }
        else if (dNum>=800) {
        strcat(sNumber, "DCCC");
        dNum -= 800;
        }
        else if (dNum>=700) {
        strcat(sNumber, "DCC");
        dNum -= 700;
        }
        else if (dNum>=600) {
        strcat(sNumber, "DC");
        dNum -= 600;
        }
        else if (dNum>=500) {
        strcat(sNumber, "D");
        dNum -= 500;
        }
        else if (dNum>=400) {
        strcat(sNumber, "CD");
        dNum -= 400;
        }
        else if (dNum>=300) {
        strcat(sNumber, "CCC");
        dNum -= 300;
        }
        else if (dNum>=200) {
        strcat(sNumber, "CC");
        dNum -= 200;
        }
        else if (dNum>=100) {
        strcat(sNumber, "C");
        dNum -= 100;
        }
        else if (dNum>=90) {
        strcat(sNumber, "XC");
        dNum -= 90;
        }
        else if (dNum>=80) {
        strcat(sNumber, "LXXX");
        dNum -= 80;
        }
        else if (dNum>=70) {
        strcat(sNumber, "LXX");
        dNum -= 70;
        }
        else if (dNum>=60) {
        strcat(sNumber, "LX");
        dNum -= 60;
        }
        else if (dNum>=50) {
        strcat(sNumber, "L");
        dNum -= 50;
        }
        else if (dNum>=40) {
        strcat(sNumber, "XL");
        dNum -= 40;
        }
        else if (dNum>=30) {
        strcat(sNumber, "XXX");
        dNum -= 30;
        }
        else if (dNum>=20) {
        strcat(sNumber, "XX");
        dNum -= 20;
        }
        else if (dNum>=10) {
        strcat(sNumber, "X");
        dNum -= 10;
        }
        else if (dNum==9) {
        strcat(sNumber, "IX");
        dNum -= 9;
        }
        else if (dNum==8) {
        strcat(sNumber, "VIII");
        dNum -= 8;
        }
        else if (dNum==7) {
        strcat(sNumber, "VII");
        dNum -= 7;
        }
        else if (dNum==6) {
        strcat(sNumber, "VI");
        dNum -= 6;
        }
        else if (dNum==5) {
        strcat(sNumber, "V");
        dNum -= 5;
        }
        else if (dNum==4) {
        strcat(sNumber, "IV");
        dNum -= 4;
        }
        else if (dNum==3) {
        strcat(sNumber, "III");
        dNum -= 3;
        }
        else if (dNum==2) {
        strcat(sNumber, "II");
        dNum -= 2;
        }
        else if (dNum>=1) {
        strcat(sNumber, "I");
        dNum -= 1;
        }
    }//endOfWhile
    return sNumber;
}//endOfConvert
/*
This program is an implementation of the if-else method for converting an integer 
to a Roman numeral representation. It uses a while loop to check if the input integer 
is not equal to zero, and if it is not, it checks the value of the integer and adds the corresponding 
Roman numeral characters to the string sNumber using the strcat() function.
It also checks if the input integer is less than 1 or greater than 1000, in which case it will print 
an error message.
*/