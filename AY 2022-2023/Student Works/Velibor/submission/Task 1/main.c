#include <stdio.h>
#include <ctype.h>

#define NUM_FLOORS 9


//THIS IS THE FINAL AND COMPLETE VERSION OF MY ELEVATORGAME

// Initializes the current floor at the ground floor
int currentFloor = 0;

// Prompts the user to enter the floor they want to go to
// and returns the floor number
int getDestinationFloor() {
    char floor;
    printf("Enter the floor you want to go to (G, 1, 2, 3, 4, 5, B1, B2, B3): ");
    scanf(" %c", &floor);
    floor = toupper(floor);
    if (floor == 'G') {
        return 0;
    }//endifGroundFloor
     else if (isdigit(floor)) {
        return floor - '0';
    }//endelseif
     else if (floor == 'B') {
        int basementFloor;
        scanf("%d", &basementFloor);
        // Check if the basement floor number is valid
        if (basementFloor >= 1 && basementFloor <= 3) {
            return -basementFloor;
        }//endifFloorLimitation 
        else {
            printf("Invalid basement floor!\n");
            return -1;
        }//endelseInvalidBasementFloor
    }//endelseBasementFloor 
    else {
        printf("Invalid floor!\n");
        return -1;
    }//endelseInvalidFloor
}//endgetDestinationFloor



// Simulates the elevator going up one floor
void goUp() {
    if (currentFloor == NUM_FLOORS) {
        printf("You are already on the top floor!\n");
        return;
    }//endifTopFloor
    currentFloor++;
    printf("Going up to floor %d\n", currentFloor);
}//endgoUpFunction

// Simulates the elevator going down one floor
void goDown() {
    if (currentFloor == -3) {
        printf("You are already on the lowest basement floor!\n");
        return;
    }//endifLowestBasementFloor
    currentFloor--;
    printf("Going down to floor %d\n", currentFloor);
}//endgoDownFunction

// Simulates the elevator moving to the specified floor
void goToFloor(int floor) {
    if (floor < -3 || floor > NUM_FLOORS) {
        printf("Invalid floor!\n");
        return;
    }//endifInvalidFloor
    printf("Going from floor %d to floor %d\n", currentFloor, floor);
    while (currentFloor != floor) {
        // If the destination is below the current floor, go down
        // Otherwise, go up
        if (floor < currentFloor) {
            goDown();
        }//endifDestinationBelowCurrentFloor 
        else {
            goUp();
        }//endelseDestinationAboveCurrentFloor
    }//endwhile
}//endgoToFloorFunction
int main() {
    printf("Welcome to the elevator! You are currently on the ground floor.\n");
    int numPassengers;
    printf("Enter the number of passengers: ");
    scanf("%d", &numPassengers);
    while (numPassengers > 0) {
        // Get the destination floor from the user
        int destination;
        do {
            destination = getDestinationFloor();
        }//enddo 
        while (destination < -3 || destination > NUM_FLOORS || destination == -1);

        // If the elevator is empty, print a message when the first passenger boards
        if (numPassengers == 1) {
            printf("Passenger %d boards the elevator\n", numPassengers);
        }//endifElevatorEmpty
        // If there are already passengers on the elevator, print a message when a new passenger boards
        else {
            printf("Passenger %d boards the elevator with %d other passenger(s)\n", numPassengers, numPassengers - 1);
        }//endelseNewPassengerBoards

        // Go to the destination floor
        goToFloor(destination);
        // Print a message when the passenger exits the elevator
        printf("Passenger %d exits the elevator at floor %d\n", numPassengers, currentFloor);
        // Decrease the number of passengers by 1
        numPassengers--;
        // Print the updated number of passengers
        printf("There are now %d passenger(s) in the elevator\n", numPassengers);
    }//endwhile
    printf("Thank you for using the elevator!\n");
    return 0;
}//endmain


