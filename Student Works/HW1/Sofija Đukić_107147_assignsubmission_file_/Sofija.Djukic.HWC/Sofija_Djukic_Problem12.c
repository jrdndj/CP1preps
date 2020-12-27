#include <stdio.h> 

int main(void) 
{   
    int dNumb;

    printf("Please enter a number from 1 to 1000");
    scanf("%d", &dNumb);

    printf("Roman numerals: ");        
if (dNumb<1 || dNumb>1000) {printf("Error, check the range");}
else {
    while(dNumb!= 0)
    {

        if (dNumb >= 1000)       
        {printf("M");
         dNumb=dNumb-1000;
        }

        else if (dNumb >= 900)   
        {
           printf("CM");
           dNumb=dNumb-900;
        }        

        else if (dNumb >= 500)   
        {           
           printf("D");
           dNumb=dNumb-500;
        }

        else if (dNumb >= 400)   
        {
           printf("CD");
           dNumb=dNumb-400;
        }

        else if (dNumb >= 100)   
        {
           printf("C");
           dNumb=dNumb-100;                       
        }

        else if (dNumb >= 90)    
        {
           printf("XC");
           dNumb=dNumb-90;                                              
        }

        else if (dNumb >= 50)    
        {
           printf("L");
           dNumb=dNumb-50;                                                                     
        }

        else if (dNumb >= 40)    
        {
           printf("XL");           
           dNumb=dNumb-40;
        }

        else if (dNumb >= 10)    
        {
           printf("X");
           dNumb= dNumb-10;           
        }

        else if (dNumb >= 9)     
        {
           printf("IX");
           dNumb=dNumb-9;                         
        }

        else if (dNumb >= 5)     
        {
           printf("V");
           dNumb=dNumb-5;                                     
        }

        else if (dNumb>= 4)     
        {
           printf("IV");
           dNumb= dNumb-4;                                                            
        }

        else if (dNumb >= 1)     
        {
           printf("I");
           dNumb=dNumb-1;                                                                                   
        }

    }}

    return 0;
}