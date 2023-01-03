#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// function prototypes
//add basement floors
//add new passengers (2d array)
void move_elevator(int *current_floor, int destination_floor);
bool validate_input(char input);

int main(){
    // initialize current floor to ground floor
    int current_floor = 0;

    // infinite while loop until user chooses to leave
    while (true)
    {
        // print current floor
        printf("You are currently on floor %d.\n", current_floor + 1);

        // ask the user for input
        printf("Enter a floor number (G, 1, 2, 3, 4, or 5) to travel to: ");

        // read users input
        char input;
        scanf(" %c", &input);

        // validate input
        if (!validate_input(input)){
            printf("Invalid input. Please enter a valid floor number.\n");
            continue;
        }

        // convert char to int
        int destination_floor;
        if (input == 'G'){
            destination_floor = 0;
        }
        else{
            destination_floor = input - '0' - 1;
        }

        // check for the elevator to move up one floor at a time
        if (current_floor < destination_floor){
            for (int i = current_floor + 1; i <= destination_floor; i++){
                current_floor = i;
                printf("You are now on floor %d. Do you want to alight? (y/n) ", current_floor + 1);

                // read in user input
                char alight;
                scanf(" %c", &alight);

                // if user allights, loop breaks and programs exits, exit function
                if (alight == 'y')
                {
                 	printf("You have exited the elevator");
                	exit(0);
                }
            }
        }
        // if the current floor is above the destination floor, move the elevator down one floor at a time
        else if (current_floor > destination_floor){
            for (int i = current_floor - 1; i >= destination_floor; i--){
                current_floor = i;
                printf("You are now on floor %d. Do you want to alight? (y/n) ", current_floor + 1);

                // read in user input
                char alight;
                scanf(" %c", &alight);

                // if user wants to alight, break loop
                if (alight == 'y'){
                    printf("You have exited the elevator");
                	exit(0);
                }
            }
        }
        // if the current floor is the same as the destination floor, do nothing
        else{
            printf("Elevator already on floor %d.\n", destination_floor + 1);
        }
    }

    return 0;
}

// function to validate user input
bool validate_input(char input)
{
    if (input == 'G' || (input >= '1' && input <= '5'))
    {
        return true;
    }
}

