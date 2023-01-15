#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

enum Elevator{B3=-3, B2, B1, G, FIRST_FLOOR, SECOND_FLOOR, THIRD_FLOOR, FOURTH_FLOOR, FIFTH_FLOOR};

const char* getCurrentFloor(int *currentFloor) {
    switch (*currentFloor) {
        case B3: return "Basement-3";
        case B2: return "Basement-2";
        case B1: return "Basement-1";
        case G: return "Ground";
        case FIRST_FLOOR: return "1st";
        case SECOND_FLOOR: return "2nd";
        case THIRD_FLOOR: return "3rd";
        case FOURTH_FLOOR: return "4th";
        case FIFTH_FLOOR: return "5th";
    }
}

bool travelerEntersAtGivenFloor() {
    float result = ((float) rand() / (float)(RAND_MAX));
    return result > 0.5;
}

bool isEnteredInputANumber(char *input) {
    int length = strlen (input);
    for( int i = 0 ; i < length ; ++i) {
        if(i == 0 && input[i] == '-')
            continue;
        if(!isdigit(input[i]))
            return false;
    }
    return true;
}

bool isEnteredFloorValid(char input[]) {
    bool isInputValid = isEnteredInputANumber(input);
    if(!isInputValid)
        return false;
    int floor = atoi(input);
    if(floor < -3 || floor > 5)
        return false;
    return true;
}

void handleDestinationFloorInput(int *ptrDestinationFloor, char input[]) {
    while(!isEnteredFloorValid(input)) {
        printf("Please enter a valid floor number ( the valid floor number range is (-3, 5) )\n");
        scanf("%s", input);
    }
    *ptrDestinationFloor = atoi(input);
}

void handleTotalTravelersInput(int *ptrTotalTravelers, char input[]) {
    if(*ptrTotalTravelers > 0)
        return;

    printf("Please enter the number of travelers on the Elevator (capacity of the elevator)\n");
    scanf("%s", input);

    bool checkInput = isEnteredInputANumber(input);

    if(checkInput)
        *ptrTotalTravelers = atoi(input);
    else
        printf("Invalid input. A positive number is needed.\n\n");

    return handleTotalTravelersInput(ptrTotalTravelers, input);
}

void travelingUpwards(int *ptrCurrentFloor, int *ptrCurrentTotalTravelers, int *ptrDestinationFloor, int *ptrTotalTravelers) {
    char input[100];
    int currentTotalTravelers;
    while(*ptrCurrentFloor < *ptrDestinationFloor){
        if(travelerEntersAtGivenFloor() && *ptrCurrentTotalTravelers != *ptrTotalTravelers) {
            printf("A new traveler has entered the elevator\n");
            *ptrCurrentTotalTravelers += 1;
        }
        printf("We are currently on the %s floor\n", getCurrentFloor(ptrCurrentFloor));
        currentTotalTravelers = *ptrCurrentTotalTravelers;
        for(int i = 0 ; i < currentTotalTravelers ; ++i){
            printf("Does traveler %d leave at %s floor? (Y/N)\n", i + 1, getCurrentFloor(ptrCurrentFloor));
            scanf("%s", input);
            while(!(strlen (input) == 1 && (input[0] == 'Y' || input[0] == 'N'))) {
                printf("Invalid input, please enter again (Y/N)\n");
                scanf("%s", input);
            }
            if(input[0] == 'Y')
                (*ptrCurrentTotalTravelers) -= 1;
        }
        (*ptrCurrentFloor) += 1;
    }
    printf("We have arrived at the desired destination!\n");
}

void travelingDownwards(int *ptrCurrentFloor, int *ptrCurrentTotalTravelers, int *ptrDestinationFloor, int *ptrTotalTravelers) {
    char input[100];
    int currentTotalTravelers;
    while(*ptrCurrentFloor > *ptrDestinationFloor){
        if(travelerEntersAtGivenFloor() && *ptrCurrentTotalTravelers != *ptrTotalTravelers) {
            printf("A new traveler has entered the elevator\n");
            *ptrCurrentTotalTravelers += 1;
        }
        printf("We are currently on the %s floor\n", getCurrentFloor(ptrCurrentFloor));

        currentTotalTravelers = *ptrCurrentTotalTravelers;
        for(int i = 0 ; i < currentTotalTravelers ; ++i){
            printf("Does traveler %d leave at %s floor? (Y/N)\n", i + 1, getCurrentFloor(ptrCurrentFloor));
            scanf("%s", input);
            while(!(strlen (input) == 1 && (input[0] == 'Y' || input[0] == 'N'))) {
                printf("Invalid input, please enter again (Y/N)\n");
                scanf("%s", input);
            }
            if(input[0] == 'Y')
                (*ptrCurrentTotalTravelers) -= 1;
        }
        (*ptrCurrentFloor) -= 1;
    }
    printf("We have arrived at the desired destination!\n");
}

void handleChangeOfFloor(int *ptrCurrentFloor, int *ptrDestinationFloor, int *ptrTotalTravelers) {
    int currentTotalTravelers = 1;
    int *ptrCurrentTotalTravelers = &currentTotalTravelers;

    if(*ptrCurrentFloor == *ptrDestinationFloor)
        printf("We are already on the %s floor", getCurrentFloor(ptrCurrentFloor));
    else if(*ptrCurrentFloor < *ptrDestinationFloor)
        travelingUpwards(ptrCurrentFloor, ptrCurrentTotalTravelers, ptrDestinationFloor, ptrTotalTravelers);
    else
        travelingDownwards(ptrCurrentFloor, ptrCurrentTotalTravelers, ptrDestinationFloor, ptrTotalTravelers);
}


int main() {
    int currentFloor = 0;
    int destinationFloor = NULL;
    int totalTravelers = NULL;
    int *ptrDestinationFloor = &destinationFloor, *ptrTotalTravelers = &totalTravelers, *ptrCurrentFloor = &currentFloor;
    char input[100];

    while(true) {
        handleTotalTravelersInput(ptrTotalTravelers, input);

        printf("Please enter the desired destination floor\n");
        scanf("%s", input);

        handleDestinationFloorInput(ptrDestinationFloor, input);

        handleChangeOfFloor(ptrCurrentFloor, ptrDestinationFloor, ptrTotalTravelers);

        printf("Will the user re-enter the elevator? (Y/N)\n");
        scanf("%s", input);
        while(!(strlen (input) == 1 && (input[0] == 'Y' || input[0] == 'N'))) {
            printf("Invalid input, please enter again (Y/N)\n");
            scanf("%s", input);
        }
        if(input[0] == 'N')
            break;
    }

    return 0;
}
