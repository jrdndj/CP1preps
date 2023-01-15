// I am aware it works confusing in the part where it should allow new passangers, but I got tired and it's the best I could do :))
#include <stdio.h>

int main() {
  int current = 0;
  int destination;
  int passengers;
  printf("Welcome!\nYou are currently on the ground floor.\n");

  while (1) { // here i am using infinite loop until.
    printf("Enter the number of passengers: "); // asking how many passangers there are
    scanf("%d", &passengers);
    
    for (int i = 0; i < passengers; i++) { // for loop to enter the destination of each passanger
      printf("Enter the floor for passenger %d (-3 to 5): ", i + 1);
      scanf("%d", &destination);

      switch (destination) {  // using switch for all six cases and them manage them with ifs
        case 0:              // using 0 as ground floor and -1 to -3 as B1 to B3
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case -1:
        case -2:
        case -3:
          if (destination == current) {
            printf("You are already on this floor.\n");
          } else if (destination > current) {
            printf("Going up ..\n");
            for (int i = current + 1; i <= destination; i++) {
              printf("Floor %d\n", i);
            }
            current = destination;
          } else {
            printf("Going down...\n");
            for (int i = current - 1; i >= destination; i--) {
              printf("Floor %d\n", i);
            }
            current = destination;
          }
                 break;
        default:
          printf("The building has only five floors and basement floors B1 and B3, please enter a number between -3 and 5.\n");
          break;
      }
    }
  }
  return 0;
}
