#include <stdio.h>
#include <stdlib.h>

short int findLeviathianYear(short int year){
    //var declaration
    short int century = year - (year%100); //finds century
    //counts how many times a year has been divisble by 6 in century
    short int count = 0; 

    //finds third year divisible by 6
    for (int i = century; i < century+99; i++) {
        if (i%6==0){
            count++;
        }
        if (count == 3){
            return i;
        }
    }
}

void printEidolonMessage(short int year){
    //if leviathan year in that century is equal to year
    if (year == findLeviathianYear(year) || year == 18){
        printf("\nLeviathan has come forth! - Wish for health!");
    }
    if (year%6==0){ //if multiple of 6
        printf("\nPhoenix has come forth! - Wish for health!");
    } if (year%50==0){ //if multiple of 50
        printf("\nBahamut has come forth! - Wish for health!");
    } 
}

int main()
{
    //declaration of var
    short int year;

    //asking user for input
    printf("\nInput the year: ");
    scanf("%hu", &year);

    //input validation
    if (year >=1 && year <= 9999){
        printEidolonMessage(year); //function call
    } else { //if incorrect input
        printf("\nIncorrect input. Try running the program again!");
    }

    return 0;
}//endmain