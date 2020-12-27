#include <stdio.h>

int main()
{
 int dN; //number of elements in an array
 int i;
 int dCountEven; //even elements counter
 int dCountOdd; //odd elements counter
 dCountEven=0;
 dCountOdd=0;

 printf("Please enter how many elements do you want in your array: ");
 scanf("%d", &dN);
 int dArr[dN]; //now that we have elements number, we declare arrays
  int dArrEven[dN];
  int dArrOdd[dN];
 printf("Please insert the elements of the array: ");
 for(i=0; i<dN; i++)
 {
  scanf("%d", &dArr[i]);
 }
 for(i=0; i<dN; i++)
 {
   if(dArr[i]%2==0) //we use this to check if the element is even or odd
   {
       dArrEven[dCountEven]=dArr[i];
       dCountEven++;
   }
   else
    {
        dArrOdd[dCountOdd]=dArr[i];
        dCountOdd++;
    }
  }
  printf("\n The even elements of array: ");
  for(i=0; i<dCountEven; i++)
  {
  printf(" %d", dArrEven[i]);
  }
  printf("\n The odd elements of array: ");
  for(i=0; i<dCountOdd; i++)
  {
  printf(" %d", dArrOdd[i]);
  }

}
