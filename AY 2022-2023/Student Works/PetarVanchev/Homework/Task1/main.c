#include <stdio.h>
#include <string.h>

// Function to convert a string form of floor to an integer form
int floorConversion(char destFloorName[]) {
        int floor;
        char newFloorName[2];
        if (strcmp(destFloorName,"B3") == 0){
            floor=-3;
        }
        else if (strcmp(destFloorName,"B2") == 0){
            floor=-2;
        }
        else if (strcmp(destFloorName,"B1") == 0){
            floor=-1;
        }
        else {
            switch (destFloorName[0]) {
            // case 'D' is way for a user to tell that he is done using the elevator
            case 'D':
                floor=7;
                break;
            case 'G':
                floor=0;
                break;
            case '1':
                floor=1;
                break;
            case '2':
                floor=2;
                break;
            case '3':
                floor=3;
                break;
            case '4':
                floor=4;
                break;
            case '5':
                floor=5;
                break;
            default: 
                floor=6;
                break;
            }
        }
    return floor;
}

// Print the string form of an integer floor
void printFloorName (int floor){
    if (floor==-3)
    {
        printf("You are on floor B3\n");
    }
    else if (floor==-2)
    {
        printf("You are on floor B2\n");
    }
    else if (floor==-1)
    {
        printf("You are on floor B1\n");
    }
    else if (floor==-0)
    {
        printf("You are on floor G\n");
    }
    else {
        printf("You are on floor %d\n", floor);
    }
}

int main()
{
    int currFloor=0,destFloor, numUsers=1;
    char destFloorName[2];
    printf("When you are done traveling write 'D' as destination floor\n");
    scanf("%d", &numUsers);
    while(numUsers){
        printf("Users: %d\n", numUsers);
        printf("Enter your destination floor ");
        scanf("%s", destFloorName);
        destFloor = floorConversion(destFloorName);
        if(destFloor==7){
            numUsers--;
        }
        while (destFloor==6){
            printf("Enter a valid floor\n");
            scanf("%s", destFloorName);
            destFloor = floorConversion(destFloorName);
        }
        if (destFloor<currFloor){
            while(destFloor<currFloor){
                currFloor--;
                printFloorName(currFloor);

            }
        }
        else if (destFloor>currFloor){
            while(destFloor>currFloor){
                currFloor++;
                printFloorName(currFloor);
            }
        }
        else {
            printf("You are already on that floor\n");
        }
    }
}
