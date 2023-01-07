#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
int currFloor = 0; //Current floor
//function asking if the user wants to alight the elevator
int alight(){
  char alight;
  printf("Do you want to alight the elevator here(y/n)? ");
  scanf(" %c", &alight);
  if (alight == 'y') {
    return 0;
  }
}
//Function below is used to move to the desired floor the user has entered
int ChangeFloor(int newFloor){
  int elevator=1;
  while (currFloor != newFloor) {
    if (currFloor < newFloor) {
      printf("Going up to floor: %d\n", currFloor + 1);
      sleep(1); //small pause in between floors
      printf("You have arrived at floor: %d\n", currFloor + 1);
      elevator=alight();
      if(elevator==0){
        return 0;
      }
      currFloor++;
    } else {
        printf("Going down to floor: %d\n", currFloor - 1);
        sleep(1); //small pause in between floors
        printf("You have arrived at floor: %d\n", currFloor - 1);
        elevator=alight();
        if(elevator==0){
          return 0;
        }
        currFloor--;
      }
  }
}
// This function handles the user input
int FloorInput() {
  char destFloor[10];
  printf("Enter desired floor (B3, B2, B1, G, 1, 2, 3, 4, 5): ");
  scanf(" %s", &destFloor);
  for (int i = 0; i < strlen(destFloor); i++){//for loop to switch lowercase to uppercase letters, so that b2 an B2 are the same
    if (isalpha(destFloor[i])){
      destFloor[i]= toupper(destFloor[i]);
    }
  }
  if (strcmp(destFloor, "G") == 0) {
    if(ChangeFloor(0)==0)
      return 0;
  } else if (strcmp(destFloor, "1") == 0) {
    if(ChangeFloor(1)==0)
      return 0;
  } else if (strcmp(destFloor, "2") == 0) {
    if(ChangeFloor(2)==0)
      return 0;
  } else if (strcmp(destFloor, "3") == 0) {
    if(ChangeFloor(3)==0)
      return 0;
  } else if (strcmp(destFloor, "4") == 0) {
    if(ChangeFloor(4)==0)
      return 0;
  } else if (strcmp(destFloor, "5") == 0) {
    if(ChangeFloor(5)==0)
      return 0;
  } else if (strcmp(destFloor, "B1") == 0) {
    if(ChangeFloor(-1)==0)
      return 0;
  } else if (strcmp(destFloor, "B2") == 0) {
    if(ChangeFloor(-2)==0)
      return 0;
  } else if (strcmp(destFloor, "B3") == 0) {
    if(ChangeFloor(-3)==0)
      return 0;
  } else {
    printf("Invalid input\n");
    return 1;
  }
}
int main() {
  int elevator=1;
  while (elevator!=0) {
    elevator = FloorInput();
  }
  printf("Thank you for using the elevator. Have a good day.\n");
  return 0;
}
