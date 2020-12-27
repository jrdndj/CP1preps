#include <stdio.h> 

int main() {   
	int dNumber;

	printf("Please enter an integer between 0 and 1000: ");
	scanf("%d", &dNumber);        

	printf("In roman numerals, your number is: ");

    while(dNumber != 0){

        if (dNumber >= 900)   // 900 ->  CM
        {
           printf("CM");
           dNumber -= 900;
        }        

        else if (dNumber >= 500)   // 500 -> D
        {           
           printf("D");
           dNumber -= 500;
        }

        else if (dNumber >= 400)   // 400 ->  CD
        {
           printf("CD");
           dNumber -= 400;
        }

        else if (dNumber >= 100)   // 100 -> C
        {
           printf("C");
           dNumber -= 100;                       
        }

        else if (dNumber >= 90)    // 90 -> XC
        {
           printf("XC");
           dNumber -= 90;                                              
        }

        else if (dNumber >= 50)    // 50 -> L
        {
           printf("L");
           dNumber -= 50;                                                                     
        }

        else if (dNumber >= 40)    // 40 -> XL
        {
           printf("XL");           
           dNumber -= 40;
        }

        else if (dNumber >= 10)    // 10 -> X
        {
           printf("X");
           dNumber -= 10;           
        }

        else if (dNumber >= 9)     // 9 -> IX
        {
           printf("IX");
           dNumber -= 9;                         
        }

        else if (dNumber >= 5)     // 5 -> V
        {
           printf("V");
           dNumber -= 5;                                     
        }

        else if (dNumber >= 4)     // 4 -> IV
        {
           printf("IV");
           dNumber -= 4;                                                            
        }

        else if (dNumber >= 1)     // 1 -> I
        {
           printf("I");
           dNumber -= 1;                                                                                   
        }

    }
    printf("\n");

    return 0;
}
