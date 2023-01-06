#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// The function that shows how the elevator travels trough the floors
void travel(int toFloor, int currentFloor){
    // This part is when the elevator goes up
    if (currentFloor < toFloor){
    
        while (currentFloor <= toFloor){
            // When the elevator reaches the destination floor, the loop breaks
            if (currentFloor == toFloor){
                printf("You have reach your destination: %d floor \n", currentFloor);
                break;
            }
            
            printf("%d... \n", currentFloor);
            currentFloor++;
        }
    }
    // This part is when the elevator goes down    
    else if (currentFloor > toFloor){
        while (currentFloor >= toFloor){
            // When the elevator reaches the destination floor, the loop breaks
            if (currentFloor == toFloor){
                printf("You have reach your destination: %d floor \n", currentFloor);
                break;
            }
            printf("%d... \n", currentFloor);
            currentFloor--;
        }
    }
    else{
        printf("You are already at: %d floor \n", currentFloor);
    }
}


int main(){

	int currentFloor = 0;
	char inputFloor;
	int numPassengers, i;
    int floors[10];
	printf("Welcome to the elevator!\n");
	// We get the number of total passengers
    printf("Enter the number of passengers: ");
    scanf("%d", &numPassengers);
    
    // Get all of the passengers desired floors
    for (i = 0; i < numPassengers; i++) {
        char floor[2]; 
        
        printf("Enter the floor for passenger %d: ", i + 1);
        scanf("%s", floor);
        
        // We check if the floor entered is digit
        if (isdigit(floor[0])) {
          // Funtion to convert string to integer
          floors[i] = atoi(floor);
        
          // If the entered floor is invalid, a error message is printed  
          if (floors[i] < 0 || floors[i] > 5) {
            printf("Error: invalid floor\n");
            return 1;
          }
        } 
        // In case the floor entered is "B1", "B2", or "B3"
        else {
          if (strcmp(floor, "B1") == 0) {
            floors[i] = -1;
          } else if (strcmp(floor, "B2") == 0) {
            floors[i] = -2;
          } else if (strcmp(floor, "B3") == 0) {
            floors[i] = -3;
          } else {
            printf("Error: invalid floor\n");
            return 1;
          }
        }
    }

    int passengersInLift = numPassengers;
    int passengersAtSameFloor = 1;
    
    // This loops goes as long as there are paasengers left in the elevator    
    while(passengersInLift > 0){
        passengersAtSameFloor = 1;
        travel(floors[0], currentFloor);
        
        // Check if there are more passengers that want to go to the same floor 
        for(int i = 1; i < passengersInLift; i++){
            // If there are, the number of passengers at the same floor increments, and we remove the same floor from the array
            if (floors[i] == floors[0]){
                passengersAtSameFloor ++;
                floors[i] = floors[i+1];
            }
        }
        
        printf("%d passenger(s) left the elevator \n", passengersAtSameFloor);
        // Now we calculate how many paasengers have left in the elevator
        passengersInLift = passengersInLift - passengersAtSameFloor;
        currentFloor = floors[0];
        floors[0] = floors[1];
    }
    
	 return 0;
}
//Made By Viktor Bojoski
