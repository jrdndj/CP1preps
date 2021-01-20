//Made by Selma Crnkić 89191178
#include <stdio.h>
#include <limits.h>
long long unsigned Factorial(long long unsigned lluInput)
{
    long long unsigned lluResult=1;
    for(long long unsigned dCntr=1;dCntr<=lluInput;dCntr++)
    {
        lluResult*=dCntr; // calculating the factorial of a number / multiplying with every number below it 5!=5*4*3*2*1
    }
    return lluResult; // return the result
}
long long unsigned FactorialSquared(long long unsigned lluInput)
{
    long long unsigned lluResult=1;
    for(long long unsigned dCntr=1;dCntr<=lluInput;dCntr++)
    {
        lluResult*=dCntr; // same method
    }
    lluResult*=lluResult; // square the result for the final output
    return lluResult; // return the squared factorial of the input number
}


int main()
{
    int dLength;
    printf("\nHow man numbers do you want to test?\n");
    scanf("%d",&dLength); // user enters the size of the array
    if(dLength<200000) // checking if the length of the array is less than 20000
    {
        long long unsigned lluTestArray[dLength];
        long long unsigned lluTAFactSQ[dLength];
        long long unsigned lluResultFactorial;
        long long unsigned lluResultArray[dLength];

        for(int dCntr=0;dCntr<dLength;dCntr++) // fill out the test Array with numbers
        {
            printf("\nEnter next number: ");
            scanf("%llu",&lluTestArray[dCntr]);
        }
        for(int dCntr=0;dCntr<dLength;dCntr++) // check if the entered numbers are < 200000
        {
            if(lluTestArray[dCntr]>=200000)
            {
                printf("\n Dayum son, try lower");
                return 0;
            }
        }
        for(int dCntr=0;dCntr<dLength;dCntr++) // set up an array of squared factorial values for further use
        {
           lluTAFactSQ[dCntr]=FactorialSquared(lluTestArray[dCntr]);
        }

        for(int dCntr=0;dCntr<dLength;dCntr++) // psssss(sizzling)
        {
            for(int dResultNum=1;dResultNum<200000;dResultNum++) // we go from 1, checking each number according to the condition given by the task
            {
                lluResultFactorial=Factorial(dResultNum); 

                if(lluResultFactorial%lluTAFactSQ[dCntr]==0) // to check if the numbers fulfill the conditions set up by the task
                {
                    lluResultArray[dCntr]=dResultNum; // when we find the number we're looking for, the loop stops
                    break;
                }
            }
        }
        printf("\n       ♥♥♥Results♥♥♥"); // alt + num 3
        for(int dCntr=0;dCntr<dLength;dCntr++)
        {
        printf("\n♥Input: %llu  ||  ♥Result: %llu",lluTestArray[dCntr],lluResultArray[dCntr]);
        }
        printf("\n♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥\n");

    }
    else
    {
       printf("\n Keep it low my friend");
    }

return 0;
}




