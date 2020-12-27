#include<stdio.h>

int main(){
	
	
	int dCurrentFloor = 0, dUserInput;
	int dLeave=0;
	
	while(dLeave != 1){
	
		printf("\nThe lift is currently on the floor: %d\n", dCurrentFloor);
		
		printf("\nPress where do you want to go: ");
		
		scanf("%d", &dUserInput);
		
		if ( dUserInput>=0 && dUserInput<5){
			// if the floor user entered is valid, lift will go to that floor
			dCurrentFloor = dUserInput;
			printf("\nYou arrived on the floor %d\n", dCurrentFloor);
		}
		else{ // If the floor is not valid, print the error message and ask for valid input
			printf("\nThere is no %d floor, type a valid floor\n", dUserInput);
			continue;
		}
		printf("\nType 1 if you want to leave the elevator or 0 if you don't: "); //asking the user if they want to continue using lift or leave
		scanf("%d", &dLeave);
	}
	printf("Thank you for using the elevator! Goodbye!\n");
	
	return 0;
}
