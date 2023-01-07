#include <stdio.h>
#include <ctype.h>

#define MAX_PASSENGERS 10


//some basic sorting that works that I found on the internet
void sortDescending(int *ptr, int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) > *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}


void sortAscending(int *ptr, int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}




int main(void) {
    int current_floor = 0;
    char answer;
    int hasNewFloors;

    int destination_floors[MAX_PASSENGERS];
    int destinationFloorsSize = 0;

    int tmp_destination_floors[MAX_PASSENGERS];
    int tmpDestinationFloorsSize = 0;



    for (int i = 0; i < MAX_PASSENGERS; i++) {
    destination_floors[i] = 0;
    tmp_destination_floors[i] = 0;
    }

  // The main loop that works while there are any passengers left in the elevator. The ones that enter later also count
    int i = 0;
    while (i < MAX_PASSENGERS) {
        char destination;

        // prompting for the destination floor for the first time
        printf("Enter destination floor for passenger %d (G, 1, 2, 3, 4, 5): ", i + 1);
        scanf(" %c", &destination);
        destinationFloorsSize++;

        // Just so you can go to G floor
        int destination_floor;
        if (toupper(destination) == 'G') {
          destination_floor = 0;
        } else {
          destination_floor = destination - '0';
        }

        // So that the user mistake won't crash the code, but just continue the loop
        if (destination_floor < 0 || destination_floor > 5) {
            printf("Invalid input. Please enter a valid destination floor.\n");
            continue;
        }

        // Storing the destination floor in the array
        destination_floors[i] = destination_floor;
        i++;

        // Asking if more passengers want to enter
        char more_passengers;
        printf("Do you want to enter more passengers? (Y/N) ");
        scanf(" %c", &more_passengers);

        // Validatation
        if (toupper(more_passengers) != 'Y' && toupper(more_passengers) != 'N') {
          printf("Invalid input. Please enter Y or N.\n");
          continue;
        }
        // Exiting the main loop when all the passenger have boarded on the G floor
        if (toupper(more_passengers) == 'N') {
          break;
        }
    }

    int direction = 0;

    sortAscending(destination_floors, destinationFloorsSize);//sorting the array before any work

    int elevatorIsInMotion = 1;

    while(elevatorIsInMotion == 1){
        // Choosing the direction
        if (destination_floors[0] > current_floor) {
            direction = 1;
        }
        else {
            direction = -1;
        }

        while (current_floor != destination_floors[0]) {
            current_floor += direction;
            printf("Floor: %d\n", current_floor);
            if (current_floor == destination_floors[0]) {
                break;
            }
        }

        //When while finishes we have arrived at a floor and someone is meant to alight
        printf("Passenger alighted at floor %d.\n", current_floor);

        //removing the first floor from the array
        for (i = 0; i < destinationFloorsSize -1; i++){
            destination_floors[i] = destination_floors[i+1];
        }
        destinationFloorsSize--;

        //adding a 0 to the end of the array so we know when we passed all the floors
        destination_floors[destinationFloorsSize + 1] = 0;

        //adding if anybody new is entering
        printf("Is anyone new entering the elevator?");
        scanf(" %c", &answer);

        while (answer == 'Y' || answer == 'y'){
            int newFloor;
            printf("Which floor is the new person going to? ");
            scanf(" %d", &newFloor);
            //adding new floors into a new array for later sorting
            tmp_destination_floors[tmpDestinationFloorsSize + 1] = newFloor;
            tmpDestinationFloorsSize++;
            hasNewFloors = 1;
            printf("Is anyone new entering the elevator? ");
            scanf(" %c", &answer);
        }


        printf("BROJ PREOSTALIH SPRATOVA: %d \n", destinationFloorsSize);
        printf("IMA NOVE SPRATOVE %d \n", hasNewFloors);

        if (hasNewFloors == 1 && destinationFloorsSize == 0){

            printf("GOTOVI SA TRENUTNIM SPRATOVIMA, DODAJEMO NOVE, IMA IH %d \n", tmpDestinationFloorsSize);

            //copying new floors to the array

            for(int m = 0; m < 10; m++){
                destination_floors[m] = tmp_destination_floors[m+1];
            }
            destinationFloorsSize = tmpDestinationFloorsSize;

            //if the elevator goes up, we sort descending, and vice versa
            if (direction == 1){
                sortDescending(destination_floors, destinationFloorsSize);
            }
            else if (direction == -1){
                sortAscending(destination_floors, destinationFloorsSize);
            }

            //resetting the array with new floors
            tmpDestinationFloorsSize = 0;
            for(int r = 0; r < 10; r++){
                tmp_destination_floors[r] = 0;
            }
            hasNewFloors = 0;

            printf("\n BROJ PREOSTALIH SPRATOVA: %d \n", destinationFloorsSize);

        }
        else if (destinationFloorsSize <= 0 && hasNewFloors == 0){
            printf("No more people, elevator musics stops");
            return 0;
        }
    }
  return 0;
}


