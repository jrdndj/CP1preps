/*
  
  Elevator Simulator

*/


/*
	Addition of useful headerfiles which
	allow for the use of printf, scanf, string functions,
	etc.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char floorChar[2];

/*
	Function that presents the user with floor options
	and asks which floor they would like to travel to.
	The function has a void return type as it only prints
	out the instructions.
*/

void elevatorChoices(){
	printf("Ding! You enter the elevator\n"
		"and are preseneted with 9 choices:\n"
		"B1 B2 B3 \n" 
		"G  1  2 \n" 
		"3  4  5 \n"
		"\nWhere would you like to go?\n");
}

// This function takes input of the string value of the floor from user

void scanChoice(){
	scanf("%s", floorChar);
}


/*

	This functions makes sure a correct floor value is inputted
	and converts the string value of the floor to its respective integer value.

	This is done in order to allow a for loop to traverse through the floors
	using integer values in the passingFloor() function, as well as to save
	ADD HERE TO FINISH

*/


int toFloorRequest(char * floor){
	if (strcmp(floor, "B3") == 0){
		return -3;
	} else if (strcmp(floor, "B2") == 0){
		return -2;
	} else if (strcmp(floor, "B1") == 0){
		return -1;
	} else if (strcmp(floor, "G") == 0){
		return 0;
	} else if (strcmp(floor, "1") == 0){
		return 1;
	} else if (strcmp(floor, "2") == 0){
		return 2;
	} else if (strcmp(floor, "3") == 0){
		return 3;
	} else if (strcmp(floor, "4") == 0){
		return 4;
	} else if (strcmp(floor, "5") == 0){
		return 5;
	} else {
		printf("Incorrect input. Try again!\n");
		scanChoice();
		toFloorRequest(floorChar);
	}
	
}


/*
	This function converts the integer value of the floor to the string value.
	The floor integer values range from -3 to 5 and each denotes a specific
	floor written as a string value.

*/

char * intFloorToChar(int floor){
	switch (floor) {
		case -3:
			return "B3";
			break;
		case -2:
			return "B2";
			break;
		case -1:
			return "B1";
			break;
		case 0:
			return "G";
			break;
		case 1:
			return "1";
			break;
		case 2:
			return "2";
			break;
		case 3:
			return "3";
			break;
		case 4:
			return "4";
			break;
		case 5:
			return "5";
			break;
		default:
			break;
	}
}


/*

	This function prints out which floors you are passing (excludes the
	floor you are currently on and the destination floor) and also prints
	out when you have reached your destination floor. ADD HERE LATER

*/

void passingFloor(int enteredFloor, int destinationFloorNum){

	//checks if the current, entered through floor is lower than destination floor
	if (enteredFloor < destinationFloorNum){

		//since the entered floor is lower, the for loop increments
		for (int i = enteredFloor+1; i <= destinationFloorNum; ++i)
		{
			if (i == destinationFloorNum){
				printf("You have arrived to floor %s.\n", intFloorToChar(i));
			} else {
				printf("You are passing floor %s.\n", intFloorToChar(i));
			}
		}//end of for loop

	//checks if the current, entered through floor is above the destination floor	
	} else if (destinationFloorNum < enteredFloor){

		//since the entered floor is above, the for loop decrements
		for (int i = enteredFloor-1; i >= destinationFloorNum; --i)
		{
			if (i == destinationFloorNum){
				printf("You have arrived to floor %s.\n", intFloorToChar(i));
			} else {
				printf("You are passing floor %s.\n", intFloorToChar(i));
			}
		} //end of for loop
	}
}



void leaveElevator() {
  char choice;
  int floor;

  printf("Would you like to leave the elevator at this floor? (Y/N) ");
  scanf("%c", &choice);

  if (choice == 'Y' || choice == 'y') {
    printf("Will you be travelling with the elevator later? (Y/N) ");
    scanf("%c", &choice);

    if (choice == 'Y' || choice == 'y') {
      printf("See you later!\n");
      return;
    } else {
      printf("Goodbye!\n");
      return;
    }
  } else {
    printf("Which floor would you like to go to next? ");
    scanf("%d", &floor);
    printf("Okay, going to floor %d.\n", floor);
  }
}


/*
int checkOtherPassengers() {
	printf("Did anyone else enter on current floor?\n"
		"If yes, input number of passengers.\n"
		"If no, type 0.\n");
	scanf("%d", passengerNumber *);
	return passengerNumber;
}
*/


//main method
int main() {
	int floorDes = 0;
	int enteringFloor = 0;
	int passNum = 0;
	elevatorChoices();

	scanChoice();
	floorDes = toFloorRequest(floorChar);
	passingFloor(enteringFloor, floorDes);
	leaveElevator();

	//printf("%s\n", floorChar);
	//printf("%d", floorDes);

	return 0;

}//end of main
