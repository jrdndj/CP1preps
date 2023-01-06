#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function to check if the entered floor is found in the list
int check_floor(char sArr[][3], char sInput[])
{
    int dFlag = 1;
    for (int i = 0; i < 9; i++) //I use 9 because there are totally 9 floors, from b3 to 5
    {
        if (strcmp(sInput, sArr[i]) == 0) //comparing the floors with the input, return 0 if they are the same
        {
            dFlag = 0;   //keeping track if the condition is true or false
            break;
        }
    }
    return dFlag;
}

// return the index of the floor
int return_index(char sArr[][3], char sFloorToCheck[])
{
    int dIndex = 0;
    for (int i = 0; i < 9; i++)
        if (strcmp(sFloorToCheck, sArr[i]) == 0)
        {
            dIndex = i;
            break;
        }

    return dIndex;
}

int main()
{
    char sCurrentFloor[2] = "G";    //floor which we currently are
    char sNextFloor[2];             //floor which the user wants to go

    //possible floors from which the user can select
    //I use matrix, because sor basement level I need 2 characters, 1 to 3, and there are totally 9 floors
    char sFloors[9][3] = {"B3\0",
                         "B2\0",
                         "B1\0",
                         "G\0",
                         "1\0",
                         "2\0",
                         "3\0",
                         "4\0",
                         "5\0"};

    //this is infinite loop, never stops, as real elevator is always expecting a command
    while (1)
    {
        //asking the user for input
        printf("You are currently on floor %s. Which floor you you want to go?: ", sCurrentFloor);
        scanf(" %s", sNextFloor);
        //with this condition, we check whether the user entered correct input, so the program doesn't crash
        if (check_floor(sFloors, sNextFloor) == 1)
        {
            printf("Wrong input, try again. ");
            continue;   //continue means skip everything below and start the loop over
        } // endif

        //printing whether the lift goes up or down, using the function above
        if (return_index(sFloors, sNextFloor) > return_index(sFloors, sCurrentFloor))
        {
            for (int i = return_index(sFloors, sCurrentFloor) + 1; i <= return_index(sFloors, sNextFloor); i++)
                printf(" Going up. We reached floor %s.\n", sFloors[i]);
        } // endif
        else
        {
            for (int i = return_index(sFloors, sCurrentFloor); i >= return_index(sFloors, sNextFloor); i--)
                printf(" Going down. We reached floor %s.\n", sFloors[i]);
        } // endelse
        // printf("You reached floor %s.\n", sNextFloor);

         //remembering the last aligned floor, so the next time we ride we start from that floor
        strcpy(sCurrentFloor, sNextFloor);

        
    } // endwhile
    return 0;
} // endmain
