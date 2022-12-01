/* 
Write a programme which asks a user to enter an integer n and calculate a factorial of that number (n!).
Check whether a user has entered a positive number. If the number is not positive, print an error and return value 1.

*/
#include <stdio.h>
int main()
{
   int i,fact=1,num;
   printf("\nPlease enter a number to find factorial : ");
   scanf("%d",&num);
   if (num<0)
   {
      printf("\nPlease enter a positive number to");
      printf(" find factorial and try again. \n");
      printf("\nFactorial can't be found for negative");
      printf(" values. It can be only positive or 0 \n");
      return 1;
   } 
   for(i=1;i<=num;i++)
   fact=fact*i;
   printf("\n");
   printf("Entered number is %d and its factorial (%d!) is %d\n",num,num,fact);
   return 0;
}
