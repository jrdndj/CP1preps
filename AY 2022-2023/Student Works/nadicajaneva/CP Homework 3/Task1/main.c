#include<stdio.h>

int main() {
	//declaring variables and initializing the current floor to 0 (G-ground floor)
	int current_floor=0, destination_floor;

	/* Enters a loop and inside the loop, it prompts the user for the destination floor
	and reads the input using scanf
	*/
	while (1) {
		printf("You are currently on floor %d. \n", current_floor);
		printf("Enter the floor number you want to go to (G, 1, 2, 3, 4, 5): ");
		char input[2];
		scanf("%s", input);
	
	if (input[0] == 'G') {
		destination_floor = 0;
	}
	else if (input[0] >= '1' && input[0] <= '5') {
		destination_floor = input[0] - '0';
	}
	/* If the input is invalid, the program prints an error message and 
	and continues to the next iteration of the loop
	*/
	else {
		printf("Invalid input. Please try again.\n");
		continue;
	}
	/* If the input is valid, the program checks if the destination floor is
	the same as the current floor. If it is, prints a message and continues 
	to the next iteration of the loop
	*/ 
	if (destination_floor == current_floor) {
		printf("You are alredy on this floor.\n");
		continue;
	}
	// If the floor is invalid, again the program prints an error message
	else if (destination_floor < 0 || destination_floor > 5) {
		printf("Invalid floor. Please try again.\n");
		continue;
	}
	/* If the destination floor is not the same as the current floor, 
	the program moves the elevator to the destination floor by printing
	a message and a list of floors as it moves.
	*/ 
	if (destination_floor > current_floor) {
		printf("Going up...\n");
	for (int i = current_floor + 1; i <= destination_floor; i++) {
		printf("Floor %d\n", i);
	}
}
	else {
		printf("Going down...\n");
	for (int i = current_floor - 1; i >= destination_floor; i--) {
		printf("Floor %d\n", i);
	}
}
	/* The program updates the current floor to the destination floor
	and contiues the loop until the user exits the program
	*/
	current_floor = destination_floor;
}//endwhile
	return 0;
}//endmain
		
