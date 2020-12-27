#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>

int main()
{
  int i,n,numbers;
  int smallest;

  printf("\nPlease Enter How many Number you want?\n");
  scanf("%d",&n);

  printf("\nPlease Enter the elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&numbers);
     if(numbers<smallest){
        smallest=numbers;
     }
   }
   printf("The smallest number is %d ", smallest );


  return 0;
}

