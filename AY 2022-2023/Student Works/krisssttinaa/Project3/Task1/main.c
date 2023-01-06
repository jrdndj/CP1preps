#include <stdio.h>
//Library for a Boolean data type (to use true in while loop)
#include <stdbool.h>
//library for additional funtions
#include <ctype.h>
//library for characters-string
#include <string.h>
//library to use function sleep()
#include<unistd.h> //for Linux and Mac
//#include<windows.h> //for windows

//Functions to move from one floor to another
/*The function prompts the user to enter the number of passengers entering the elevator and leaving the elevator, 
and checks if the new number of passengers will exceed the maximum capacity of the elevator. 
If it will, it adjusts the number of new passengers accordingly. 
The function then prints the floor numbers the elevator passes as it moves to the desired floor, 
and returns the final number of passengers in the elevator. */

int moveWithPassangersTo(short dCurrentFloor, int pdDesiredFloor, short dPassengers, short dMaxPassengers) {
  if (dCurrentFloor == pdDesiredFloor) {
    printf("You are already on this floor.\n");
    return dPassengers;
  }
  //Calculate and print the number of passengers entering the elevator
  int dNewPassengers = 0;
  printf("Enter the number of passengers entering the elevator: ");
  scanf("%d", &dNewPassengers);
  //check if scanned int is not negative
  if ( dNewPassengers < 0) {
    printf("Invalid input. Please enter a valid number of passengers.\n");
    return moveWithPassangersTo(dCurrentFloor, pdDesiredFloor, dPassengers, dMaxPassengers); //call this funtion again to run once again
  }
  /*I can subtract a short from an int in C. The result will be an int type. 
  The short will be converted to an int before the subtraction is performed. 
  This is known as integer promotion.*/
  if (dNewPassengers + dPassengers > dMaxPassengers) {
    printf("Sorry, the elevator is full. %d passengers can't enter.\n", dNewPassengers + dPassengers - dMaxPassengers);
    dNewPassengers = dMaxPassengers - dPassengers;
  }
  dPassengers += dNewPassengers;
  
  //Calculate and print the number of passengers leaving the elevator
  int dLeavingPassengers = 0;
  printf("Enter the number of passengers leaving the elevator: ");
  scanf("%d", &dLeavingPassengers);
  //check if scanned int is not negative
  if ( dLeavingPassengers < 0) {
    printf("Invalid input. Please enter a valid number of passengers.\n");
    return moveWithPassangersTo(dCurrentFloor, pdDesiredFloor, dPassengers, dMaxPassengers); //call this funtion again to run once again
  }
  if (dLeavingPassengers > dPassengers) {
    printf("There aren't that many passengers in the elevator. %d passengers can't leave.\n", dLeavingPassengers - dPassengers);
    dLeavingPassengers = dPassengers;
  }
  dPassengers -= dLeavingPassengers;

  //Move the elevator
  if (dCurrentFloor < pdDesiredFloor) {
    printf("\nGoing up: ");
    for (int i = dCurrentFloor + 1; i <= pdDesiredFloor; i++) {
      printf("\n     %d ", i);
      sleep(1); //passed floors will be printed with delay of 1 second
    }
  }
  else {
    printf("\nGoing down: ");
    for (int i = dCurrentFloor - 1; i >= pdDesiredFloor; i--) {
      printf("\n     %d ", i);
      sleep(1); //passed floors will be printed with delay of 1 second
    }
  }
  printf("\n");
  return dPassengers;
}

//To take and check if the user's input is valid
/*The checkIfValid function takes an integer pointer as an argument 
and returns a character pointer. It reads in a string input and checks 
if it is a valid floor number. If it is, it converts the floor number 
to an integer and stores it in the integer pointed to by the argument, 
and returns the string. If the input is not a valid floor number, it returns 0.*/

