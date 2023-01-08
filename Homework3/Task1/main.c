#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

#define MIN_FLOOR -3 // minimum floor the elevator can go to
#define MAX_FLOOR 5 // maximum floor the elevator can go to
#define BASEMENT_FLOOR -3 // floor where basement begins

int currentFloor = 0; // current floor the elevator is on

// function prototypes
void goToFloor(int destination);
void validateFloorInput(int* floor, char* input);

int main(){
    char input[2];
    int destination;

    printf("Welcome to the elevator simulator!\n");
    printf("You are currently on the ground floor.\n");

    // loop until the user chooses to exit the program
    while (1){
        printf("Enter the floor you would like to go to (G, B1, B2, B3, 1, 2, 3, 4, 5): ");
        scanf("%s", input);

        // validate the user's input
        validateFloorInput(&destination, input);

        // go to the specified floor
        goToFloor(destination);
    }

    return 0;
}

// function to go to a specific floor
void goToFloor(int destination){
    if (destination == currentFloor){
        printf("You are already on this floor. %d\n",destination);
        return;
    }

    // elevator is going up
    if (destination > currentFloor){
        printf("Going up...\n");
        for (int i = currentFloor + 1; i <= destination; i++)
        {
            printf("Floor %d\n", i);
        }
    }
    // elevator is going down
    else{
        printf("Going down...\n");
        for (int i = currentFloor - 1; i >= destination; i--)
        {
            printf("Floor %d\n", i);
        }
    }

    currentFloor = destination;
    printf("You have arrived at floor %d.\n", destination);
}

// function to validate the user's input for a floor
void validateFloorInput(int* floor, char* input)
{
    *floor = 0;

    if (input[0] == 'G' || input[0] == 'g'){
        *floor = 0;
    }else if (input[0] == 'B'){
        if (input[1] == '1'){
            *floor = -1;
        }else if (input[1] == '2'){
            *floor = -2;
        }else if (input[1] == '3'){
            *floor = -3;
        }
    }else if (isdigit(input[0])){
        *floor = atoi(input);
    }else{
        printf("Invalid input. Please enter a valid floor (G, B1, B2, B3, 1, 2, 3, 4, 5): ");
        scanf("%s", input);
    }
}