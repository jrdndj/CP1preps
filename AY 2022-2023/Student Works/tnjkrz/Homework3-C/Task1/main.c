/*
*
*		THE ELEVATOR SIMULATOR
*
*/


/*
	Addition of useful headerfiles which
	allow for the use of printf, scanf, string functions,
	etc.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> //for linux
//#include <windows.h> for windows
//Source: https://www.geeksforgeeks.org/sleep-function-in-c/

/*

	Global and Constant Variables

*/

short int entering_floor = 0; //floor you are entering the elevator on
short int passenger_count = 1; //num of passengers in the elevator (set to 1 since user is first passenger)
const int MAX_PASSENGERS = 6; //maximum amount of passengers on elevator allowed (includes user)
/*

	Functions (Modular Programming)
	Source: Computer Practicum 2022/23, Week 12 - Functions, Slide 5-6
*/

/*
	Presents user with floor options and asks 
	which floor they would like to travel to.
	The function has a void return type as it only prints
	out the instructions.
*/
void elevatorChoices(){

	//Source for printf: Computer Practicum 2022/23, Week 9 - C, Slide 19
	printf("\nIn the elevator, you are\n"
		"preseneted with 9 choices:\n"
		"B1 B2 B3 \n" 
		"G  1  2 \n" 
		"3  4  5 \n"
		"B stands for 'basement'.\n"
		"\nEnter where you want to go.\n");
}

/*

	Takes input of the string value of the desired floor from user and returns it.

	Source for pointers: https://www.geeksforgeeks.org/c-pointers/
	Source for malloc: https://www.geeksforgeeks.org/
	dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/

	malloc stands for 'memory allocate' and dynamically allocates memory. In this case,
	it allocates memory for a string of 2 characters and the return value of the malloc
	is a void char pointer.

*/
char * scanChoice(){
	char *floor_char = malloc(2 * sizeof(char));
	scanf("%s", floor_char); //Source for scanf: Computer Practicum 2022/23, Week 9 - C, Slide 19
	return floor_char;
}

/*

	Makes sure a correct floor value is inputted
	and converts the string value of the floor to its respective integer value.

	This is done in order to allow a for loop to traverse through the floors
	using integer values in the passingFloor() function.

	Uses strcmp() function to compare floor_char and a string.

	Source for strcmp: https://www.programiz.com/c-programming/library-function/string.h/strcmp

*/
//I had some problems with setting parameter to char floor_char so I had to set it as a char pointer
//and repeated this throughout the rest of the code where it was needed

//Source for if-else if-else statement: Computer Practicum 2022/23, Week 9 - C, Slide 22
short int charFloorToInt(char *floor_char){
	if (strcmp(floor_char, "B3") == 0){
		return -3;
	} else if (strcmp(floor_char, "B2") == 0){
		return -2;
	} else if (strcmp(floor_char, "B1") == 0){
		return -1;
	} else if (strcmp(floor_char, "G") == 0){
		return 0;
	} else if (strcmp(floor_char, "1") == 0){
		return 1;
	} else if (strcmp(floor_char, "2") == 0){
		return 2;
	} else if (strcmp(floor_char, "3") == 0){
		return 3;
	} else if (strcmp(floor_char, "4") == 0){
		return 4;
	} else if (strcmp(floor_char, "5") == 0){
		return 5;
	} else { //if incorrect input
		printf("Incorrect input. Try again!\n");
		charFloorToInt(scanChoice()); //calls scanChoice() and itself again
	}
	
}


/*
	This function converts the integer value of the floor to the string value.
	The floor integer values range from -3 to 5 and each denotes a specific
	floor written as a string value.

	The switch statement checks the various cases and returns appropriate string.

*/

