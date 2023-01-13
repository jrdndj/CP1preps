/*
use structures and pass them between functions in a game style
*/
#include <stdio.h>
#include<string.h>

//structure deff
struct terrorist{
	int dHasBom , dHP , dArmor , dKillCount , dDied ;
	char sPlayerName[50], sSkin[20], sLeft[20], sRight[20];
	double dKDR;
};
//no variables cuz i want them to be local

//structure deff
struct counterTerrorist{
	int dHasDiffuse , dHP , dArmor , dKillCount , dDied ;
	char sPlayerName[50], sSkin[20], sLeft[20], sRight[20];
	double dKDR
}; 
//no variables cuz i want them to be local

void printTerrorist(struct terrorist *p1);//pointer
void printCounterTerrorist(struct counterTerrorist p2);

int main(){

	//define structure variables locally
	struct terrorist player1;
	struct counterTerrorist player2;

	//ask the user to choose
	char cChoice;

	printf("\nWelcome, please choose your type: ");
	printf("\n [t] for terrorist");
	printf("\n [c] for counter Terrorist");
	scanf("%c", &cChoice);

	//let main decide
	if(cChoice == 't'){
		//we use terrorist
		//ask for the name
		printf("\nEnter t name: ");
		scanf("%s", player1.sPlayerName);

		//ask for bomb
		printf("\nDo you want %s to have this bomb? [y/n]", player1.sPlayerName);
		scanf(" %c", &cChoice);
		if (cChoice == 'y')
		{
			player1.dHasBom = 1;
		}

		printTerrorist(&player1);//recives pointers use & if pass by reference

	}else if (cChoice == 'c'){
		//we use counterter
		//ask for the name
		printf("\nEnter ct name: ");
		scanf("%s", player2.sPlayerName);

		//ask for bomb
		printf("\nDo you want %s to buy diffuse kit [y/n]?", player2.sPlayerName);
		scanf(" %c", &cChoice);
		if (cChoice == 'y')
		{
			player2.dHasDiffuse = 1;
		}
		printCounterTerrorist(player2);//no & if pass by value

	}else{
		//bad input
	}

	return 0;
}//endmain

//func deff
void printTerrorist(struct terrorist *p1){
	printf("\n The player name is %s. ", p1 -> sPlayerName);
	printf("\n Bomb status: %d", p1 -> dHasBom);
}//endprintTer


void printCounterTerrorist(struct counterTerrorist p2){
	printf("\n The player name is %s. ", p2.sPlayerName);
	printf("\n Diffuse kit status %d. ", p2.dHasDiffuse);
}//endprintct

//linklist are used with pointers