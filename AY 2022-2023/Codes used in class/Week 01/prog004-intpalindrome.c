/* 
Write a programme which checks whether an entered number is a palindrome.

*/
#include <stdio.h>
int main()
{
   int number, t, rev=0, rmndr;
 
   printf("Please enter a number to check Palindrome : ");
   scanf("%d",&number);
   printf("\nEntered number: %d", number);
 
   t = number;
 
   while (number > 0)
   {
      rmndr = number%10;
      rev = rev*10 + rmndr;
      number = number/10;
   }
   printf("\nReversed number: %d", rev);
 
   if(t == rev)
   {
      printf("\nEntered number %d is a palindrome", t);
   }
   else
   {
      printf("\nEntered number %d is not a palindrome", t);
   }
   return 0;
}
