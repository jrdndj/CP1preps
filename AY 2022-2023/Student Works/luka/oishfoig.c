#include <stdio.h>

int main()
{
  int darr[10], d, dCtr, swap;

  for (dCtr = 0; dCtr < 10; dCtr++)
    scanf("%d", &darr[dCtr]);

  for (dCtr = 0 ; dCtr < 10 - 1; dCtr++)
  {
    for (d = 0 ; d < 10 - dCtr - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (dCtr = 0; dCtr < n; dCtr++)
     printf("%d\n", array[dCtr]);

  return 0;
}
