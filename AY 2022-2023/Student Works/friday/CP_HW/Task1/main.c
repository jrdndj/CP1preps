#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Calling all the functions 
void elevator(char current, char input);
void goUPDOWN(char current, char input);
char enter();

int main(){
	printf("\nEnter floor you want to go to:");
	char input;
	scanf("%c",&input);
	char current='G';//Here we declare current as G because every time when we run the progrram the current floor must start from ground floor
	elevator(current,input);

	return 0;
}

void elevator(char current, char input){//Function for moving through the floors
	switch(input){
		case 'G':
			printf("\nCurrently on %c floor", current);//Printing where the elevator is currently at
			goUPDOWN(current, input);//Checking whether elevator will go up or down
			printf("\nGround floor");//Printing where the elevator is going
			current='G';//Saving the current floor
			elevator(current, enter());//Allowing the user to input desired floor again
			break;
			
		//Same for all other cases :)
		case '1':
			printf("\nCurrently on %c floor", current);
			goUPDOWN(current, input);
			printf("\n1st floor");
			current='1';
			elevator(current, enter());
			break;
		case '2':
			printf("\nCurrently on %c floor", current);
			goUPDOWN(current, input);
			printf("\n2nd floor");
			current='2';
			elevator(current, enter());
			break;
		case '3':
			printf("\nCurrently on %c floor", current);
			goUPDOWN(current, input);
			printf("\n3rd floor");
			current='3';
			elevator(current, enter());
			break;
		case '4':
			printf("\nCurrently on %c floor", current);
			goUPDOWN(current, input);
			printf("\n4th floor");
			current='4';
			elevator(current, enter());
			break;
		case '5':
			printf("\nCurrently on %c floor", current);
			goUPDOWN(current, input);
			printf("\n5th floor");
			current='5';
			elevator(current, enter());
			break;
		
		default://If the user enters invalid floor the program prints the message and allows the user to enter again
			printf("\nNo such floor");
			elevator(current, enter());
			break;
			
	}
}

void goUPDOWN(char current, char input){//Function for making the elevator go either up or down. 
	if(input=='G'){
		printf("\nGOING DOWN");//Because G is the "smallest" floor if the users input is G the elevator will go down
	}
	else if(current=='G'){//If the the user is on G floor and we know that G is the "smallest"floor the elevator will go up.
		printf("\nGOING UP");
	}
	else if(current<input)//The other floors are numbers so if the user enters bigger number the elevator will go up,else it will go down.
	{
		printf("\nGOING UP");
	}else{
		printf("\nGOING DOWN");
	}
 }


char enter(){//Function for allowing the user to enter the floor they want to go
	printf("\nEnter floor you want to go to:");
	char input;
	scanf(" %c", &input);
	return input;
}
