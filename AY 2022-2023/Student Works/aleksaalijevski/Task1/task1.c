#include <stdio.h>
#include <stdbool.h>

int main()
{
    // current floor
    int currentFloor = 0;

    // while to keep asking the program what floor to go to
    while (true)
    {
        printf("Enter the floor you would like to go to (G, 1, 2, 3, 4, 5) or enter E to exit the program: ");

        char destinationFloor;
        scanf(" %c", &destinationFloor);

        // break out of the loop, if user wants to
        if (destinationFloor == 'E')
        {
            break;
        }

        // if the input is valid, validate selected floor
        if (destinationFloor == 'G' || destinationFloor == '1' || destinationFloor == '2' || destinationFloor == '3' || destinationFloor == '4' || destinationFloor == '5')
        {
            // Convert the destination floor character to an integer
            int destination = destinationFloor - '0';

            // move up and down
            if (currentFloor < destination)
            {
                printf("Moving elevator up to floor %d...\n", destination);
                for (int i = currentFloor + 1; i <= destination; i++)
                {
                    printf("Reached floor %d.\n", i);
                }
            }
            else if (currentFloor > destination)
            {
                printf("Moving elevator down to floor %d...\n", destination);
                for (int i = currentFloor - 1; i >= destination; i--)
                {
                    printf("Reached floor %d.\n", i);
                }
            }
            else
            {
                printf("Elevator is already at floor %d.\n", destination);
            }

            // current floor of the elevator(as an update)
            currentFloor = destination;
        }
        else
        {
            printf("Invalid input. Please enter a valid floor (G, 1, 2, 3, 4, 5).\n");
        }
    }

    return 0;
}
