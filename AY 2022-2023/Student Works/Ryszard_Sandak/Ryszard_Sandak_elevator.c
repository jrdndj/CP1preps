#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h> // Include the toupper() function

// Function to get the user's input floor choice
int get_floor_choice() {
    char choice[3];
    printf("Enter floor choice (B3, B2, B1, G, 1, 2, 3, 4, 5): ");
    scanf("%s", choice);

    // Convert basement floor choices to corresponding negative values
    if (strcmp(choice, "B1") == 0) {
        return -1;
    } else if (strcmp(choice, "B2") == 0) {
        return -2;
    } else if (strcmp(choice, "B3") == 0) {
        return -3;
    }

    // Convert "G" to 0 for the Ground floor
    if (strcmp(choice, "G") == 0) {
        return 0;
    }

    // Convert string input to integer using strtol() function
    char *endptr;
    int floor = (int)strtol(choice, &endptr, 10);
    if (*endptr != '\0') {
        floor = -999; // Invalid input, set to a recognizable value
    }
    return floor;
}

// Function to check if the floor choice is valid
int is_floor_valid(int floor) {
    return (floor >= -3 && floor <= 5);
}

// Function to simulate elevator movement
void operate_elevator() {
    int current_floor = 0; // Start at the Ground floor

    while (1) {
        int floor_choice = get_floor_choice();

        // Validate the floor choice
        if (!is_floor_valid(floor_choice)) {
            printf("Invalid floor choice. Please enter a valid floor.\n");
            continue;
        }

        // Move the elevator
        if (floor_choice > current_floor) {
            printf("Elevator is going up...\n");
            while (current_floor < floor_choice) {
                printf("Elevator reached floor %d.\n", ++current_floor);
            }
        } else if (floor_choice < current_floor) {
            printf("Elevator is going down...\n");
            while (current_floor > floor_choice) {
                printf("Elevator reached floor %d.\n", --current_floor);
            }
        }

        // User exits the elevator
        if (current_floor < 0) {
            printf("You have arrived at basement B%d. Do you want to exit? (Y/N): ", -current_floor);
        } else {
            printf("You have arrived at floor %d. Do you want to exit? (Y/N): ", current_floor);
        }

        char choice;
        while (1) {
            scanf(" %c", &choice);
            choice = toupper(choice);

            if (choice == 'Y') {
                if (current_floor < 0) {
                    printf("You exited at basement B%d.\n", -current_floor);
                } else {
                    printf("You exited at floor %d.\n", current_floor);
                }
                return;
            } else if (choice == 'N') {
                break;
            } else {
                printf("Invalid choice. Please enter 'Y' or 'N'.\n");
            }
        }
    }
}

int main() {
    operate_elevator();
    return 0;
}