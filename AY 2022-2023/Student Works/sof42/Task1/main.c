/*
    File: main.c
    Author: SOFIJA KOCHOVSKA
    Student ID: 89221062
    Description: Simulation of an Elevator-Controller Program
*/

#include <stdio.h>  // FOR INPUT/OUTPUT RELATED FUNCTIONS

// FUNCTIONS

// Function to print instructions
void printInstructions(){
    printf("\nWelcome to the Elevator Simulator!\n");
    printf("You will be asked what floor you want to go to.\n");
    printf("Valid floors are: B3, B2, B1, G, 1, 2, 3, 4, 5.\n");
}

// Function to alight the lift at any given point
int alightLift(char dAlightInput){
    printf("Do you want to alight the elevator? (y/n)? ");
    scanf("%c",&dAlightInput);
    getchar();
    if(dAlightInput == 'y'){
        printf("Goodbye.\n");
        return 1;
    }//end if
    else if(dAlightInput == 'n'){
        return 0;
    }//end else
    else{
        printf("Incorrect input! Please enter 'y' or 'n'.\n");
        scanf("%c",&dAlightInput);
        getchar();
    }// end else   
}// end of function alightLift

// Function for the lift to go up
void goUp(int dCurrentFloor, int dDestinationFloor){
    for(int i = dCurrentFloor - 1; i < dDestinationFloor; i++){
        printf("%d\n", i+1);
        printf("...\n");
        printf("..\n");
        printf(".\n");
    }// end for
}// end of function goUp

// Function for the lift to go down
void goDown(int dCurrentFloor, int dDestinationFloor){
    for(int i=dCurrentFloor + 1;i > dDestinationFloor; i--){
        printf("%d\n", i-1);
        printf(".\n");
        printf("..\n");
        printf("...\n");
    }// end for
}// end of function goDown

// Function to travel to floors based on the current position of the user
void travelToFloor(int dCurrentFloor, int dDestinationFloor){
    if(dCurrentFloor > dDestinationFloor){
        goDown(dCurrentFloor, dDestinationFloor);
        dCurrentFloor = dDestinationFloor;
        printf("\nYou are NOW on floor: %d.\n", dCurrentFloor);
    }// end if
    else if (dCurrentFloor < dDestinationFloor){
        goUp(dCurrentFloor, dDestinationFloor);
        dCurrentFloor=dDestinationFloor;
        printf("\nYou are NOW on floor: %d.\n", dCurrentFloor);
    }// end else if
    else{
        printf("\nYou are already located on this floor.\n");
    }// end else
}// end of function travelToFloor

// Main function for the elevator to work
void rideElevator(){
// DECLARE VARIABLES
    int dCurrentFloor = 0, dAnswer = 0, dUsersNum, dLoopCounter; // dAnswer set to 0, so while runs for the first time
    char dAlightInput;

    // Elevator starts on the ground floor (dCurrentFloor=0)
    printf("\nYou are currently located on the GROUND floor.\n");  

// While for multiple rides (until it's not 0 anymore, aka user chooses to alight)
while(!dAnswer) {
    // Prompt user for input
    printf("\nHow many people are in the elevator? ");
    scanf("%d", &dUsersNum);
    getchar();
// Declared array for ALL locations of the users
    char dDestinationFloorInput[dUsersNum][2];
    for(dLoopCounter = 0; dLoopCounter < dUsersNum; dLoopCounter++){
        printf("\nWhat floor is Person %d going to? ", dLoopCounter+1);
        printf("\nFloor: ");
        scanf("%s", dDestinationFloorInput[dLoopCounter]);
        getchar();  
    }// end for
    int dLastUser = dUsersNum;
// ITERATE THROUGH ALL LOCATIONS FOR ALL USERS
    for(dLoopCounter = 0; dLoopCounter < dUsersNum; dLoopCounter++){
    
// Looking at basement cases
    if( dDestinationFloorInput[dLoopCounter][0] == 'B' ){// main if
        // Looking at the second character of the dDestinationFloorInput
        if( dDestinationFloorInput[dLoopCounter][1] == '1' ){// if B1
            travelToFloor(dCurrentFloor, -1);
            dCurrentFloor = -1;
        }//end if B1
        else if( dDestinationFloorInput[dLoopCounter][1] == '2'){// if B2
            travelToFloor(dCurrentFloor, -2);
            dCurrentFloor = -2;
        }//end if B2

        else if( dDestinationFloorInput[dLoopCounter][1] == '3' ){// if B3
            if( dCurrentFloor > -3 ){
                goDown(dCurrentFloor, -3);
                printf("You are NOW on floor: -3.\n");
            }// end if B3
            else{
                printf("You are already located on this floor.\n");
            } // end else B3
            dCurrentFloor = -3;
        }//end else if for B3, otherwise invalid input
        else{
            printf("Invalid input! ");
        }// end else for invalid input
    }//end main if

// Else looking at the floors consisted of one character
    else{
    switch(dDestinationFloorInput[dLoopCounter][0]){
        case 'G':
            travelToFloor(dCurrentFloor, 0);
            dCurrentFloor = 0;
            break;
        case '1':
            travelToFloor(dCurrentFloor, 1);
            dCurrentFloor = 1;
            break;
        case '2':
            travelToFloor(dCurrentFloor, 2);
            dCurrentFloor = 2;
            break;
        case '3':
            travelToFloor(dCurrentFloor, 3);
            dCurrentFloor = 3;
            break;
        case '4':
            travelToFloor(dCurrentFloor, 4);
            dCurrentFloor = 4;
            break;
        case '5':
            travelToFloor(dCurrentFloor, 5);
            dCurrentFloor = 5;
            break;
        default:
            printf("Invalid input! ");
            break;
        }// end switch case
    }// end else
// ASK FOR NEW USER ENTRIES AT EACH STOP
    int dNewUsers;
    printf("\nHow many new users have entered the elevator? ");
    scanf("%d", &dNewUsers);
    getchar();
    dUsersNum+=dNewUsers;
    if(dNewUsers==0){
        continue;
    }//end if
// FOR LOOP TO ITERATE THROUGH ALL THE LOCATIONS
    for(int j = dLastUser; j < dUsersNum; j++){//
        printf("\nWhat floor is Person %d going to? ", j+1);
        printf("\nFloor: ");
        scanf("%s", dDestinationFloorInput[j]);
        getchar();
    }//end inner for
    dLastUser=dUsersNum;
    if(dUsersNum == 0){
        break;
    }//endif
    // Prompt for AlightInput at every destination
    dAnswer = alightLift(dAlightInput);
    }// end outer for
    if(dUsersNum == 0){
        printf("\nThere aren't any more people in the elevator. Goodbye!\n\n");
        break;
    } //end if      
  }// end while
}// end of function rideElevator
    
int main(){
    printInstructions();
    rideElevator();
    return 0;
}
