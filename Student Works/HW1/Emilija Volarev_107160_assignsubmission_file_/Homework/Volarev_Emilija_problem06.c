#include <stdio.h>

int main(){

  int array[100], size, c, location = 0;

  printf("Enter 10 integers:\n");

  for (c = 0; c < 10; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
    if (array[c] < array[location])
      location = c;

  printf("Minimum element is %d.\n", array[location]);

  return 0;
}
