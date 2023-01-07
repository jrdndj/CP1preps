#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

int current_floor = 0; // current floor of the elevator

//function to promt the user whether they want to alight the elevator
int alight(){
  char alight;
  printf("Do you want to alight the elevator here(y/n)? ");
  scanf(" %c", &alight);
  if (alight == 'y') {
    return 0;
  }
}

// function to move the elevator to the specified floor
int move_elevator(int destination) {
  // move the elevator up or down until it reaches the destination floor
  int end=1;
  while (current_floor != destination) {
    if (current_floor < destination) {
      printf("Moving up to floor %d\n", current_floor + 1);
      sleep(1); //small pause in between floors
      printf("Arrived at floor %d\n", current_floor + 1);
      end=alight();
      if(end==0){
        return 0;
      }
      current_floor++;
    } else {
        printf("Moving down to floor %d\n", current_floor - 1);
        sleep(1); //small pause in between floors
        printf("Arrived at floor %d\n", current_floor - 1);
        end=alight();
        if(end==0){
          return 0;
        }
        current_floor--;
      }
  }
}

// function to handle user input
int handle_input() {
  char destination[10];
  printf("Enter destination floor (B3, B2, B1, G, 1, 2, 3, 4, 5): ");
  scanf("%s", destination);
  for (int i = 0; i < strlen(destination); i++){//for loop to switch lowercase to uppercase letters, so that b2 an B2 are the same
    if (isalpha(destination[i])){
      destination[i]= toupper(destination[i]);
    }
  }
  

  // validate input
  if (strcmp(destination, "G") == 0) {
    if(move_elevator(0)==0)
      return 0;
  } else if (strcmp(destination, "1") == 0) {
    if(move_elevator(1)==0)
      return 0;
  } else if (strcmp(destination, "2") == 0) {
    if(move_elevator(2)==0)
      return 0;
  } else if (strcmp(destination, "3") == 0) {
    if(move_elevator(3)==0)
      return 0;
  } else if (strcmp(destination, "4") == 0) {
    if(move_elevator(4)==0)
      return 0;
  } else if (strcmp(destination, "5") == 0) {
    if(move_elevator(5)==0)
      return 0;
  } else if (strcmp(destination, "B1") == 0) {
    if(move_elevator(-1)==0)
      return 0;
  } else if (strcmp(destination, "B2") == 0) {
    if(move_elevator(-2)==0)
      return 0;
  } else if (strcmp(destination, "B3") == 0) {
    if(move_elevator(-3)==0)
      return 0;
  } else {
    printf("Invalid input\n");
    return 1;
  }
}

int main() {
  int end=1;
  while (end!=0) { //In the above functions, they will return 0 only if 
                  //you enter y to alight the elevator, else they return 1, 
                  //which repeats the while loop and starts the process again.
    end = handle_input();
  }
  printf("Goodbye, have a nice day! \n");
  return 0;
}
