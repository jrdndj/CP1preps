#include <stdio.h>

//function to receive input from the user
//validating the input
char getInput() {
    char input;
    scanf(" %c", &input);
    while (input != 'G' && input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != 'B1' && input != 'B2' && input != 'B3' ) {
        printf("Invalid input received. Please enter a valid floor (G, 1, 2, 3, 4, 5, B1, B2, B3): ");
        scanf(" %c", &input);
    }
    return input;
}

//moving the elevator
void moveElevator(char cFloor, char destinationFloor, int *passengernum) {
    printf("Elevator is now moving from floor %c to floor %c...\n", cFloor, destinationFloor);
    cFloor = destinationFloor;
    printf("You have now arrived at floor %c.\n", cFloor);
    if(*passengernum>1) *passengernum-=1;
}
int main() {
    char cFloor = 'G'; //starting at G floor
    char destinationFloor;
    int passengernum;
    
    printf("Welcome. You are currently on the %c floor.\n", cFloor);
    printf("How many passengers are there : ");
    scanf("%d", &passengernum);
    
    printf("To which floor would you like to go? (G, 1, 2, 3, 4, 5, B1, B2, B3): ");
    destinationFloor = getInput();
    moveElevator(cFloor, destinationFloor, &passengernum);
    
    while(passengernum>1){
        printf("Passenger count : %d\n", passengernum);
        printf("Which floor would you like to go to next? (G, 1, 2, 3, 4, 5, B1, B2, B3): ");
        destinationFloor = getInput();
        moveElevator(cFloor, destinationFloor, &passengernum);
    }
    
    if(passengernum==1){
    printf("Passenger count : %d\n", passengernum);
    printf("The last passenger got off at %c floor\n",cFloor);
    }
    
    return 0;
}
