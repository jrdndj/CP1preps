
#include <stdio.h>

//method for calculating factorials
long long unsigned Factorial(long long unsigned lluUserIn)
{
    long long unsigned lluFin=1;
    for(long long unsigned dCount=1;dCount<=lluUserIn;dCount++)
    {
        lluFin*=dCount; 
    }
    return lluFin;
}

//method for calculating squared factorials (same as above, just squared, obviously)
long long unsigned FactorialSquared(long long unsigned lluUserIn)
{
    long long unsigned lluFin=1;
    for(long long unsigned dCount=1;dCount<=lluUserIn;dCount++)
    {
        lluFin*=dCount; 
    }
    lluFin*=lluFin;
    return lluFin;
}


int main()
{
    //declare variable (just one)
    int dSize;
    
    //get user input
    printf("\n Please enter your numbers: \n");
    scanf("%d",&dSize);
    if(dSize<200000)
    {
        //declare more variables
        long long unsigned lluTestArray[dSize];
        long long unsigned lluTAFactSQ[dSize];
        long long unsigned lluFinFactorial;
        long long unsigned lluFinArray[dSize];

        for(int dCount=0;dCount<dSize;dCount++) 
        {
            printf("\n Enter next number please: ");
            scanf("%llu",&lluTestArray[dCount]);
        }
        
        for(int dCount=0;dCount<dSize;dCount++)
        {
            if(lluTestArray[dCount]>=200000)
            {
                printf("\n Too big! Try again with smaller numbers.");
                return 0;
            }
        }
        
        for(int dCount=0;dCount<dSize;dCount++)
        {
           lluTAFactSQ[dCount]=FactorialSquared(lluTestArray[dCount]);
        }

        for(int dCount=0;dCount<dSize;dCount++)
        {
            for(int dFinNum=1;dFinNum<200000;dFinNum++)
            {
                lluFinFactorial=Factorial(dFinNum); 

                if(lluFinFactorial%lluTAFactSQ[dCount]==0)
                {//start if
                    lluFinArray[dCount]=dFinNum; 
                    break;
                }
            }
        }
        for(int dCount=0;dCount<dSize;dCount++)
        {
        printf("\nThe result for %llu  is: %llu",lluTestArray[dCount],lluFinArray[dCount]);
        }

    }
    else
    {//start else
       printf("\n Too big! Try again with smaller numbers. ");
    }//end else
   
return 0;
       
}//end main