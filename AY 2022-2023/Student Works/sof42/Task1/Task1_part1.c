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

// Function to alight the lift
int alightLift(char dAlightInput)
{
    printf("Do you want to alight the elevator? (y/n)? ");
    scanf("%c", &dAlightInput);
    getchar();
    if( dAlightInput=='y' ) {
        printf("Goodbye.\n");
        return 1;
    }//end if
    else if( dAlightInput == 'n' ){
        return 0;
    }//end else if
    else{
        printf("Incorrect input! Please enter 'y' or 'n'.\n");
        scanf("%c", &dAlightInput);
        getchar();
    }// end else   
}//end function

// Function for the lift to go up
void goingUp(int dCurrentFloor,int dDestinationFloor){
    for(int i=dCurrentFloor-1;i<dDestinationFloor;i++){
        printf("%d\n", i+1);
        printf("...\n");
        printf("..\n");
        printf(".\n");
    }//end for
}//end of function goingUp

// Function for the lift to go down
void goingDown(int dCurrentFloor,int dDestinationFloor){
    for(int i=dCurrentFloor+1;i>dDestinationFloor;i--){
        printf("%d\n",i-1);
        printf(".\n");
        printf("..\n");
        printf("...\n");
    }//end for
}//end of function goingDown

void rideElevator(){
// DECLARE VARIABLES
    int dCurrentFloor = 0, dAnswer = 0; // dAnswer set to 0, so while runs for the first time
    char dFloorInputArr[2], dAlightInput;

    // Elevator starts on the ground floor (dCurrentFloor=0)
    printf("\nYou are currently located on the GROUND floor.\n");  

// While for multiple rides (until it's not 0 anymore, aka user chooses to alight)
while(!dAnswer) {
    // Prompt user for input
    printf("\nWhat floor do you want to go to? Floor: ");
    scanf("%s", dFloorInputArr);
    getchar();
// Looking at basement cases
    if( dFloorInputArr[0] == 'B' ){// main if
        // Looking at the second character of the dFloorInputArr
        if( dFloorInputArr[1] == '1' ){
            if( dCurrentFloor > -1 ){
                goingDown(dCurrentFloor,-1);
                 printf("\nYou are NOW located in Basement 1.\n");
            }//end if
            else if( dCurrentFloor < -1 ){
                goingUp(dCurrentFloor,-1);
                 printf("\nYou are NOW located in Basement 1.\n");
            }//end if
            else{
                printf("\nYou are already located in Basement 1.\n");                
            }
        dCurrentFloor = -1;
        }//end if B1
        else if( dFloorInputArr[1] == '2'){
            if( dCurrentFloor > -2 ){
                goingDown(dCurrentFloor, -2);
                 printf("You are NOW located in Basement 2.\n");
            }//end if B2
            else if( dCurrentFloor < -2 ){
                goingUp(dCurrentFloor, -2);
                 printf("You are NOW located in Basement 2.\n");
            }//end else if B2
            else{
                printf("You are already located in Basement 2.\n");
            }// end else B2
        dCurrentFloor = -2;
        }//end if B2

        else if( dFloorInputArr[1] == '3' ){
            if( dCurrentFloor > -3 ){
                goingDown(dCurrentFloor, -3);
                printf("You are NOW located in Basement 3.\n");
            }// end if B3
            else{
                printf("You are already located in Basement 3.\n");
            } // end else B3
        dCurrentFloor = -3;
        }//end else if for B3, otherwise invalid input
        else{
            printf("\nInvalid input! Try again.\n");
        }// end else
    }//end main if

// Else looking at the floors consisted of one character
    else{
    switch(dFloorInputArr[0]){
    case 'G':
        if( dCurrentFloor > 0 ){        
            goingDown(dCurrentFloor, 0);
            printf("\nYou are NOW located on the ground floor.\n");
        }// end if
        else if ( dCurrentFloor < 0 ){
            goingUp(dCurrentFloor, 0);
            printf("\nYou are NOW located on the ground floor.\n");
        }// end else if
        else{
            printf("\nYou are already on the GROUND floor.\n");
        }//end else G
        dCurrentFloor = 0;
        break;
    case '1':
        if( dCurrentFloor > 1 ){
            goingDown(dCurrentFloor, 1);
            printf("\nYou are NOW located on the 1st floor.\n");
        }//end if 1
        else if( dCurrentFloor<1 ){
            goingUp(dCurrentFloor, 1);
            printf("\nYou are NOW located on the 1st floor.\n");
        }//end else if 1
        else{
            printf("\nYou are already located on the 1st floor.\n");
        }//end else 1
        dCurrentFloor = 1;
        break;
    case '2':
        if( dCurrentFloor > 2 ){
            goingDown(dCurrentFloor, 2);
            printf("\nYou are NOW located the 2nd floor.\n");
        }//end if 2
        else if(dCurrentFloor< 2){
            goingUp(dCurrentFloor, 2);
            printf("\nYou are NOW located the 2nd floor.\n");
        }//end else if 2
        else{
            printf("\nYou are already located the 2nd floor.\n");
        }// end else 2    
        dCurrentFloor=2;
        break;
    case '3':
        if( dCurrentFloor > 3 ){
            goingDown(dCurrentFloor, 3);
            printf("\nYou are NOW located the 3rd floor.\n");
        }//end if 3
        else if( dCurrentFloor < 3 ){
            goingUp(dCurrentFloor, 3);
            printf("\nYou are NOW located the 3rd floor.\n");
        }//end else if 3
        else{
            printf("\nYou are already located the 3rd floor.\n");
        }// end else 3
        dCurrentFloor = 3;
        break;
    case '4':
        if( dCurrentFloor > 4 ){
            goingDown(dCurrentFloor, 4);
            printf("\nYou are NOW located the 4th floor.\n");
        }// end if 4
        else if( dCurrentFloor < 4 ){
            goingUp(dCurrentFloor, 4);
            printf("\nYou are NOW located the 4th floor.\n");
        }//end else if 4
        else{
            printf("\nYou are already located the 4th floor.\n");
        }// end else 4
        dCurrentFloor = 4;
        break;
    case '5':
        if( dCurrentFloor < 5 ){
            goingUp(dCurrentFloor, 5);
            printf("\nYou are NOW located the 5th floor.\n");
        }//end if 5
        else if ( dCurrentFloor == 5 ){
            printf("\nYou are already on the 5th floor.\n");
        }// end else if 5
        dCurrentFloor = 5;
        break;
    default:
        printf("Invalid input! Try again.\n");
        scanf("%s",dFloorInputArr);
        break;
    }// end switch case
    }// end else
    // Prompt for AlightInput at every destination
    dAnswer=alightLift(dAlightInput);       
 }//end while
 }//end of function rideElevator
    

int main(){
    printInstructions();
    rideElevator();
    return 0;
}					
