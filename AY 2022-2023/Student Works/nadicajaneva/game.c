/* Use structures and pass them between functions in a "game" style
*/
#include<stdio.h>
#include<string.h>

//structure definitions
struct terrorist{
	int dHasBomb, dHP, dArmor, dKilled, dDied;
	char sPlayerName[50], sSkin[20], sLeft[20], sRight[20];
	double dKDR;
}; //no variables here because i want them to be local

struct counterTerrorist{
	int dHasDiffuse, dHP, dArmor, dKilled, dDied;
	char sPlayerName[50], sSkin[20], sLeft[20], sRight[20];
	double dKDR;
};

//function prototypes
void printTerrorist(struct terrorist *p1);
void printCounterTerrorist(struct counterTerrorist p2);

int main(){

	//define structure variables locally
	struct terrorist player1;
	struct counterTerrorist player2;

	// i will ask the user to choose between terrorist or counter terrorist
	char cChoice;

	printf("\nWelcome! PLease choose your type: ");
	printf("\n [T] for Terrorist");
	scanf("%c", &cChoice);

	//let main decide
    if( cChoice == 'T'){
		// then we use terrorist
		// lets ask for the name
		printf("\n Enter Terrorist Name: ");
		scanf("%s", player1.sPlayerName);
		//we ask if this player should have the bomb
		printf("\n Do you want %s to have this bomb? [y or n] ", player1.sPlayerName);
		scanf(" %c", &cChoice); //add a space to tell stream to use second input
		if( cChoice == 'y'){
			player1.dHasBomb = 1;
		}//endbombif

		printTerrorist( &player1);

	}//endif
	
	else if(cChoice == 'C'){
		// then we use counterterrorist
		printf("\n Enter CounterTerrorist Name: ");
		scanf("%s", player2.sPlayerName);
		//we ask if this player should have the diffuse kit
		printf("\n Do you want %s to buy diffuse kit? [y or n] ", player1.sPlayerName);
		scanf("%c", &cChoice);
		if(cChoice == 'y'){
			player2.dHasDiffuse = 1;
		}//endbombif

		printCounterTerrorist(player2); //no & if pass by value
	}//endelseif
	
	else{
		// bad input
	}//endelse

	return 0;
}//endmain

//function definitions here
void printTerrorist(struct terrorist *p1) {
	printf("\n The player name is %s. ", p1->sPlayerName);
	printf("\n Bomb Status: %d", p1->dHasBomb);
}//endprintTerrorist

void printCounterTerrorist(struct counterTerrorist p2) {
	printf("\n The player name is %s. ", p2.sPlayerName);
	printf("\n Diffuse Kit Status: %d ", p2.dHasDiffuse);

}//endprint counter terrorist










