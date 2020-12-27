#include <stdio.h>
int main()
{
  int dN;
  int i;
  int j;
  printf("Please enter how many rows do you want to have: ");
  scanf("%d", &dN);
  for( i=dN; i>0; i--)
  {
      for(j=0;j<i;j++)
      {
       printf("*");
      }
      for(j=0; j<dN; j++)
      {
      printf(" ");
      }

      printf("\n");
  }
  return 0;
}
