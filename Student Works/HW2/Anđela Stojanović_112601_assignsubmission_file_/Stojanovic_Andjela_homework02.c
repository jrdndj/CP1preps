/*This code was written by Andjela Stojanovic ID:89201078 */

#include <stdio.h>

/*
VARIABLE NAMES
    Factorial() - this thing is a method for factorial, obviously
    FactorialSquared() - this thing is a method for making the square of the factorial
    dLng - this thing represents lenght of arrs
    dCount - this thing counts
    lluTestArray[] - this thing is for testing
    lluTAFactSQ[] - TestArray Factorial Squared - this thing is for second testing, squared factorials
    dOutNum - this is result number
    lluOutArray[] - this thing is for storing result
    lluOutFactorial - this thing is for value
*/

long long unsigned Factorial(long long unsigned lluIn)
{
    long long unsigned lluOut=1;
    for(long long unsigned dCount=1;dCount<=lluIn;dCount++)
    {
        lluOut*=dCount; //here my code is calculating the factorial of a number, multiplies by one
    }
    return lluOut;//my code is returning here
}
long long unsigned FactorialSquared(long long unsigned lluIn)
{
    long long unsigned lluOut=1;
    for(long long unsigned dCount=1;dCount<=lluIn;dCount++)
    {
        lluOut*=dCount; //same as upper one
    }
    lluOut*=lluOut;//my code squares the result
    return lluOut;//my code returns the squared factorial 
}
/*
I used this methods to make code look prettier. Sorry if I misspeled anyhing I'm so tired. We don't like messy coding, right?
*/

int main()
{
    int dLng;
    printf("\nHi!");
    printf("\n Give me your numbers, pls \n");
    scanf("%d",&dLng);//here user give us wanted numbers which are basically lenght of array
    if(dLng<200000)//checking if the length of the array is less than 20000
    {
        long long unsigned lluTestArray[dLng];
        long long unsigned lluTAFactSQ[dLng];
        long long unsigned lluOutFactorial;
        long long unsigned lluOutArray[dLng];

        for(int dCount=0;dCount<dLng;dCount++)//here my code fills out the test Array with nums
        {
            printf("\nGimme next one: ");
            scanf("%llu",&lluTestArray[dCount]);
        }
        for(int dCount=0;dCount<dLng;dCount++)//here my code checks if the entered numbers are below 200000
        {
            if(lluTestArray[dCount]>=200000)
            {
                printf("\n Damn, you really like big ones, duh?_Try again.");
                return 0;
            }
        }
        for(int dCount=0;dCount<dLng;dCount++)//here my code sets up an array of values for further use
        {
           lluTAFactSQ[dCount]=FactorialSquared(lluTestArray[dCount]);
        }

        for(int dCount=0;dCount<dLng;dCount++)//this is um IMPORTANT
        {
            for(int dOutNum=1;dOutNum<200000;dOutNum++)//here my code checks each number according to the condition given
            {
                lluOutFactorial=Factorial(dOutNum); //result is factorial number

                if(lluOutFactorial%lluTAFactSQ[dCount]==0)//here my code checks if the numbers fulfill the conditions *of course they are we cool*
                {
                    lluOutArray[dCount]=dOutNum; //here loop stops if it found the right one
                    break;
                }
            }
        }
        printf("\n***********HERE****ARE****YOUR*****RESULTS*************");//cool output, this is my best i can't do better, isn't it fancy enough??
        for(int dCount=0;dCount<dLng;dCount++)
        {
        printf("\nWHAT YOU GAVE ME %llu  ***  WHAT I MADE FOR YOU: %llu",lluTestArray[dCount],lluOutArray[dCount]);
        }
        printf("\n*****************************************************\n");

    }
    else
    {
       printf("\n okay boomer, I know that you like big ones but for real, again?? ");
    }
     printf("\n It was lovely to have you here with me. See you next time. Or not. HEHEHEHEHE *evil laugh* \n");
return 0;
       
}