#include <stdio.h>
#include <unistd.h>
#include <string.h>

int current_floor = 0; // current floor of the elevator

// function to move the elevator to the specified floor
void move_elevator(int destination) {
  // move the elevator up or down until it reaches the destination floor
  while (current_floor != destination) {
    if (current_floor < destination) {
      printf("Moving up to floor %d\n", current_floor + 1);
      current_floor++;
    } else {
      printf("Moving down to floor %d\n", current_floor - 1);
      current_floor--;
    }
  }
  printf("Arrived at floor %d\n", current_floor);
}

// function to handle user input
void handle_input() {
  char destination[10];
  printf("Enter destination floor (G, 1, 2, 3, 4, 5, B1, B2, B3): ");
  scanf("%s", destination);

  // validate input
  if (strcmp(destination, "G") == 0) {
    move_elevator(0);
  } else if (strcmp(destination, "1") == 0) {
    move_elevator(1);
  } else if (strcmp(destination, "2") == 0) {
    move_elevator(2);
  } else if (strcmp(destination, "3") == 0) {
    move_elevator(3);
  } else if (strcmp(destination, "4") == 0) {
    move_elevator(4);
  } else if (strcmp(destination, "5") == 0) {
    move_elevator(5);
  } else if (strcmp(destination, "B1") == 0) {
    move_elevator(-1);
    } else if (strcmp(destination, "B2") == 0) {
    move_elevator(-2);
  } else if (strcmp(destination, "B3") == 0) {
    move_elevator(-3);
  } else {
    printf("Invalid input\n");
    return;
  }

  // ask user if they want to alight
  char alight;
  printf("Do you want to alight the elevator (y/n)? ");
  scanf(" %c", &alight);
  if (alight == 'y') {
    return;
  }
}

int main() {
  while (1) {
    handle_input();
  }
  return 0;
}
