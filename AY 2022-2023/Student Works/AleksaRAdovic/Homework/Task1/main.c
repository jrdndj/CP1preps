#include <stdio.h>

#define MIN_FLOOR -1 // Basement
#define MAX_FLOOR 7  // Terrace

// Global variables
int current_floor = 1; // Initialize the current floor to the Ground floor
int num_passengers = 0; // Initialize the number of passengers to 0

// Function prototypes
int get_destination_floor(void);
void travel(int current_floor, int destination_floor);
void load_unload_passengers(int floor);

int main(void)
{
    int destination_floor;

    // Elevator begins and loads passengers at the Ground floor
    load_unload_passengers(current_floor);

    // Keep traveling until the user wants to stop
    while (1)
    {
        // Get the destination floor from the user
        destination_floor = get_destination_floor();

        // If the user entered an invalid floor, display an error message and ask again
        while (destination_floor == 0)
        {
            printf("Invalid floor. Please enter a valid floor: ");
            destination_floor = get_destination_floor();
        }

        // If the destination floor is the same as the current floor, display a message and ask again
    while (destination_floor == current_floor)
    {
        printf("Elevator is currently on this floor. Please enter a different floor: ");
        destination_floor = get_destination_floor();
    }


        // Travel to the destination floor
        travel(current_floor, destination_floor);

        // Load/unload passengers at the destination floor
        load_unload_passengers(destination_floor);

        // Update the current floor and number of passengers
        current_floor = destination_floor;
    }

    return 0;
}

// This function gets the destination floor from the user
int get_destination_floor(void)
{
    int destination_floor;
    char floor;

    printf("Enter destination floor (B, G, 1, 2, 3, 4, 5, T): ");
    scanf(" %c", &floor);

    switch (floor)
    {
        case 'B':
            destination_floor = MIN_FLOOR;
            break;
        case 'G':
            destination_floor = 1;
            break;
        case '1':
            destination_floor = 2;
            break;
        case '2':
            destination_floor = 3;
            break;
        case '3':
            destination_floor = 4;
            break;
        case '4':
            destination_floor = 5;
            break;
        case '5':
            destination_floor = 6;
            break;
        case 'T':
            destination_floor = MAX_FLOOR;
            break;
        default:
            destination_floor = 0;
            break;
    }

    return destination_floor;
}


// This function simulates the elevator traveling to the destination floor
void travel(int current_floor, int destination_floor)
{
    char *current_floor_name;
    char *destination_floor_name;

    switch (current_floor)
    {
        case -1:
            current_floor_name = "Basement";
            break;
        case 1:
            current_floor_name = "Ground";
            break;
        case 2:
            current_floor_name = "1st";
            break;
        case 3:
            current_floor_name = "2nd";
            break;
        case 4:
            current_floor_name = "3rd";
            break;
        case 5:
            current_floor_name = "4th";
            break;
        case 6:
            current_floor_name = "5th";
            break;
        case 7:
            current_floor_name = "Terrace";
            break;
        default:
            current_floor_name = "Invalid floor";
            break;
    }

    switch (destination_floor)
    {
        case -1:
            destination_floor_name = "Basement";
            break;
        case 1:
            destination_floor_name = "Ground";
            break;
        case 2:
            destination_floor_name = "1st";
            break;
        case 3:
            destination_floor_name = "2nd";
            break;
        case 4:
            destination_floor_name = "3rd";
            break;
        case 5:
            destination_floor_name = "4th";
            break;
        case 6:
            destination_floor_name = "5th";
            break;
        case 7:
            destination_floor_name = "Terrace";
            break;
        default:
            destination_floor_name = "Invalid floor";
            break;
    }

    printf("Traveling from %s floor to %s floor...\n", current_floor_name, destination_floor_name);
}

// This function simulates loading/unloading passengers at a floor
void load_unload_passengers(int floor)
{
    int passengers;

    printf("Number of passengers entering the elevator: ");
    scanf("%d", &passengers);
    num_passengers += passengers;

    printf("Number of passengers exiting the elevator: ");
    scanf("%d", &passengers);
    num_passengers -= passengers;

    // If the number of passengers goes below 0, display an error message and reset it to 0
    if (num_passengers < 0)
    {
        printf("Error: Cannot have negative number of passengers!\n");
        num_passengers = 0;
    }

    printf("Number of passengers remaining in the elevator: %d\n", num_passengers);
}
