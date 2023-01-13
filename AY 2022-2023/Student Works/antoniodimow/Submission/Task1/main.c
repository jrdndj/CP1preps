#include <stdio.h>
#include <stdbool.h>

int main()
{
    int current_floor = 0;        // The elevator starts at the ground floor
    bool elevator_running = true; // The elevator is running

    while (elevator_running)
    {
        printf("Where do you want to go? (Enter floor number between 1 and 5 or G for ground floor): ");
        char destination_input[2];
        scanf("%s", destination_input);

        int destination_floor;
        if (destination_input[0] == 'G')
        {
            destination_floor = 0;
        }
        else if (destination_input[0] >= '1' && destination_input[0] <= '5')
        {
            destination_floor = destination_input[0] - '0'; // Convert character to int
        }
        else
        {
            printf("Invalid input. Please enter a valid floor number between 1 and 5 or G for the ground floor.\n");
            continue; // Go back to the start of the loop
        }

        // Check if the destination floor is above or below the current floor
        if (destination_floor > current_floor)
        {
            printf("Going up...\n");
            for (int i = current_floor + 1; i <= destination_floor; i++)
            {
                printf("Floor %d\n", i);
            }
        }
        else if (destination_floor < current_floor)
        {
            printf("Going down...\n");
            for (int i = current_floor - 1; i >= destination_floor; i--)
            {
                printf("Floor %d\n", i);
            }
        }
        else
        {
            printf("Already at destination floor.\n");
        }
        current_floor = destination_floor; // Update the current floor
        printf("Do you want to alight here? (Enter Y for yes or N for no): ");
        char alight_input[2];
        scanf("%s", alight_input);

        if (alight_input[0] == 'Y')
        {
            elevator_running = false;
            printf("Thank you for using the elevator.\n");
        }
    }
    return 0;
}
