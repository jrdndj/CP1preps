#include <stdio.h>

#define MIN_FLOOR 1
#define MAX_FLOOR 5
#define MIN_BASEMENT_FLOOR -3
#define MAX_BASEMENT_FLOOR -1

// Function prototypes
int getdestinationfloor();
void gotofloor(int currentfloor, int destinationfloor);

int main() {
    // Elevator starts at ground floor
    int currentfloor = 0;

    while (1) {
        printf("You are currently at floor %d.\n", currentfloor);
        int destinationfloor = getdestinationfloor();
        gotofloor(currentfloor, destinationfloor);
        currentfloor = destinationfloor;
    }

    return 0;
}

// Prompts the user for the destination floor and returns it
int getdestinationfloor() {
    int floor;
    while (1) {
        printf("Enter the floor number you want to go to (%d-%d for regular floors, %d-%d for basement floors): ", MIN_FLOOR, MAX_FLOOR, MIN_BASEMENT_FLOOR, MAX_BASEMENT_FLOOR);
        scanf("%d", &floor);
        if (floor >= MIN_FLOOR && floor <= MAX_FLOOR) {
            // Valid regular floor
            return floor;
        } else if (floor >= MIN_BASEMENT_FLOOR && floor <= MAX_BASEMENT_FLOOR) {
            // Valid basement floor
            return floor;
        } else {
            printf("Invalid floor number. Please try again.\n");
        }
    }
}

// Makes the elevator go to the specified floor
void gotofloor(int currentfloor, int destinationfloor) {
    printf("Going from floor %d to floor %d...\n", currentfloor, destinationfloor);
    // Simulate elevator movement by printing '.'s
    for (int i = 0; i < abs(destinationfloor - currentfloor); i++) {
        printf(".");
    }
    printf("\n");
}
