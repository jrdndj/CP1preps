#include <stdio.h>

//Define the Function
void elevator(int currentFloor, int destinationFloor);

int main()
{
 	int currentFloor = -3, destinationFloor = -3;

 	printf("Welcome to the elevator simulator!\n");

 	printf("Please enter your current floor: "); // Taking user input
 	scanf("%d", &currentFloor);

 	printf("Please enter your destination floor: "); // Taking user input
 	scanf("%d", &destinationFloor);

 	//Call the function
 	elevator(currentFloor, destinationFloor);

 	return 0;
}

//Function definition
void elevator(int currentFloor, int destinationFloor)
{

 	int floorsVisited[8];
 	int i, j;

 	for (i = -3; i < 5; i++)
 	{
  		floorsVisited[i] = 0;
 	}

 	//Check if the current floor and destination floor are the same
 	if (currentFloor == destinationFloor)
 	{
  		printf("You are already on the same floor!\n");
  		return;
 	}

	//Check if the current floor is between -3(Basement3) and 5th floor
 	if (currentFloor < -3 || currentFloor > 5)
 	{
  		printf("You are not on a valid floor!\n");
  		return;
 	}


 	//Check if the destination floor is between -3(Basement3) and 5th floor
 	if (destinationFloor < -3 || destinationFloor > 5)
 	{
  		printf("You are trying to reach an invalid floor!\n");
  		return;
 	}

	//Check if the user is trying to move down from the ground floor
 	if (currentFloor == 0 && destinationFloor < 0)
 	{
  		printf("You cannot move down from the ground floor!\n");
  		return;
 	}

 	//Check if the user is trying to move up from the 5th floor
 	if (currentFloor == 5 && destinationFloor > 5)
 	{
  		printf("You cannot move up from the 5th floor!\n");
  		return;
 	}

	//Check if the current floor is lower than the destination floor
 	if (currentFloor < destinationFloor)
 	{
 		//Move the elevator up
 		printf("The elevator is moving up...\n");

 		//Loop through all the floors
  		for (i = currentFloor; i <= destinationFloor; i++)
  		{
  			//Check if the floor has been visited already
   			if (floorsVisited[i] != 1)
   			{
   				//Mark the floor as visited
    			floorsVisited[i] = -1;

    			//Print the current floor
    			printf("%dF\n", i);
   			}
  		}
 	}

 	//Check if the current floor is higher than the destination floor
 	if (currentFloor > destinationFloor)
 	{
 		//Move the elevator down
  		printf("The elevator is moving down...\n");
  
  		//Loop through all the floors
  		for (i = currentFloor; i >= destinationFloor; i--)
  		{
  			//Check if the floor has been visited already
   			if (floorsVisited[i] != 1)
   			{
   				//Mark the floor as visited
    			floorsVisited[i] = -1;

    			//Print the current floor
    			printf("%dF\n", i);
   			}
  		}
 	}

 	//Print the final floor
 	printf("You have reached your destination floor!\n");
}