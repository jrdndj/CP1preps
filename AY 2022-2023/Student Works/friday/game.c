#include <stdio.h>
#include <string.h>

//structure definitons
struct terrorist{
	int dHasBomb, dHP, dArmor, dKilled, dDied;
	char sPlayerName[50],sSkin[20], sLeft[20], sRight[20];
	double dKDR ;


};//no variables here beacuse i want them to be local

struct counterTerrorist{
	int dHasDiffuse, dHP, dArmor, dKilled, dDie;
	char sPlayerName[50],sSkin[20], sLeft[20], sRight[20];
	double dKDR ;


};//no variables here beacuse i want them to be local

//function prototypes
void printTerrorist( struct terrorist *p1);
void printCounterTerrorist( struct counterTerrorist p2);

int main(){
	//define the structure variables localy
	struct terrorist player1;
	struct counterTerrorist player2;

	//I will ask the user to choose between terrorist and counterTerrorist
	char cChoice;

	printf("\nWelcome! Pleae choose type: ");
	printf("\n [T] for Terroriast");
	printf("\n [C] for counterTerroriast\n");
	scanf("%c", &cChoice);

	if(cChoice == 'T'){
		//then we use terrorist
		//lest ask for the name
		printf("\n Enter terrorist name:");
		scanf("%s", player1.sPlayerName);
		//we ask if this player should have the bomb
		printf("\n Do you want %s to have this bomb?",player1.sPlayerName);
		scanf("%c", &cChoice);
		if(cChoice == 'y'){
			player1.dHasBomb=1;

		}//endbombif
		printTerrorist( &player1 );//use & if by reference

	}//endIf
	else if(cChoice == 'C'){
		//then we use counterTerrorist
		printf("\n Enter counterTerrorist name:");
		scanf("%s", player2.sPlayerName);
		//we ask if this player should have the diffuse kit
		printf("\n Do you want %s to buy diffuse kit?",player2.sPlayerName);
		scanf("%c", &cChoice);
		if(cChoice == 'y'){
			player2.dHasDiffuse=1;

		}//endbombif
		printCounterTerrorist( player2 );//no & if pass by value 


	}//endelseif
	else{
		//bas input
	}//endelse



	return 0;
}//endmain

//function definition
void printTerrorist( struct terrorist *p1 ){
	printf("\n The player name is %s. ",p1->sPlayerName);
	printf("\n Bomb status: %d", p1->dHasBomb);



}//endprintTerrorist

void printCounterTerrorist( struct counterTerrorist p2){
	printf("\n The player name is %s. ",p2.sPlayerName);
	printf("\n Diffuse kit status: %d ", p2.dHasDiffuse);



}//endprintcounterTerrorist