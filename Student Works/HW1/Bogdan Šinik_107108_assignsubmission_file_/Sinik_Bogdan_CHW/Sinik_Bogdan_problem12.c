#include <stdio.h> 

int main(void) 
{   
    int dNum;

    printf("Enter a number: ");
    scanf("%d", &dNum);

    printf("Roman numerals: ");        

    while(dNum != 0)
    {

        if (dNum == 1000)      
        {
           printf("M");
           dNum -= 1000;
        }

        else if (dNum >= 900)   
        {
           printf("CM");
           dNum -= 900;
        }        

        else if (dNum >= 500)   
        {           
           printf("D");
           dNum -= 500;
        }

        else if (dNum >= 400)   
        {
           printf("CD");
           dNum -= 400;
        }

        else if (dNum >= 100)   
        {
           printf("C");
           dNum -= 100;                       
        }

        else if (dNum >= 90)    
        {
           printf("XC");
           dNum -= 90;                                              
        }

        else if (dNum >= 50)    
        {
           printf("L");
           dNum -= 50;                                                                     
        }

        else if (dNum >= 40)  
        {
           printf("XL");           
           dNum -= 40;
        }

        else if (dNum >= 10)    
        {
           printf("X");
           dNum -= 10;           
        }

        else if (dNum >= 9)     
        {
           printf("IX");
           dNum -= 9;                         
        }

        else if (dNum >= 5)   
        {
           printf("V");
           dNum -= 5;                                     
        }

        else if (dNum >= 4)   
        {
           printf("IV");
           dNum -= 4;                                                            
        }

        else if (dNum >= 1) 
        {
           printf("I");
           dNum -= 1;                                                                                   
        }

    }

    return 0;
}