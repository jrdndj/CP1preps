//This is a code written by Lana Jurisic in order to tell us what is the smallest number in the array
#include <stdio.h>
#include <math.h>

int main()
{
    //I think this is the easiest problem that doesn't require  much explaining
    int dNumbers [10]; //array with 10 elements
    int i; //index
    int min; //smallest number
    printf("Please enter 10 digits and I will use my math skills to tell you which is the smallest! ");
     for(i = 0; i < 10; ++i) //we say up to 10, because we start from 0
        {
         scanf("%d", &dNumbers[i]);
        }
     min = dNumbers[0]; //we say that first element of array is the smallest, then we will compare it to the rest
      for(i = 0; i < 10; ++i)
        {
          if (min > dNumbers[i])
          {
              min = dNumbers[i];
          }
        }
    printf("The smallest number in this array is %.2d. ", min);
return 0;
}

