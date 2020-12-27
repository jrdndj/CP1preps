
#include <stdio.h>

int main() {
  int dArray[10]; // array of 10 numbers

  printf("Enter 10 integers: "); // User Info text

  // Taking input and putting it in Array
  for(int i = 0; i < 10; ++i) {
     scanf("%d", &dArray[i]); // until 10 takes the user input
  }
   // For and if statement for even numbers
  printf("All Even Numbers are: ");
  for(int i = 0; i < 10; ++i) {
      if (dArray[i] % 2 == 0) { // If the module of 2 is 0 then it's an even number
          printf("%d ", dArray[i]);
      }
  }
   printf("\nAll Odd Numbers are: ");
  for(int i = 0; i < 10; ++i) {
      if (dArray[i] % 2 == 1) { // If the module of 2 is 1 then it's an odd number
          printf("%d ", dArray[i]);
      }
  }
}