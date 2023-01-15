#include <stdio.h>

int main(void) {
    // Initialize the current floor to the ground floor
    int current_floor = 0;

    // Keep looping until we break with a condition
    while (1) {
        char destination;

        //ask the user for a destination
        printf("Enter destination floor (G, 1, 2, 3, 4, 5): ");
        scanf(" %c", &destination);

        // Validation
        if (toupper(destination) != 'G' && !isdigit(destination)) {
            printf("Invalid input. Please enter a valid destination floor.\n");
            continue;
        }

        // convert to an integer
        int destination_floor;
        if (toupper(destination) == 'G') {
            destination_floor = 0;
        }else{
            destination_floor = destination - '0';
        }

        // Validation
        if (destination_floor < 0 || destination_floor > 5) {
            printf("Invalid input. Please enter a valid destination floor.\n");
            continue;
        }

        // set the direction
        int direction;
        if (destination_floor > current_floor) {
            direction = 1;
        }else{
            direction = -1;
        }


        // calculate the direction
        while (current_floor != destination_floor) {
            current_floor += direction;
            printf("Floor: %d\n", current_floor);
        }

        // Ask if the passenger alights
        char alight;
        printf("Do you want to alight at floor %d? (Y/N) ", current_floor);
        scanf(" %c", &alight);

        // Validation
        if (toupper(alight) != 'Y' && toupper(alight) != 'N') {
            printf("Invalid input. Please enter Y or N.\n");
            continue;
        }

        // if the passenger alights exit the loop
        if (toupper(alight) == 'Y') {
            break;
        }
    }

return 0;
}


