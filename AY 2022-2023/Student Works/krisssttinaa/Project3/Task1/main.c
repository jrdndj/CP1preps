#include <stdio.h>
//Library for a Boolean data type (to use true in while loop)
#include <stdbool.h>
//library for additional funtions
#include <ctype.h>
//library for characters-string
#include <string.h>

//Declaration of a function (prototype)
//To move from one floor to another
void moveTo(int currentFloor, int desiredFloor);
//To check if the user's input is valid
char* checkIfValid(int* desiredFloor);
void changeType(char* sDesiredFloor, int* dDesiredFloor);

int main() {
  char sCurrentFloor[3] = "G";
  int dCurrentFloor = 0;

  while (true) {
    printf("Current floor: %s\n", sCurrentFloor);
    printf("Enter a destination floor (B3, B2, B1, G, 1, 2, 3, 4, 5): ");

    int dDesiredFloor = 0;
    char sDesiredFloor[3] = "";
    strcpy(sDesiredFloor, checkIfValid(&dDesiredFloor));

    moveTo(dCurrentFloor, dDesiredFloor);

    dCurrentFloor = dDesiredFloor;
    changeType(sDesiredFloor, &dDesiredFloor);
    strcpy(sCurrentFloor, sDesiredFloor);

    printf("Do you want to alight? (y/n) ");
    char cContinue;
    scanf(" %c", &cContinue);

    if (cContinue == 'y' || cContinue == 'Y') {
      printf("Thanks for using the elevator.\nI hope you enjoyed and saved your time!");
        break;
    }
  }

  return 0;
}

void moveTo(int dCurrentFloor, int dDesiredFloor) {
  if (dCurrentFloor == dDesiredFloor) {
    printf("You are already on this floor.\n");
    return;
  }

  if (dCurrentFloor < dDesiredFloor) {
    printf("Going up: ");
    for (int i = dCurrentFloor + 1; i <= dDesiredFloor; i++) {
      printf("%d ", i);
    }
  }
  else {
    printf("Going down: ");
    for (int i = dCurrentFloor - 1; i >= dDesiredFloor; i--) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

char* checkIfValid(int* desiredFloor) {
  //Address of stack memory associated with local variable 'sDesiredFloor' returned
  //so, I add static
  //this will allocate space for matches in the static space and not on the stack
  static char sDesiredFloor[3];
  scanf("%s", sDesiredFloor);

  if (strcmp(sDesiredFloor, "B3") == 0) {
    *desiredFloor = -3;
    return sDesiredFloor;
  }
  else if (strcmp(sDesiredFloor, "B2") == 0) {
    *desiredFloor = -2;
    return sDesiredFloor;
  }
  else if (strcmp(sDesiredFloor, "B1") == 0) {
    *desiredFloor = -1;
    return sDesiredFloor;
  }
  else if (strcmp(sDesiredFloor, "G") == 0) {
    *desiredFloor = 0;
    return sDesiredFloor;
  }
  else if (isdigit(sDesiredFloor[0]) && sDesiredFloor[1] == '\0') {
    *desiredFloor = sDesiredFloor[0] - '0';
    return sDesiredFloor;
  }
  else {
    printf("Invalid input. Please enter a valid destination floor (B3, B2, B1, G, 1, 2, 3, 4, 5): ");
    return checkIfValid(desiredFloor);
  }
}

void changeType(char* sDesiredFloor, int* dDesiredFloor) {
  if (*dDesiredFloor == -3) {
    sDesiredFloor[0] = 'B';
    sDesiredFloor[1] = '3';
  }
  else if (*dDesiredFloor == -2) {
    sDesiredFloor[0] = 'B';
    sDesiredFloor[1] = '2';
  } 
  else if (*dDesiredFloor == -1) {
    sDesiredFloor[0] = 'B';
    sDesiredFloor[1] = '1';
  }
  else if (*dDesiredFloor == 0) {
    sDesiredFloor[0] = 'G';
  }
  else {
    sDesiredFloor[0] = *dDesiredFloor + '0';
  }
}
