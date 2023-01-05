/*
    File: Task1_part1.c (missing functionality for multiple users at a time)
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
int alightLift(char dAlightInput)
{
    printf("Do you want to alight the elevator? (y/n)? ");
    scanf("%c",&dAlightInput);
    getchar();
    if(dAlightInput == 'y') {
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
    }   
}//end function

// Function for the lift to go up
void goUp(int dCurrentFloor, int dDestinationFloor){
    for(int i=dCurrentFloor - 1; i < dDestinationFloor; i++){
        printf("%d\n", i+1);
        printf("...\n");
        printf("..\n");
        printf(".\n");
    }//end for
}//end of function goUp

// Function for the lift to go down
void goDown(int dCurrentFloor, int dDestinationFloor){
    for(int i=dCurrentFloor + 1;i > dDestinationFloor; i--){
        printf("%d\n",i-1);
        printf(".\n");
        printf("..\n");
        printf("...\n");
    }//end for
}//end of function goDown

void rideElevator(){
// DECLARE VARIABLES
    int dCurrentFloor = 0, dAnswer = 0; // dAnswer set to 0, so while runs for the first time
    char dDestinationFloorInput[2], dAlightInput;

    // Elevator starts on the ground floor (dCurrentFloor=0)
    printf("\nYou are currently located on the GROUND floor.\n");  

// While for multiple rides (until it's not 0 anymore, aka user chooses to alight)
while(!dAnswer) {
    // Prompt user for input
    printf("\nWhat floor do you want to go to? Floor: ");
    scanf("%s", dDestinationFloorInput);
    getchar();
// Looking at basement cases
    if( dDestinationFloorInput[0] == 'B' ){// main if
        // Looking at the second character of the dDestinationFloorInput
        if( dDestinationFloorInput[1] == '1' ){// if B1
            if( dCurrentFloor > -1 ){
                goDown(dCurrentFloor,-1);
                printf("\nYou are NOW located in Basement 1.\n");
            }//end if
            else if( dCurrentFloor < -1 ){
                goUp(dCurrentFloor,-1);
                 printf("\nYou are NOW located in Basement 1.\n");
            }//end else if
            else{
                printf("\nYou are already located in Basement 1.\n");                
            }//end else
            dCurrentFloor = -1;
        }//end if B1
        else if( dDestinationFloorInput[1] == '2'){// if B2
            if( dCurrentFloor > -2 ){
                goDown(dCurrentFloor, -2);
                printf("You are NOW located in Basement 2.\n");
            }//end if B2
            else if( dCurrentFloor < -2 ){
                goUp(dCurrentFloor, -2);
                printf("You are NOW located in Basement 2.\n");
            }//end else if B2
            else{
                printf("You are already located in Basement 2.\n");
            }// end else B2
            dCurrentFloor = -2;
        }//end if B2

        else if( dDestinationFloorInput[1] == '3' ){// if B3
            if( dCurrentFloor > -3 ){
                goDown(dCurrentFloor, -3);
                printf("You are NOW located in Basement 3.\n");
            }// end if B3
            else{
                printf("You are already located in Basement 3.\n");
            } // end else B3
            dCurrentFloor = -3;
        }//end else if for B3, otherwise invalid input
        else{
            printf("\nInvalid input! Try again.\n");
        }// end else for invalid input
    }//end main if

// Else looking at the floors consisted of one character
    else{
    switch(dDestinationFloorInput[0]){
    case 'G':
        if( dCurrentFloor > 0 ){        
            goDown(dCurrentFloor, 0);
            printf("\nYou are NOW located on the ground floor.\n");
        }// end if
        else if ( dCurrentFloor < 0 ){
            goUp(dCurrentFloor, 0);
            printf("\nYou are NOW located on the ground floor.\n");
        }// end else if
        else{
            printf("\nYou are already on the GROUND floor.\n");
        }//end else G
        dCurrentFloor = 0;
        break;
    case '1':
        if( dCurrentFloor > 1 ){
            goDown(dCurrentFloor, 1);
            printf("\nYou are NOW located on the 1st floor.\n");
        }//end if 1
        else if( dCurrentFloor<1 ){
            goUp(dCurrentFloor, 1);
            printf("\nYou are NOW located on the 1st floor.\n");
        }//end else if 1
        else{
            printf("\nYou are already located on the 1st floor.\n");
        }//end else 1
        dCurrentFloor = 1;
        break;
    case '2':
        if( dCurrentFloor > 2 ){
            goDown(dCurrentFloor, 2);
            printf("\nYou are NOW located the 2nd floor.\n");
        }//end if 2
        else if(dCurrentFloor< 2){
            goUp(dCurrentFloor, 2);
            printf("\nYou are NOW located the 2nd floor.\n");
        }//end else if 2
        else{
            printf("\nYou are already located the 2nd floor.\n");
        }// end else 2    
        dCurrentFloor = 2;
        break;
    case '3':
        if( dCurrentFloor > 3 ){
            goDown(dCurrentFloor, 3);
            printf("\nYou are NOW located the 3rd floor.\n");
        }//end if 3
        else if( dCurrentFloor < 3 ){
            goUp(dCurrentFloor, 3);
            printf("\nYou are NOW located the 3rd floor.\n");
        }//end else if 3
        else{
            printf("\nYou are already located the 3rd floor.\n");
        }// end else 3
        dCurrentFloor = 3;
        break;
    case '4':
        if( dCurrentFloor > 4 ){
            goDown(dCurrentFloor, 4);
            printf("\nYou are NOW located the 4th floor.\n");
        }// end if 4
        else if( dCurrentFloor < 4 ){
            goUp(dCurrentFloor, 4);
            printf("\nYou are NOW located the 4th floor.\n");
        }//end else if 4
        else{
            printf("\nYou are already located the 4th floor.\n");
        }// end else 4
        dCurrentFloor = 4;
        break;
    case '5':
        if( dCurrentFloor < 5 ){
            goUp(dCurrentFloor, 5);
            printf("\nYou are NOW located the 5th floor.\n");
        }//end if 5
        else if ( dCurrentFloor == 5 ){
            printf("\nYou are already on the 5th floor.\n");
        }// end else if 5
        dCurrentFloor = 5;
        break;
    default:
        printf("Invalid input! Try again.\n");
        scanf("%s", dDestinationFloorInput);
        break;
    }// end switch case
    }// end else
    // Prompt for AlightInput at every destination
    dAnswer = alightLift(dAlightInput);       
 }// end while
 }// end of function rideElevator
    

int main(){
    printInstructions();
    rideElevator();
    return 0;
}					
