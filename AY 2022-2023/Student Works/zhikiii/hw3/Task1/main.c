#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_floor(char arr[][3], char input[])
{
    int flag = 1;
    for (int i = 0; i < 9; i++)
    {
        if (strcmp(input, arr[i]) == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}



int main()
{
    int true = 1;

    char sCurrentFloor[2] = "G";
    char sNextFloor[2];

    char floors[9][3] = {"B3\0",
                         "B2\0",
                         "B1\0",
                         "G\0",
                         "1\0",
                         "2\0",
                         "3\0",
                         "4\0",
                         "5\0"};

    while (1)
    {
        printf("You are currently on floor %s. Which floor you you want to go?: ", sCurrentFloor);
        scanf(" %s", sNextFloor);
        if (check_floor(floors, sNextFloor) == 1)
        {
            printf("Wrong input, try again. ");
            continue;
        }

        strcpy(sCurrentFloor, sNextFloor);

    }
    return 0;
}
