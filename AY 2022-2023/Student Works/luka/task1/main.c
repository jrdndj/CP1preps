#include <stdio.h>

void moveElevator(int currentFloor, int destinationFloor);
int getValidFloorInput();

int main() {
  int currentFloor = 0; 
  int destinationFloor;

  while (1) {
    printf("What floor do you want to go to? (-3, -2, -1, 0, 1, 2, 3, 4, 5). To exit press 6: ");
    destinationFloor = getValidFloorInput();

    if (destinationFloor == 6) {
      printf("Goodbye\n");
      break;
    }

    moveElevator(currentFloor, destinationFloor);
    currentFloor = destinationFloor;
  }
  return 0;
}
//func to move elevator
void moveElevator(int currentFloor, int destinationFloor) {

  if (destinationFloor > currentFloor) {
    printf("Going up...\n");
    for (int i = currentFloor + 1; i <= destinationFloor; i++) {
      printf("Floor %d...\n", i);
    }//end for
  }
  else if (destinationFloor < currentFloor) {
    printf("Going down...\n");
    for (int i = currentFloor - 1; i >= destinationFloor; i--) {
      printf("Floor %d...\n", i);
    }//end for
  }
  else {
    printf("Already at floor %d\n", currentFloor);
  }
}

int getValidFloorInput() {
  int input;
  int floor = 6;
  while (1) {
    scanf(" %d", &input);
    switch (input) {
      case -3:
        floor = -3;
        break;
      case -2:
        floor = -2;
        break;
      case -1:
        floor = -1;
        break;
      case 0:
        floor = 0;
        break;
      case 1:
        floor = 1;
        break;
      case 2:
        floor = 2;
        break;
      case 3:
        floor = 3;
        break;
      case 4:
        floor = 4;
        break;
      case 5:
        floor = 5;
        break;
      case 6:
        floor = 6;
        break;
        scanf("%d", &floor);
        break;
      default:
        printf("Invalid input. Please enter a valid floor number (-3, -2, -1, 0, 1, 2, 3, 4, 5) or press 6 to exit: ");
        continue;
      }
    break;
  }
  return floor;
}
