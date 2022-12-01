/* 
Write a programme which prints out first n Fibonaci numbers. 
The variable n should be provided by a user.

*/	

#include <stdio.h>
int main()
{
   int f1=0, f2=1, fib_ser, cnt=2, lmt;
 
   printf("Please enter the limit of the Fibonacci series :");
   scanf("%d",&lmt);
   printf("\nFibonacci series is: \n%d \n%d \n",f1,f2);
 
   while (cnt < lmt)
   {
      fib_ser=f1+f2;
      cnt++;
      printf("%d\n",fib_ser);
      f1=f2;
      f2=fib_ser;
   }
   return 0;
}
