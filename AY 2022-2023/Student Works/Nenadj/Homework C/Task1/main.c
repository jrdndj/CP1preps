// Task 1 ~ Elevator Simulator	Student: Nenad Jakovchevski		Student_ID: 89221061
/* Adding Libraries Set Here: */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Global variable declarations Set Here */
#define KRED  "\x1B[31m" // defining local variable for COLOR ~ Red
#define KGRN  "\x1B[32m" // defining local variable for COLOR ~ Green
#define KNRM  "\x1B[0m" // defining local varialbe for NORMAL Terminal Dislpay COLOR
#define KYEL  "\x1B[33m" // defining local variable for COLOR ~ YELLOW

/* Function declarations Set Here */
int GetDestination(int PassengerIndex); // prototype set here, non empty parametar & set contract to return integer
void IncrementPassenger(int *PassengerIndex, int PassengerLimit); // prototype set here, non empty parametar & doesn't need to return anything
void ElevatorMovement(int *CurrentFloor, int DestinationFloor); // prototype set here, non empty parametar & doesn't need to return anything

//Start of Program
int main() {
	// Giving Basic User Information:
	printf("Welcome to Elevator Simulator\n --------------------------\n");
	// declare LOCAL variables
	int CurrentFloor = 3; // Default value from beginning ~ GROUND FLOOR 
	int DestinationFloor;
	int PassengerIndex = 1; // Default value from beginning ~ 1 Passenger (The User)
	int PassengerLimit = 10; // Value for Maximum ammount of users in the lift
	//Creating the main loop
	while (PassengerIndex > 0){
		DestinationFloor = GetDestination(PassengerIndex); // calling function to get the value to the destination
		if(DestinationFloor == 100) // case if user wants to exit the elevator
			break;
		IncrementPassenger(&PassengerIndex,PassengerLimit); // calling function to increase the passenger count
		ElevatorMovement(&CurrentFloor,DestinationFloor); // calling function to move to given floor
		printf("---------------------------------\n");
		int RandomPassengers = rand() % PassengerIndex; // getting random value for decrease in passengers
		PassengerIndex -= RandomPassengers;
		if(PassengerIndex<=0) // case for the calculation to go negative
			PassengerIndex = 1;
	}//endwhileloop
	printf("Exiting Elevator!\nGoodbye ...\n");
	return 0;	
}

int GetDestination(int PassengerIndex) { // setting the destination floor by getting user input
	char FloorInput[3];
	int Result = -1;
	while(Result < 0) 
	{ 
		printf("Current Amount of Passengers: %d\n TO EXIT ELEVATOR Input: X\n", PassengerIndex);
		printf("Enter destination floor ( B3 | B2 | B1 | G | 1 | 2 | 3 | 4 | 5 ): -->");
		scanf("%s", FloorInput);
		if(strcmp(FloorInput,"B3") == 0)
			Result = 0;
		else if(strcmp(FloorInput,"B2") == 0)
			Result = 1;
		else if(strcmp(FloorInput,"B1") == 0)
			Result = 2;
		else if(strcmp(FloorInput,"G") == 0)
			Result = 3;
		else if(strcmp(FloorInput,"1") == 0)
			Result = 4;
		else if(strcmp(FloorInput,"2") == 0) // Getting User input on wanted destination 
			Result = 5;
		else if(strcmp(FloorInput,"3") == 0)
			Result = 6;
		else if(strcmp(FloorInput,"4") == 0)
			Result = 7;
		else if(strcmp(FloorInput,"5") == 0)
			Result = 8;
		else if(strcmp(FloorInput,"X") == 0)
			Result = 100;
		else
		{
			printf("%sERROR: Wrong Input!%s\n", KRED, KNRM);
			Result = -1;
		}
	}//endwhileloop
	return Result;	
}

void IncrementPassenger(int *PassengerIndex, int PassengerLimit) { // Increase the Ammount of Passenger on the next iteration
	char UserInput = '\0';
	printf("Would you like to let other passenger in aswell? (Y/N):");
	scanf(" %c", &UserInput);
	if(UserInput == 'Y' || UserInput == 'y')
	{
		srand(time(NULL));
		int RandomPassengers = rand() % PassengerLimit;
		*PassengerIndex += RandomPassengers;
		if(*PassengerIndex > PassengerLimit)
			PassengerIndex -= RandomPassengers+1;
	}
	else if(UserInput == 'N' || UserInput == 'n') // Using refrence pointers in order to keep the new value for the passenger count
		printf("Very well...\n");
	else
	{
		printf("%sERROR: Wrong Input!%s\n", KRED, KNRM);
		IncrementPassenger(PassengerIndex,PassengerLimit);
	}
	printf("Current Amount of Passengers: %d\n", *PassengerIndex);
	printf("%sAlright, starting elevator%s ...\n", KYEL, KNRM);
}

void ElevatorMovement(int *CurrentFloor, int DestinationFloor) { // Movement to the DestinationFloor
	int Movement = 0;

	if(DestinationFloor > *CurrentFloor) // Implementation with refrence pointers to get the new value of the CurrentFloor
		Movement = 1;
	else
		Movement = -1;

	while(*CurrentFloor != DestinationFloor)
	{
		*CurrentFloor += Movement;
		switch(*CurrentFloor) // switch case for moving from floors
		{
		case 0:
			printf("... %sMoving to%s basement %s ...\n", KYEL, KNRM, "B3");
			break;
		case 1:
			printf("... %sMoving to%s basement %s ...\n", KYEL, KNRM, "B2");
			break;
		case 2:
			printf("... %sMoving to%s basement %s ...\n", KYEL, KNRM, "B1");
			break;
		case 3:
			printf("... %sMoving to%s groud floor %s ...\n", KYEL, KNRM, "G");
			break;
		case 4:
			printf("... %sMoving to%s floor %dst ...\n", KYEL, KNRM, 1);
			break;
		case 5:
			printf("... %sMoving to%s floor %dnd ...\n", KYEL, KNRM, 2);
			break;
		case 6:
			printf("... %sMoving to%s floor %drd ...\n", KYEL, KNRM, 3);
			break;
		case 7:
			printf("... %sMoving to%s floor %dth ...\n", KYEL, KNRM, 4);
			break;
		case 8:
			printf("... %sMoving to%s floor %dth ...\n", KYEL, KNRM, 5);
			break;
		}//endswitch
	}//endwhileloop
	//Floor arrival
	switch(*CurrentFloor) // switch case to arrive to given destination
	{
	case 0:
		printf("%sElevator arrived at basement%s %s\n", KGRN, KNRM,"B3");
		break;
	case 1:
		printf("%sElevator arrived at basement%s %s\n", KGRN, KNRM, "B2");
		break;
	case 2:
		printf("%sElevator arrived at basement%s %s\n", KGRN, KNRM, "B1");
		break;
	case 3:
		printf("%sElevator arrived at ground floor%s %s\n", KGRN, KNRM, "G");
		break;
	case 4:
		printf("%sElevator arrived at floor%s %dst\n", KGRN, KNRM, 1);
		break;
	case 5:
		printf("%sElevator arrived at floor%s %dnd\n", KGRN, KNRM, 2);
		break;
	case 6:
		printf("%sElevator arrived at floor%s %drd\n", KGRN, KNRM, 3);
		break;
	case 7:
		printf("%sElevator arrived at floor%s %dth\n", KGRN, KNRM, 4);
		break;
	case 8:
		printf("%sElevator arrived at floor%s %dst\n", KGRN, KNRM, 5);
		break;	
	}//endswitch
}
