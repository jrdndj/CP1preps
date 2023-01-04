#include <stdio.h>
// Function to move the elevator to the specified floor
void moveElevator(int dCurrentFloor, int dDesiredFloor){
    if (dCurrentFloor < dDesiredFloor){
        //for loop to print the floors we are passing by, when going up
        printf("Going up: ");
        for (int i = dCurrentFloor + 1; i <= dDesiredFloor; i++){
            printf("%d\n", i);
        }
        printf("Arrived on %d floor\n", dDesiredFloor);
    }
    else if (dCurrentFloor > dDesiredFloor){
        //for loop to print the floors we are passing by, when going down
        printf("Going down: ");
        for (int i = dCurrentFloor - 1; i >= dDesiredFloor; i--){
            printf("%d\n", i);
        }
        printf("\nArrived on %d floor\n", dDesiredFloor);
    }
    else if (dCurrentFloor == dDesiredFloor) {
        printf("You are already on %d floor. Choose another floor to go.\n", dDesiredFloor);
    }
}
int main(){
  int dCurrentFloor = 0; // current floor of the elevator
  int dDestinationFloor; // destination floor for the elevator

  printf("Welcome to the elevator simulator!\n");
  printf("Current floor: %d\n", dCurrentFloor);

  // Keep looping until the user chooses to exit
  while (1){
    printf("\nEnter destination floor (0-5, or 6 to exit the elevator): ");
    scanf("%d", &dDestinationFloor);

    // If the user wants to exit, break out of the loop
    if (dDestinationFloor == 6){
      break;
    }

    // Validate the input
    if (dDestinationFloor < 0 || dDestinationFloor > 5){
      printf("Invalid input. Please try again.\n");
      continue;
    }

    // Move the elevator to the destination floor
    moveElevator(dCurrentFloor, dDestinationFloor);

    // Update the current floor
    dCurrentFloor = dDestinationFloor;
    }

  printf("Thanks for using elevator.\nI hope you enjoyed and saved your time!\n");

  return 0;
}
