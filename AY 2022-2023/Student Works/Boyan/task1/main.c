#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//Declaring a global variable that would store the current level 

int currentLevel = 0; //0 represents the ground floor, a value which we will later convert to the char 'G'

//Declaring a function of type char, that will store user input (the choice of level)

char getInput(){

	char input;
	printf("\nEnter a valid floor (G,1,2,3,4,5): ");
	scanf(" %c", &input);

	return input;

}//end of input function

//Declaring a bool function that will handle the validity of the user input

bool validInput(char input){

	//If the input is any of the options displayed above (G,1,2,3,4,5), then return true

	return(input =='G' || (input>='1' && input <='5'));

}//end of validity check function


void goToFloor(int level){

	//If level is equal to the current level, do nothing 

	if(level==currentLevel) {
		printf("\nYou are already on level %d", level);
		return;
	}
	else if (level<currentLevel)
	{
		printf("Going down: \n");
		while(currentLevel != level){
			printf("Floor %d\n", --currentLevel );
		}
		
	}
	else if (level>currentLevel)
	{
		printf("Going up:\n");
		while(currentLevel != level){
			printf("Floor %d\n", ++currentLevel );
		}
		
	}
	 
}//End of specific floor function


//bool function to check if the user wants to keep going
bool checkGoing() {
	char* promptGoing;
	printf("\nDo you want to keep going?[yes/no]\n");
	scanf("%s", promptGoing);
	return strcmp(promptGoing, "yes") == 0;
}

int main(int argc, char *argv[]){
	
	//We specify that the elevator is at ground floor
	while(true) {
	printf("\nWelcome!You are currently on the ground floor!");

	char input = getInput();
	while(!validInput(input)){
		printf("\nInvalid input!Try again. ");
		input = getInput();


	}//end of while loop

	//Now we must convert char to int

	int targetFloor = (input == 'G') ? 0 : input - '0';
	goToFloor(targetFloor);

	printf("Elevator has arrived at floor %d\n", currentLevel);
	
	if (!checkGoing()) {
		break;
	}
	
	}


	
	return 0;
}
