//Code made by Andrea Caleta ID:89201015
//Variable naming will be explained at the bottom of the code!
#include <stdio.h>
/*
Why two methods you might ask?
I made the squaring of the factorial a separate method to make the main code less messy and confusing
*/
long long unsigned Factorial(long long unsigned lluInput)
{
    long long unsigned lluResult=1;
    for(long long unsigned dCntr=1;dCntr<=lluInput;dCntr++)
    {
        lluResult*=dCntr; //in this for-loop we're calculating the factorial of a number, by multiplying it with the number smaller by 1
    }
    return lluResult;//we return the factorial of the input number
}
long long unsigned FactorialSquared(long long unsigned lluInput)
{
    long long unsigned lluResult=1;
    for(long long unsigned dCntr=1;dCntr<=lluInput;dCntr++)
    {
        lluResult*=dCntr; //same as above method
    }
    lluResult*=lluResult;//we square the result for the final output
    return lluResult;//we return the squared factorial of the input number
}

int main()
{
    int dLength;
    printf("\nHow many numbers do you want to test?\n");
    scanf("%d",&dLength);//the user enters how many numbers we have to test i.e. the size of the array
    if(dLength<200000)//checking if the length of the array is less than 20000
    {
        long long unsigned lluTestArray[dLength];
        long long unsigned lluTAFactSQ[dLength];
        long long unsigned lluResultFactorial;
        long long unsigned lluResultArray[dLength];

        for(int dCntr=0;dCntr<dLength;dCntr++)//in this for-loop we fill out the test Array with numbers
        {
            printf("\nEnter next number: ");
            scanf("%llu",&lluTestArray[dCntr]);
        }
        for(int dCntr=0;dCntr<dLength;dCntr++)//in this array we check if the entered numbers are below 200000
        {
            if(lluTestArray[dCntr]>=200000)
            {
                printf("\n The input integer must be between 1 and 2000000, try again");
                return 0;
            }
        }
        for(int dCntr=0;dCntr<dLength;dCntr++)//setting up an array of squared factorial values for further use
        {
           lluTAFactSQ[dCntr]=FactorialSquared(lluTestArray[dCntr]);
        }

        for(int dCntr=0;dCntr<dLength;dCntr++)//this is the meat of the task
        {
            for(int dResultNum=1;dResultNum<200000;dResultNum++)//we go from 1, checking each number according to the condition given by the task
            {
                lluResultFactorial=Factorial(dResultNum); //factorial of the number we will print as the result

                if(lluResultFactorial%lluTAFactSQ[dCntr]==0)//checking if the numbers fulfill the conditions set up by the task
                {
                    lluResultArray[dCntr]=dResultNum; //when we find the number we're looking for, the loop stops
                    break;
                }
            }
        }
        printf("\n    ~~~Results~~~");//being all fancy with the output and whatnot
        printf("\nNumber of inputs: %d",dLength);
        for(int dCntr=0;dCntr<dLength;dCntr++)
        {
        printf("\nInput: %llu  |  Result: %llu",lluTestArray[dCntr],lluResultArray[dCntr]);
        }
        printf("\n    ~~~~~~~~~~~~~\n");

    }
    else
    {
       printf("\n That's way too big, take it down a notch");
    }

return 0;
}
/*
VARIABLE NAMES
    Factorial() - A method for computing the factorial of the input number
    FactorialSquared() - A method for computing the square of the factorial of the input number
    dLength - The length of our arrays
    dCntr - common counter
    lluTestArray[] - Array for the numbers the user wants to test
    lluTAFactSQ[] - TestArray Factorial Squared - Array for the squared factorials of the test numbers
    dResultNum - number we will print as the result of our computation
    lluResultArray[] - Array for storing result values
    lluResultFactorial - Factorial of the value we want to print
*/




