#include <stdio.h>

int main() {

    //Declare variables
   int a[30], i, num, smallest;

   //Ask user for number of elements, in this case 10;
   printf("Please enter the number of elements in array: \n");
   scanf("%d", &num);

   //Read n elements in an array
   for (i = 0; i < num; i++)
      scanf("%d", &a[i]);

   //Consider first element as smallest
   smallest = a[0];

   for (i = 0; i < num; i++) {
      if (a[i] < smallest) {
         smallest = a[i];
      }
   }

   // Print out the result
   printf("Smallest element in array is: %d", smallest);

   return (0);
}



