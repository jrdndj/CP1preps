#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MIN_FLOOR -3  // minimum floor is B3
#define MAX_FLOOR 5   // maximum floor is 5
#define MAX_CAPACITY 10  // maximum capacity of the elevator

// function prototypes
void currStatus(int dInitFloor, int passCount);
int destFloor(char dGoFloor[]);
int elevMove(int dInitFloor, int dDest);
int passChange(void);
bool promptCont(void);

int main(void)
{
    int dInitFloor = 0;  // current floor of the elevator
    int dDest;  // destination floor requested by the user
    int passCount = 1;  // number of passengers in the elevator

    while (true)
    {
        // display the current floor and number of passengers
        currStatus(dInitFloor, passCount);

        // prompt the user to enter the destination floor
        char dGoFloor[4];
        printf("Enter destination floor (G for ground floor, B1, B2, or B3 for basement floors): ");
        scanf("%s", dGoFloor);

        // convert the input string to an integer floor number
        dDest = destFloor(dGoFloor);

        // validate the destination floor
        if (dDest < MIN_FLOOR || dDest > MAX_FLOOR)
        {
            printf("Error: Invalid floor.\n");
            continue;
        }

        // move the elevator to the destination floor
        dInitFloor = elevMove(dInitFloor, dDest);

        // prompt the user to enter the number of passengers entering or leaving the elevator
        int passNum = passChange();

        // validate the number of passengers
        if (passNum < -MAX_CAPACITY || passNum > MAX_CAPACITY || passNum + passCount <= 0)
        {
            printf("Error: Invalid number of passengers.\n");
            continue;
        }

        // update the number of passengers in the elevator
        passCount += passNum;

        // prompt the user to continue or not
        if (!promptCont())
        {
            break;
        }
    }

    return 0;
}

// function to display the current floor and number of passengers
void currStatus(int dInitFloor, int passCount)
{
    printf("Current floor: ");
    if (dInitFloor == 0)
    {
        printf("Ground");
    }
    else if (dInitFloor < 0)
    {
        printf("B%d", -dInitFloor);
    }
    else
    {
        printf("%d", dInitFloor);
    }
    printf("\tNumber of passengers: %d\n", passCount);
}

// function to convert the input string to an integer floor number
int destFloor(char dGoFloor[])
{
    if (strcmp(dGoFloor, "G") == 0)
    {
        return 0;
    }
    else if (strcmp(dGoFloor, "B1") == 0)
    {
        return -1;
    }
    else if (strcmp(dGoFloor, "B2") == 0)
    {
        return -2;
    }
    else if (strcmp(dGoFloor, "B3") == 0)
    {
        return -3;
    }
    else
    {
        int dDest = atoi(dGoFloor);
        if (dDest == 0)
        {
            printf("Error: Invalid floor.\n");
            return 0;
        }
        else
        {
            return dDest;
        }
    }
}

// function to move the elevator to the destination floor
int elevMove(int dInitFloor, int dDest)
{
    if (dDest > dInitFloor)
    {
        printf("Moving up...\n");
        while (dInitFloor < dDest)
        {
            dInitFloor++;
            printf("Passing floor %d...\n", dInitFloor);
        }
    }
    else if (dDest < dInitFloor)
    {
        printf("Moving down...\n");
        while (dInitFloor > dDest)
        {
            dInitFloor--;
            printf("Passing floor %d...\n", dInitFloor);
        }
    }
    else
    {
        printf("Already at floor %d.\n", dDest);
        return dDest;
    }
    printf("Arrived at floor %d.\n", dDest);
    return dDest;
}


// function to prompt the user to enter the number of passengers entering or leaving the elevator
int passChange(void)
{
    int passNum;
    printf("Enter the number of passengers entering or leaving the elevator (enter a negative value to indicate leaving): ");
    scanf("%d", &passNum);
    return passNum;
}

// function to prompt the user to continue or not
bool promptCont(void)
{
    char response[4];
    printf("Continue? (yes/no): ");
    scanf("%s", response);
    return strcmp(response, "yes") == 0;
}
