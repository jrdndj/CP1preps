#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "windows.h"

/*
Everything i have used in my homework was taken from famnit website(from week 9 till today's class) and from this websites
https://learn.microsoft.com/en-us/cpp/c-language/?view=msvc-170
https://www.tutorialspoint.com/c_standard_library/index.htm
*/

int main() {
	char* floorList[] = { "B3", "B2", "B1", "G", "1", "2", "3", "4", "5" };
	unsigned short floorsNumber = sizeof(floorList) / sizeof(floorList[0]); 
	unsigned short currentFloorIndex = 3;
	short tempFloorIndex;

	const char scanPattern[] = "%4s";
	const char exitCommand[] = "exit";
	const char moveUpCommand[] = "up";
	const char moveDownCommand[] = "down";

	char* currentFloor = floorList[currentFloorIndex];
	char* inputFloor = malloc(sizeof(exitCommand));

	unsigned short randomPassengersNumber;

	printStartedInfo(&currentFloor);
	srand(time(NULL)); //generation numbers using current time

	while (1) {
		printf("\n Please enter the floor you want to go to: ");
		scanf(&scanPattern, inputFloor);

		if (strcmp(inputFloor, exitCommand) == 0) { //strings compare
			printf("\n Thank you for using an elevator \n");
			return 0;
		}

		tempFloorIndex = validFloor(&inputFloor, &floorList, &floorsNumber);

		if (tempFloorIndex >= 0) {
			if (tempFloorIndex != currentFloorIndex) {
				int* floorQueue = (int*)malloc(floorsNumber * sizeof(int));
				randomPassengersNumber = getRandomNumber(0, 6);

				if (randomPassengersNumber > 0) {
					moveToFloorQueue(&currentFloorIndex, &tempFloorIndex, &randomPassengersNumber,
						&floorQueue, &floorList, &floorsNumber);
				}

				currentFloorIndex = tempFloorIndex;
				printCurrentFloor(&floorList[currentFloorIndex]);
			}
			else
				printf(" You are already on this floor\n");
		}
		else
			if (strcmp(inputFloor, moveUpCommand) == 0)
				moveUp(&inputFloor, &currentFloorIndex, &floorList, &floorsNumber);
			else
				if (strcmp(inputFloor, moveDownCommand) == 0)
					moveDown(&inputFloor, &currentFloorIndex, &floorList);
				else
					printf("\n There are no such floor as \"%s\"", inputFloor);

		clearInputBuffer();
	}

}

int getRandomNumber(unsigned int minNumber, unsigned int maxNumber) {
	return rand() % (maxNumber - minNumber + 1) + minNumber;
}

int validFloor(char* inputFloor[], char* floorList[], unsigned short* floorsNumber) 
{
	for (int i = 0; i < *floorsNumber; i++)
		if (strcmp(*inputFloor, floorList[i]) == 0)
			return i;

	return -1;
}

int moveUp(char* inputFloor[], unsigned short* currentFloorIndex, char* floorList[], unsigned short* floorsNumber) {
	if (*currentFloorIndex < *floorsNumber - 1) {
		*currentFloorIndex += 1;
		strcpy(*inputFloor, floorList[*currentFloorIndex]);// copy from second string to first
		printCurrentFloor(inputFloor);
	}
	else
		printf("\n You can't go higher than fifth floor");
}
int moveDown(char* inputFloor[], unsigned short* currentFloorIndex, char* floorList[]) { //short was used for optimisation
	if (*currentFloorIndex > 0) {
		*currentFloorIndex -= 1;
		memcpy(*inputFloor, floorList[*currentFloorIndex], 5);
		printCurrentFloor(inputFloor);
	}
	else
		printf("\n You can't go lower than Basement 3");
}

int moveToFloorQueue(unsigned short* currentFloorIndex, short* tempFloorIndex,
	unsigned short* randomPassengersNumber, int* floorQueue, char* floorList[],
	unsigned short* floorsNumber)
{
	for (int i = 0; i < *floorsNumber; i++)
		floorQueue[i] = 0;

	unsigned char randomIndexNumber;

	for (int i = 0; i < *randomPassengersNumber; i++) {
		if (*currentFloorIndex > *tempFloorIndex)
			randomIndexNumber = getRandomNumber(*tempFloorIndex, *currentFloorIndex - 1);
		else
			randomIndexNumber = getRandomNumber(*currentFloorIndex + 1, *tempFloorIndex);

		floorQueue[randomIndexNumber] += 1;
	}

	int i;

	if (*currentFloorIndex > *tempFloorIndex)
		i = *floorsNumber - 1;
	else
		i = 0;

	printf("\n");
	for (; i >= 0 && i < *floorsNumber && *currentFloorIndex != *tempFloorIndex;) {
		if (floorQueue[i] > 0) {
			*currentFloorIndex = i;
			printf(" %d passengers left the elevator on the %s floor\n", floorQueue[i], floorList[i]);
			Sleep(750); //little pause in console for better looking
		}

		if (*currentFloorIndex > *tempFloorIndex)
			i--;
		else
			i++;
	}
}

int printCurrentFloor(char* currentFloor[]) {
	printf("\n You are now on %s floor", *currentFloor);
}
int printStartedInfo(char* currentFloor[]) {
	printf("\n You are now on %s floor", *currentFloor);
	printf("\n If you want to exit type \"exit\" \n");
	printAvaibleFloors();
}
int printAvaibleFloors() {
	printf("\n Avaible floors are: ");
	printf("\n Basement 1   -> [B1]");
	printf("\n Basement 2   -> [B2]");
	printf("\n Basement 3   -> [B3]");
	printf("\n Ground floor -> [G]");
	printf("\n First floor  -> [1]");
	printf("\n Second floor -> [2]");
	printf("\n Third floor  -> [3]");
	printf("\n Fourth floor -> [4]");
	printf("\n Fifth floor  -> [5]\n");
	printf("\n To go up   -> [up]");
	printf("\n To go down -> [down]\n");
	return 0;
}

int clearInputBuffer() {
	rewind(stdin);
}