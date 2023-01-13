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
