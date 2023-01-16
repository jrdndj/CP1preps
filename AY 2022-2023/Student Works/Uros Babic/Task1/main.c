#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void enterMessage(int wantedFloors[], int numFloor, int numPasssangers) {
  printf("\n%d People just left \n", wantedFloors[numFloor]);
  if (numFloor == 2) {
    printf("You are on the B1st Floor \n");
  }
  else if (numFloor == 1){
    printf("You are on the B2st Floor \n");
  }
  else if (numFloor == 0){
    printf("You are on the B3st Floor \n");
  }  
  else {
    printf("You are on the %d Floor \n", numFloor - 3);
  }
  printf("Currently there are %d people in the elevator. \n", numPasssangers);
  printf("Enter your wanted level and how many people want (B3/B2/B1/0-5) \n");
}

int interpretator(char input[], int numPassangers, int wantedFloors[]) {
  int level, people;
  int max_people = 5;
  char *floor;
  char *p;
  floor = strtok(input, " ");
  p = strtok(NULL, " ");
  if (floor != NULL && p != NULL) {
    if (floor[0] == 'B') {
      if(atoi(&floor[1]) == 3) {level = 0;}
      else if (atoi(&floor[1]) == 2) {level = 1;}
      else if (atoi(&floor[1]) == 1) {level = 2;}
    } else {
      level = atoi(floor) + 3;
    }
    people = atoi(p);
    if (people > max_people) {
      printf("The maximum amount of people in the elevator is 5, please enter "
             "number of people again\n");
      return numPassangers;
    }
    if (numPassangers + people <= max_people) {
      numPassangers = numPassangers + people;
      wantedFloors[level] += people;
    } else {
      printf("We cant fit that many people");
    }
  } else {
    printf("Invalid input, please enter a valid floor level and number of "
           "people\n");
  }
  return numPassangers;
}

bool direction(int wantedFloors[], int currentFloor, bool directionVar) {
    if(directionVar) {
        for (int i = currentFloor + 1; i < 9; i++) {
            if (wantedFloors[i] != 0)
                return true;
        }
        return false;
    } else {
        for (int i = currentFloor - 1; i >= 0; i--) {
            if (wantedFloors[i] != 0)
                return false;
        }
        return true;
    }
}


void elevator() {
  int numPasssangers = 0, currentFloor = 3;
  int wantedFloors[9];
  char input[10];
  bool directionVar = true;
  for (int i = 0; i < 10; i++) {
    wantedFloors[i] = 0;
  }
  while (input[0] != 'E') {
    numPasssangers -= wantedFloors[currentFloor];
    enterMessage(wantedFloors, currentFloor,numPasssangers);
    wantedFloors[currentFloor] = 0;
    fgets(input, sizeof(input), stdin);
    numPasssangers = interpretator(input, numPasssangers, wantedFloors);
    directionVar = direction(wantedFloors, currentFloor, directionVar);
    if (directionVar) {
      currentFloor++;
    } else {
        currentFloor--;
    }
  }
}

int main() {
  elevator();
  return 0;
}