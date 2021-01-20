/*A C program that finds the minimum positive integer K s.t. the factorial of K is a multiple of the square of the provided positive integer*/
/*This program was written by Elena Spirova - 89201050*/
#include <stdio.h>
#include <stdlib.h>

// a function that computes factorial value ->A=A-n*...*A-1*A
unsigned long fact(int dNum )
{
    int luFac=1;
    for(int dCtr=2; dCtr<=dNum; dCtr++)
    {

        luFac*=dCtr;
    }//end for
    return luFac;

}//end fact

/*function that finds K in this function I first calculate the square of N!(luNum2) and because
 of increasing values of the factorial, as well as the square I changed the type to unsigned long.
 Which gives me an accuracy till 18.


*/unsigned long getNum(int dNum )
{
    int luK=1,luCtr,luCtr1;
    int found=0;
    unsigned long luNum2=fact(dNum)*fact(dNum);

    for(luCtr=1; luCtr<20000; luCtr++)
    {
        luK=fact(luCtr);//store K!

        for(luCtr1=1; luCtr1<20000; luCtr1++)
        {
//first number to fulfill this condition is the minimum positive integer
            if(luK==luNum2*luCtr1)
            {
                found=1;
                break;
            }
        }
        if(found)
            break;
        luK=1;
    }
    return luCtr;
}//end getNum

int main()
{
    int dT,dCtr,dNum;//initialize variables (dT=number of cases, dCtr=counter,dNum=number u wish to check)

    scanf("%d",&dT);

    for(dCtr=0; dCtr<dT; dCtr++) //user input for dT number of cases
    {
        scanf("%d",&dNum);
        printf("%lu",getNum(dNum));
    }//end for
    return 0;
}







