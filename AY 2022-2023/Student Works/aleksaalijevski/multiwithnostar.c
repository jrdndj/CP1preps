#include <stdio.h>

int main()
{
	int j, k;
   int mult = 0; 

   printf("Enter two numbers: \n");
   scanf("%d%d", &j, &k);

   //loop for multiplication
   while(k != 0)
   {
      mult += j;
      k--;
   }

   printf("\nResult = %d\n", mult);
   return 0;
}




