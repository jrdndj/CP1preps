//This code was written by Marko Taleski :P
//C code for elevator

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){


    //Declaring variables
    char cFloor = 'G';
    bool bExit = false;
    //I used a boolean because it's easier to stop the while loop that controls the entire code
    while(!bExit){
        //First is the switch with all the text from the floors because it needs to print for the ground floor
        switch ( cFloor){
            /*The text is practically the same for every floor only the first one changes that tells you what floor you are on,
             and in every case you have the option to go to the same floor because that is possible on elevators you can choose the same floor */
            case '1':
                printf("You are currently at the first floor.\n");
                printf("Leave: X,");
                printf("\nGo to ground floor: G,");
                printf("\nGo to second floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");
            break;

             case '2':
                printf("You are currently at the second floor.\n");
                printf("Leave: X,");
                printf("\nGo to ground floor: G,");
                printf("\nGo to second floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");

            break;

             case '3':
                printf("You are currently at the third floor.\n");
                printf("Leave: X,");
                printf("\nGo to ground floor: G,");
                printf("\nGo to second floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");
            break;

             case '4':
                printf("You are currently at the fourth floor.\n");
                printf("Leave: X,");
                printf("\nGo to ground floor: G,");
                printf("\nGo to second floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");

            break;

             case'G':
                printf("You are currently at the ground floor.\n");
                printf("Leave: X,");
                printf("\nGo to ground floor: G,");
                printf("\nGo to second floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");
            break;

            case'g':
                printf("You are currently at the ground floor.\n");
                printf("Leave: X,");
                printf("\nGo to ground floor: G,");
                printf("\nGo to second floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");
            break;

        }//endSwitch

        /*Staying in the while loop we ask the user for the input, and if the user inputs anything but X or x the boolean stays false and the while loop repeats it's self,
          only the cFloor changes which means when the while loop starts over the user gets the message from the floor he has selected,
          and if the user chooses X or x the boolean changes in to true and the while loop finishes */
        printf("\n");
        char cChoice;
        scanf(" %c", &cChoice);
        printf("\n");
        switch ( cChoice){

            case '1':
                cFloor = '1';
            break;

            case '2':
                cFloor = '2';
            break;

            case '3':
                cFloor = '3';
            break;

            case '4':
                cFloor = '4';
            break;

            case 'G':
               cFloor = 'G';
            break;

            case 'g':
               cFloor = 'g';
            break;

            case 'X':
               cFloor = 'X';
               printf("You have exited the elevator.");
               bExit = true;
            break;

            case 'x':
               cFloor = 'x';
               printf("You have exited the elevator.");
               bExit = true;
            break;

            default:
                printf("That floor doesn't exist");
                bExit = true;
            break;

        }//end of switch
    }//end of while loop

    return 0;
}
