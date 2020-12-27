//Today we will find out the 1001st prime number, are you ready??
//Or not, because i don't know how to dont but here is the idea
#include <stdio.h>
int main()
{
 int i;
 int dN=1000000; //I randomly assigned that big number because 1001st is smaller than that
 int dCounter=0; //we will use this to find the 1001st
 int dFinal; //Our 1001st number
 while(dCounter<=1001)
 {
     for (i = 2; i <= dN; ++i)
     {
        if (dN % i != 0)
        {
        dFinal=dN;
        dCounter++;
        }
     }
 }
 printf("The 1001st number is %d", &dFinal);
}
