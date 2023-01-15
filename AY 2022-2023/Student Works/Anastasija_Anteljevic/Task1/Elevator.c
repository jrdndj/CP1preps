// t1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

// Mark the different floors

typedef enum {
	GROUND,
	FIRST,
	SECOND,
	THIRD,
	FOURTH,
	FIFTH,
	BASEMENT_1,
	BASEMENT_2,
	BASEMENT_3
} Floor;

//Function prototypes
int get_user_input();
void move_elevator(Floor current_floor, int destination_floor);

int main() {
	//Initialize the current floor to the groud floor
	Floor current_floor = GROUND;

	//Continuously ask the user for input until it decides to exit

	while (1) {
		int destination_floor = get_user_input();
		if (destination_floor == -1) {
			break;
		}
		move_elevator(current_floor, destination_floor);
		current_floor == destination_floor;
	}
	return 0;
}

//Function to get the user's input

int get_user_input() {
	printf("Enter the destination floor (G,1,2,3,4,5,B1,B2,B3) or -1 to exit: ");
	char input[10];
	scanf("%s", input);

	//Check if the unput is a valid floor

	if (input[0] == 'G' && input[1] == '\0') {
		return GROUND;
	}
	else if (input[0] == '1' && input[1] == '\0') {
		return FIRST;
	}
	else if (input[0] == '2' && input[1] == '\0') {
		return SECOND;
	}
	else if (input[0] == '3' && input[1] == '\0') {
		return THIRD;
	}
	else if (input[0] == '4' && input[1] == '\0') {
		return FOURTH;
	}
	else if (input[0] == '5' && input[1] == '\0') {
		return FIFTH;
	}
	else if (input[0] == 'B' && input[1] == '1' && input[2] == '\0') {
		return BASEMENT_1;
	}
	else if (input[0] == 'B' && input[1] == '2' && input[2] == '\0') {
		return BASEMENT_2;
	}
	else if (input[0] == 'B' && input[1] == '3' && input[2] == '\0') {
		return BASEMENT_3;
	}
	else if (input[0] == '-' && input[1] == '1' && input[2] == '\0') {
		return -1;
	}
	else {
		printf("Invalid input.\n");
		return get_user_input();
	}
}

//Function to move the elevator to the specified floor

void move_elevator(Floor current_floor, int destination_floor, int num_passeengers) {
	if (destination_floor == current_floor) {
		printf("You are already on this floor.\n"); 
	}
	else if (destination_floor > current_floor) {
		printf("Going up...\n");
		for (int i = current_floor; i <= destination_floor; i++) {
			printf("Arrived at floor %d\n", i);

			//Ask the user for whether they want toalight the elevator
			printf("Do you want to alight the elevator? (y/n)");
			char input[10];
			scanf("%s", input);
			if (input[0] == 'y') {
				break;
			}

			if (i != destination_floor) {
				//Ask the user for the number of passengers
				printf("Enter the number of passengers for this floor: ");
				scanf("%d", &num_passeengers);

			}
		}
	}
	else {
		printf("Going down...\n");
		for (int i = current_floor - 1; i >= destination_floor; i--) {
			printf("Arrived at floor%d\n", i);
			if (i != destination_floor) {
				//Ask the user for the number of passengers
				printf("Enter the number of passengers for this floor: ");
				scanf("%d", &num_passeengers);
			}
		}

}

}

//Done by: Anastasija Anteljevic, 89201235, 26-12-2022