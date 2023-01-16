#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
int main() {
    int currentFloor = 0; // initialize elevator at ground floor
    int destinationFloor;
    int numPassengers;
    int numPassengers1;
    char input[3];
    int i;
   
    while (1) {
         if(currentFloor == 0) printf("Welcome to the elevator. You are currently on floor G.\n");
        else if(currentFloor < 0) printf("Welcome to the elevator. You are currently on floor B%d.\n", -1*currentFloor);
        else printf("Welcome to the elevator. You are currently on floor %d.\n", currentFloor);
       
        for (i = 0; i < numPassengers+1; i++) {\
       
        printf("How many new passengers are on this floor ");
        scanf("%d", &numPassengers1);
        numPassengers += numPassengers1;
        
        printf("How many passengers left the elevator ");
        scanf("%d", &numPassengers1);
        numPassengers -= numPassengers1;
        
        
            printf("There are %d passengers in elevator: ",numPassengers);
            printf(" Please enter your destination: ");
            scanf("%s", input);
            //convert input to destination floor 
            if (input[0] == 'G') {
                destinationFloor = 0;
            } else if (input[0] == 'B') {
                destinationFloor = -1 * (input[1] - '0');
            } else if (input[0] >= '0' && input[0] <= '5') {
                destinationFloor = input[0] - '0';
            } else {
                printf("Invalid input. Please enter a valid floor (G, B1, B2, B3, 1, 2, 3, 4, 5).\n");
                continue;
            }
            // check if passenger is already on the floor
            if (destinationFloor == currentFloor) {
                printf("You are already on this floor.\n");
                continue;
            }
            // move elevator up or down
            if (destinationFloor > currentFloor) {
                printf("Going up...\n");
                for (; currentFloor < destinationFloor; currentFloor++) {
                    if(currentFloor == 0) printf("You are now on floor G.\n");
                    else if(currentFloor < 0) printf("You are now on floor B%d.\n", -1*currentFloor);
                    else printf("You are now on floor %d.\n", currentFloor);
                }
            } else {
                printf("Going down...\n");
                for (; currentFloor > destinationFloor; currentFloor--) {
                    if(currentFloor == 0) printf("You are now on floor G.\n");
                    else if(currentFloor < 0) printf("You are now on floor B%d.\n", -1*currentFloor);
                    else printf("You are now on floor %d.\n", currentFloor);
                }
            }
            //display current floor
            if(currentFloor == 0) printf("You have arrived at floor G.\n");
            else if(currentFloor < 0) printf("You have arrived at floor B%d.\n", -1*currentFloor);
            else printf("You have arrived at floor %d.\n", currentFloor);
        }
    }
    return 0;
}
