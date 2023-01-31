#include <stdio.h>
#include <string.h>
/*
 Use struct & pass between functions
*/
// structure definitions
struct terrorist{
	int dHasBomb; 
	char sPlayerName[50];
}; // no var because ~ set local
struct counter_terrorist{
	int dHasDefuse;
	char sPlayerName[50];
};
 // Function prototype
void printT(struct terrorist *P1);
void printC(struct counter_terrorist P2);
int main() { // Start Program
	//def struct var locally
	struct terrorist P1;
	struct counter_terrorist P2;
	// function to choose terrorist || counter terrorist
	char cChoice;
	printf("Welcome to CS:GO\n Choose a side ~ (T / C): ");
	scanf(" %c", &cChoice);
	if(cChoice == 'T'){
		//Terrorist has been picked
		printf("Input terrorist name: ");
		scanf(" %s", P1.sPlayerName);
		//we ask if user has bomb
		printf("Input Y/N, for %s to have bomb", P1.sPlayerName);
		scanf(" %c", &cChoice);
		if(cChoice == 'Y'){
			P1.dHasBomb = 1;
		}else if(cChoice == 'N'){
			P1.dHasBomb = 0;
		}else{
			printf("Error Wrong Input");
			return 1;
		}
		printT(&P1);

	} else if(cChoice == 'C'){
		//Counter Terrorist has been picked
		printf("Input counter terrorist name: ");
		scanf(" %s", P2.sPlayerName);
		printf("Input Y/N, for %s to buy defuse kit: ", P1.sPlayerName);
		scanf(" %c", &cChoice);
		if(cChoice == 'Y'){
			P2.dHasDefuse = 1;
		}else if(cChoice == 'N'){
			P2.dHasDefuse = 0;
		}else{
			printf("Error Wrong Input");
			return 1;
		}
		//printC(P2);

	}else{
		//Wrong Input
		printf("Wrong Input\n");
		return 0;
	}
	return 0;
} // End of Program
// Function Def
void printT(struct terrorist *P1) {
	printf("\n The Player name is %s", P1->sPlayerName); // -> operator
	printf("\n Bomb Status: %d", P1->dHasBomb); // Pass by refrence
}
void prinC(struct counter_terrorist P2) {
	printf("The Player name is %s", P2.sPlayerName); // Creating a copy
	printf("\nDefuse Kit Status: %d\n", P2.dHasDefuse);
}