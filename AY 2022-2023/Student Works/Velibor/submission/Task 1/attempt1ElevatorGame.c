#include <stdio.h>

#define GROUND_FLOOR 0
#define NUM_FLOORS 5

//THIS IS AN ATTEMPT OF MY ELEVATOR GAME

int currentFloor = GROUND_FLOOR;

// Prompts the user to enter the floor they want to go to
// and returns the floor number
int getDestinationFloor()
{
    int floor;
    printf("Enter the floor you want to go to (0-5): ");
    scanf("%d", &floor);
    return floor;
}

// Simulates the elevator moving to the specified floor
void goToFloor(int floor)
{
    if (floor < GROUND_FLOOR || floor >= NUM_FLOORS)
    {
        printf("Invalid floor!\n");
        return;
    }

    printf("Going from floor %d to floor %d\n", currentFloor, floor);
    currentFloor = floor;
}

// Simulates the elevator going up one floor
void goUp()
{
    if (currentFloor == NUM_FLOORS - 1)
    {
        printf("You are already on the top floor!\n");
        return;
    }
    goToFloor(currentFloor + 1);
}

// Simulates the elevator going down one floor
void goDown()
{
    if (currentFloor == GROUND_FLOOR)
    {
        printf("You are already on the ground floor!\n");
        return;
    }
    goToFloor(currentFloor - 1);
}

int main()
{
    printf("Welcome to the elevator! You are currently on the ground floor.\n");

    int destination = getDestinationFloor();

    // If the destination is below the current floor, go down
    // Otherwise, go up
    if (destination < currentFloor)
    {
        while (currentFloor != destination)
        {
            goDown();
        }
    }
    else
    {
        while (currentFloor != destination)
        {
            goUp();
        }
    }

    printf("You have arrived at your destination on floor %d!\n", currentFloor);

    return 0;
}