char* checkIfValid(int* pdDesiredFloor) {
  //Address of stack memory associated with local variable 'sDesiredFloor' returned
  //so, I add static
  //this will allocate space for 'sDesiredFloor' in the static space and not on the stack
  static char sDesiredFloor[3];
  scanf("%s", sDesiredFloor);

  if (strcmp(sDesiredFloor, "B3") == 0) {
    *pdDesiredFloor = -3;
    return sDesiredFloor;
  }
  else if (strcmp(sDesiredFloor, "B2") == 0) {
    *pdDesiredFloor = -2;
    return sDesiredFloor;
  }
  else if (strcmp(sDesiredFloor, "B1") == 0) {
    *pdDesiredFloor = -1;
    return sDesiredFloor;
  }
  else if (strcmp(sDesiredFloor, "G") == 0) {
    *pdDesiredFloor = 0;
    return sDesiredFloor;
  }
  else if (isdigit(sDesiredFloor[0]) && sDesiredFloor[1] == '\0') {
      *pdDesiredFloor = sDesiredFloor[0] - '0';
      if (*pdDesiredFloor<=5 && *pdDesiredFloor>=-3) { //check if numbers are -3 to 5
        return sDesiredFloor;
      }
      else{
        printf("Invalid input. Please enter a valid destination floor (B3, B2, B1, G, 1, 2, 3, 4, 5): ");
        return checkIfValid(pdDesiredFloor); //call this funtion again to run once again
      }
  }
  else if(strcmp(sDesiredFloor, "E") == 0){
    *pdDesiredFloor = 10;
    return sDesiredFloor;
  }
  else {
    printf("Invalid input. Please enter a valid destination floor (B3, B2, B1, G, 1, 2, 3, 4, 5): ");
    return checkIfValid(pdDesiredFloor); //call this funtion again to run once again
  }
}

//Change user's input-chars to integers
//to be able to move the elevator in function moveTo
void changeType(char* sDesiredFloor, int* pdDesiredFloor) {
  if (*pdDesiredFloor == -3) {
    sDesiredFloor[0] = 'B';
    sDesiredFloor[1] = '3';
    //sDesiredFloor[2] = '\0';
  }
  else if (*pdDesiredFloor == -2) {
    sDesiredFloor[0] = 'B';
    sDesiredFloor[1] = '2';
    //sDesiredFloor[2] = '\0';
  } 
  else if (*pdDesiredFloor == -1) {
    sDesiredFloor[0] = 'B';
    sDesiredFloor[1] = '1';
    //sDesiredFloor[2] = '\0';
  }
  else if (*pdDesiredFloor == 0) {
    sDesiredFloor[0] = 'G';
    //sDesiredFloor[1] = '\0';
  }
  else {
    sDesiredFloor[0] = *pdDesiredFloor + '0';
    //sDesiredFloor[1] = '\0';
  }
}

//Main function
int main() {
  //Declare variables
  char sCurrentFloor[3] = "G"; //starting floor is Ground
  short dCurrentFloor = 0;
  short dMaxPassengers = 8;
  short dPassengers=0;

  printf("\n Welcome!\n *You enter the elevator*\n");

  while (true) {
    //Declare variables
    int pdDesiredFloor = 0;
    char sDesiredFloor[3] = "";

    //Display the current floor
    printf("\nCurrent floor: %s\n", sCurrentFloor);
    //Ask for the input
    printf("\n 5  4  3\n 2  1  G\n B1 B2 B3\n");
    printf("\nChoose destination floor (E-exit programme):");
    
    //The strcpy function is a standard C library function
    //it copies the characters in the string returned by the checkIfValid function to the sDesiredFloor string
    strcpy(sDesiredFloor, checkIfValid(&pdDesiredFloor));
    
    //If E (it was changed to 10 in checkValid), exit the programme
    if(pdDesiredFloor==10){
      break;
    }

    //How many passengers there are
    dPassengers=moveWithPassangersTo(dCurrentFloor, pdDesiredFloor, dPassengers, dMaxPassengers);
    printf("\nNumber of passengers in the elevator: %hd\n", dPassengers);

    //Update the current floor
    dCurrentFloor = pdDesiredFloor;

    changeType(sDesiredFloor, &pdDesiredFloor);
    strcpy(sCurrentFloor, sDesiredFloor);

    //Ask the user if he/she wants to leave the elevator
    printf("\nDo you want to alight? (y/n) ");
    char cContinue;
    scanf(" %c", &cContinue);
    if (cContinue == 'y' || cContinue == 'Y') {
      printf("\nThanks for using the elevator.\nI hope you enjoyed and saved your time!\n");
      printf("\n*You leave the elevator*\n");
      break;
    }
  }//end of while
  return 0;
}//end of main

//Indicate (per item) all the lessons and concepts used and if possible indicate the specific parts and syntax applied.
/*Functions (Modular Programming). From: Computer Practicum 2022/23, Week 12 - Functions
-Main function from: Computer Practicum 2022/23, Week 12 - Functions
-While loop from: Computer Practicum 2022/23, Week 9 - C
-If statement from: Computer Practicum 2022/23, Week 9 - C, Slide 21
-sleep() function from: https://www.geeksforgeeks.org/sleep-function-in-c/
-Pointers (how to use) from: https://www.programiz.com/c-programming/c-pointers, https://www.tutorialspoint.com/cprogramming/c_pointers.htm*/

//done by Kristina Piiarska 89221337
