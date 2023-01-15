#include <stdio.h>  // for printf and scanf
#include <stdlib.h> // for system function

// Function to get user input for the destination floor
int getDestination() {
    int floor;
    char input[2];  // array to hold user input

    // prompt user for destination floor
    printf("Enter destination floor (G, 1, 2, 3, 4, 5): ");
    scanf("%s", input);  // store user input in input array

    // switch statement to determine destination floor based on user input
    switch (input[0]) {
        case 'G':  // if input is 'G', set floor to 0
            floor = 0;
            break;
        case '1':  // if input is '1', set floor to 1
            floor = 1;
            break;
        case '2':  // if input is '2', set floor to 2
            floor = 2;
            break;
        case '3':  // if input is '3', set floor to 3
            floor = 3;
            break;
        case '4':  // if input is '4', set floor to 4
            floor = 4;
            break;
        case '5':  // if input is '5', set floor to 5
            floor = 5;
            break;
        default:  // if input is invalid
            // print error message and return -1
            printf("Invalid input.\n");
            floor = -1;
    }

    return floor;  // return destination floor
}

// Function to move the elevator to the destination floor
void goToFloor(int current, int destination) {
    // print message indicating the elevator is moving to the destination floor
    printf("Going from floor %d to floor %d.\n", current, destination);
}

int main() {
    int currentFloor = 0;  // current floor is ground floor

    // infinite loop to allow the elevator to keep functioning until program is terminated
    while (1) {
        // print message indicating the current floor
        printf("You are currently on floor %d.\n", currentFloor);

        int destination = getDestination();  // get destination floor from user input
        if (destination == -1) {  // if destination is invalid
            // get input again
            continue;
        }

        goToFloor(currentFloor, destination);  // move the elevator to the destination floor
        currentFloor = destination;  // update current floor
    }

    return 0;
}
