/*
    Zhivko Stoimchev, 89221056
    Elevator controller program
    06.01.23', from Kavadarci
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function to check if the entered floor is found in the list
int check_floor(char sArr[][3], char sInput[]) {
    int dFlag = 1;
    for (int i = 0; i < 9; i++) { // I use 9 because there are totally 9 floors, from b3 to 5, including g
        if (strcmp(sInput, sArr[i]) == 0) { // comparing the floors with the input, return 0 if they are the same
            dFlag = 0; // keeping track if the condition is true or false
            break;
        }
    }
    return dFlag;
}

// return the index of the floor
int return_index(char sArr[][3], char sFloorToCheck[]) {
    int dIndex = 0;
    for (int i = 0; i < 9; i++)
        if (strcmp(sFloorToCheck, sArr[i]) == 0) {
            dIndex = i;
            break;
        }
    return dIndex;
}

int main() {
    // declaring variables until next ==================================================================================

    char sCurrentFloor[2] = "G"; // floor which we currently are
    char sNextFloor[2];          // floor which the user wants to go

    // possible floors from which the user can select
    // I use matrix, because sor basement level I need 2 characters, 1 to 3, and there are totally 9 floors
    char sFloors[9][3] = {"B3\0",
                          "B2\0",
                          "B1\0",
                          "G\0",
                          "1\0",
                          "2\0",
                          "3\0",
                          "4\0",
                          "5\0"};
    int dCurrentNumOfPeople = 1; // number of people in the elevaotr including the current user
    int dPeopleThatLeft;         // people that left the elevator
    char cAnswer;                // answer if there are more people to join the elevator
    int dMaxNumOfPeople = 0;     // maximum people that allows the elevator, max is 10
    // finished declaring variables =====================================================================================
    // this is infinite loop, never stops, as real elevator is always expecting a command

    int flag = 1; // until true, the loop will continue. It will change to false once there are no people in the lift
    while (flag) {
        // asking the user for input
        printf("You are currently on floor %s. Which floor you you want to go?: ", sCurrentFloor);
        scanf(" %s", sNextFloor);
        // with this condition, we check whether the user entered correct input, so the program doesn't crash
        if (check_floor(sFloors, sNextFloor) == 1) {
            printf("Wrong input, try again. ");
            continue; // continue means skip everything below and start the loop over
        }             // endif

        /* people entering the elevator */
        cAnswer = 'y';
        while (cAnswer == 'y') { // no more than 10 people are allowed
            printf("Are there more people that want to enter the elevator? (y/n): ");
            scanf(" %c", &cAnswer);
            if (cAnswer == 'y') {
                dCurrentNumOfPeople++;
                dMaxNumOfPeople++;
                if (dMaxNumOfPeople == 9) { // check if there are still places for more people
                    printf("The elevator is full!\n");
                    break;
                }//endif
            } // endif
        }     // endwhile

        /* printing whether the lift goes up or down */
        if (return_index(sFloors, sNextFloor) > return_index(sFloors, sCurrentFloor)) {
            for (int i = return_index(sFloors, sCurrentFloor) + 1; i <= return_index(sFloors, sNextFloor); i++)
                printf("\tGoing up. We reached floor %s.\n", sFloors[i]);
        } // endif
        else {
            for (int i = return_index(sFloors, sCurrentFloor); i >= return_index(sFloors, sNextFloor); i--)
                printf("\tGoing down. We reached floor %s.\n", sFloors[i]);
        } // endelse

        /* remembering the last aligned floor, so the next time we ride we start from that floor */
        strcpy(sCurrentFloor, sNextFloor);

        /* people exiting from the elevator */
        dPeopleThatLeft = -1; // preventing the user from entering wrong input
        while (dPeopleThatLeft < 0 || dPeopleThatLeft > dCurrentNumOfPeople) {
            printf(" On floor %s arrived %d people. How many people want to exit? (0-%d): ", sCurrentFloor, dCurrentNumOfPeople, dCurrentNumOfPeople);
            scanf("%d", &dPeopleThatLeft);
        }
        if (dPeopleThatLeft >= dCurrentNumOfPeople) {
            printf(" There are no more people in the elevator. Goodbye :)\n");
            flag = 0;
        } // endif
        else {
            dCurrentNumOfPeople -= dPeopleThatLeft; // releasing number of current people
            dMaxNumOfPeople += dPeopleThatLeft;     // freeing more space for new people to join
            printf(" There are %d people left in the elevator.\n", dCurrentNumOfPeople);
        } // endelse

    } // endwhile
    return 0;
} // endmain