//Source for switch: Computer Practicum 2022/23, Week 10 - C, Slide 3
char * intFloorToChar(short int floor){
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
	out when you have reached your destination floor. In between each floor,
	there is a 1.75 sec delay caused by sleep() function.

	Source for sleep() function: https://www.geeksforgeeks.org/sleep-function-in-c/

*/

void passingFloor(short int entered_floor, short int destination_floor_num){
	//checks if the current, entered through floor is lower than destination floor
	if (entered_floor < destination_floor_num){ 
	//Source for if statement: Computer Practicum 2022/23, Week 9 - C, Slide 20

		//since the entered floor is lower, the for loop increments
		for (int i = entered_floor+1; i <= destination_floor_num; ++i)
		{
			//Source for if else statement: Computer Practicum 2022/23, Week 9 - C, Slide 21
			if (i == destination_floor_num){ //if you are on destination floor, print 'arrived' message
				sleep(1.75);
				printf("You have arrived to floor %s.\n", intFloorToChar(i));
			} else { //'passing' this floor
				sleep(1.75);
				printf("You are passing floor %s.\n", intFloorToChar(i));
			}
		}//end of for loop

	//checks if the current, entered through floor is above the destination floor	
	} else if (destination_floor_num < entered_floor){

		//since the entered floor is above, the for loop decrements
		for (int i = entered_floor-1; i >= destination_floor_num; --i)
		{
			if (i == destination_floor_num){ //if you are on destination floor, print 'arrived' message
				sleep(1.75);
				printf("You have arrived to floor %s.\n", intFloorToChar(i));
			} else { //'passing' this floor
				sleep(1.75);
				printf("You are passing floor %s.\n", intFloorToChar(i));
			}
		} //end of for loop
	}
}


/*

	Prompts the user to ask several questions about leaving the elevator,
	returning to the elevator later, and which floor they would like to go to
	next, whilst using sleep() to create a delay, resetting passenger count,
	and setting the variable denoting the floor you are entering the elevator from
	to the floor destination.

*/
void leaveElevator(short int floor_destination) {
  char choice[3];

  printf("\nWould you like to leave the elevator at this floor? (yes/no) ");
  scanf("%s", choice);

  if (strcmp(choice,"yes")==0) {
    printf("\nWill you be using the elevator later? (yes/no) ");
    scanf("%s", choice);

    if (strcmp(choice,"yes")==0) {
      printf("\nSee you later!\n");
      passenger_count = 1; //'resets' passenger count for when you return
      entering_floor = floor_destination; //keeping track of last floor left elevator from
      sleep(2);
      printf("\nAfter some time, you return to the elevator.\n\n");
      sleep(2);
      
    } else {
      printf("Goodbye!\n");
      exit(0);
      
    }
  } else if (strcmp(choice,"no")==0){
    printf("\nWhich floor would you like to go to next? ");
    entering_floor = floor_destination; //keeping track of current elevator floor

  } else { //if incorrect input
  	printf("Incorrect input. Try again!");
  	leaveElevator(floor_destination); //calls itself again
  }
}


/*
	Randomly generates the number of passengers that enter the elevator.
	The constraint is (0 to (6 - number of passengers on elevator)).

	Source for rand: https://www.geeksforgeeks.org/generating-random-number-range-c/
	Used following rand() template: num = (rand() % (upper – lower + 1)) + lower 
*/
void passengerEnter(){
	short int passenger_entering = (rand() % ((MAX_PASSENGERS-passenger_count)+1));
	passenger_count += passenger_entering; //adds the num of passengers entering to count
	printf("\nNumber of passenger(s) that entered the elevator: %d\n" //prints passenger info
		"Passenger count: %d\n\n", passenger_entering, passenger_count);
}

/*
	Randomly generates the number of passengers that leave the elevator.
	The constraint is (0 to (number of passengers on elevator-1)).
	The reason it is -1 is because the user has to be excluded.

	Used following rand() template: num = (rand() % (upper – lower + 1)) + lower 
*/
void passengerLeave(){
	short int passenger_leaving = (rand() % ((passenger_count-1)+1));
	passenger_count -= passenger_leaving; //subtracts the number of passengers leaving from count
	printf("\nNumber of passenger(s) that left the elevator: %d\n" //prints passenger info
		"Passenger count: %d\n\n", passenger_leaving, passenger_count);
}


/*

	Main Function
	Source: Computer Practicum 2022/23, Week 12 - Functions, Slide 7

*/


int main(){
	short int floor_int_destination = 0; //integer version of the destination floor
	//initializes random
	srand(time(0));

	/*

		Elevator Loop
	
	*/

	printf("You have entered the elevator on the ground (G) floor.\n"
		"The elevator has a capacity of 6 passengers at a time.\n");

	//an infinite while loop (there is exit(0) in leaveElevator() function)
	//calling each of the functions in a specific order
	while (1){ 
		elevatorChoices();
		passengerEnter();
		floor_int_destination = charFloorToInt(scanChoice()); //setting variable to user's desired destination
		passingFloor(entering_floor,floor_int_destination);
		passengerLeave();
		leaveElevator(floor_int_destination);
	}


	return 0;
}//end of main
