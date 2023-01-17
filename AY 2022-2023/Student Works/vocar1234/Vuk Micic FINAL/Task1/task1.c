#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// function prototypes
//add new passengers 
//add max amount passengers
void move_elevator(int *current_floor, int destination_floor);
bool validate_input(char input);
//i added basement floors and added a option for each floor to ask the user as the elevator is going up or down do they want to 
//add another passenger
//also added function that exits the programs if number of passengers is 0
//if elevator is empty exit program
int passengersCheck(int passengers){
    if (passengers<=0){
        printf("\n The elevator is empty");
        exit (0);
    }
}
int main(){
    // initialize current floor to ground floor
    int current_floor = -1;
    int passengers=1;
    int maxPassengers=6;

    // infinite while loop until user chooses to leave
    while (true)
    {
        // print current floor
        printf("\nYou are currently on floor %d.", current_floor + 1);

        // ask the user for input
        printf("Enter a floor number (B3(K), B2(J), B1(I), G, 1, 2, 3, 4, or 5) to travel to: ");

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
            destination_floor = 0 - 1;
        }else if (input == 'I')
        {
            destination_floor=0-2;
        }else if (input == 'J')
        {
            destination_floor=0-3;
        }else if (input == 'K')
        {
            destination_floor=0-4;
        }
        else{
            destination_floor = input - '0' - 1;
        }

        // check for the elevator to move up one floor at a time
        if (current_floor < destination_floor){
            for (int i = current_floor + 1; i <= destination_floor; i++){
                current_floor = i;
                //calls exit function
                passengersCheck(passengers);
                printf("\nYou are now on floor %d. Do you want to alight a passenger? (y/n) ", current_floor + 1);
                // read in user input
                char alight;
                scanf(" %c", &alight);

                // if user allights, -1 to passengers
                if (alight == 'y'){
                    passengers--;
                    printf("\nYou have alighted a passenger");
                    printf("\nNumber of passengers: %d", passengers);
                }//adds passenger
                char pass; 
                //elevator capacity check                
                if (passengers>6){
                printf("\n the Elevator has no more room.");
                }else{
                printf("\nYou are now on floor %d. Do you want to add a passenger? (y/n) ", current_floor + 1);
                scanf(" %c", &pass);
                }
                if ((pass=='y' && passengers<6)){
                    passengers++;
                    printf("\nNumber of passengers: %d", passengers);
                }
            }
        }
        // if the current floor is above the destination floor, move the elevator down one floor at a time
        else if (current_floor > destination_floor){
            for (int i = current_floor - 1; i >= destination_floor; i--){
                current_floor = i;
                //calls exit function
                passengersCheck(passengers);
                printf("\nYou are now on floor %d. Do you want to alight a passenger? (y/n) ", current_floor + 1);
                // read in user input
                char alight;
                scanf(" %c", &alight);

                // below does same as in previous case
                if (alight == 'y'){
                    passengers--;
                    printf("\nYou have alighted a passenger");
                    printf("\nNumber of passengers: %d", passengers);
                }
                char pass;
                if (passengers>6){
                    printf("\n the Elevator has no more room.");
                }else{
                printf("\nYou are now on floor %d. Do you want to add a passenger? (y/n) ", current_floor + 1);
                scanf(" %c", &pass);
                }
                if ((pass=='y' && passengers<6)){
                    passengers++;
                    printf("\nNumber of passengers: %d", passengers);
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
    if (input == 'G' || (input >= '0' && input <= '5' || input == 'I' || input == 'J' || input == 'K'))
    {
        return true;
    }
}

