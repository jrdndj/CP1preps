/*
	structures
	user defined funcrions
	parameter passing
	pass by reference (pointers)
	pass by value
	for cs 1.6
*/

#include <stdio.h>


//structure that defines the artibutes of ct/t players
struct terrorist{
	int dHP, dArmor, dKillCtr, dDied;
	char sPlayerName[20], cHasBomb;
	double dKDR;
	struct terrorist *t;

};	//will use local variables later on


//functions
void printTerroristRef();
void printTerroristVal();

int main(){

	//local variable
	struct terrorist player1, player2, player3, player[100];

	//we will talk tot he user to get those values

	//now player1
	printf("Enter name of player 1: ");
	scanf("%s", player1.sPlayerName);
	printf("Does %s has the bomb? (1/0): ", player1.sPlayerName);
	scanf(" %c", &player1.cHasBomb);
	//asign the initial hp of player 1 to 100
	player1.dHP=100;
	printf("How many kills did %s already have: ", player1.sPlayerName);
	scanf("%d", &player1.dKillCtr);
	printf("How many deaths did %d already have: ", player1.dKillCtr);
	scanf("%d", &player1.dDied);
	//compute kdr
	player1.dKDR=player1.dKillCtr/player1.dDied;


	printf("Enter name of player 2: ");
	scanf("%s", player2.sPlayerName);
	printf("Does %s has the bomb? (1/0): ", player2.sPlayerName);
	scanf(" %c", &player2.cHasBomb);
	//asign the initial hp of player 1 to 100
	player2.dHP=100;
	printf("How many kills did %s already have: ", player2.sPlayerName);
	scanf("%d", &player2.dKillCtr);
	printf("How many deaths did %d already have: ", player2.dKillCtr);
	scanf("%d", &player2.dDied);
	//compute kdr
	player2.dKDR=player2.dKillCtr/player2.dDied;

	//connect player1 to 2
	player1.t = &player2;

	//print player1
	printTerroristRef(&player1);	//pass by reference
	printTerroristRef(player1.t);		//pass by value


	return 0;
}


//defining functions

void printTerroristRef(struct terrorist *t){
	printf("\n Player Name: %s ", t->sPlayerName);
	printf("\n Has Bomb: %c ", t->cHasBomb);
	printf("\n Player HP: %d ", t->dHP);
	printf("\n Player Kills: %d ", t->dKillCtr);
	printf("\n Player Deaths: %d ", t->dDied);
	printf("\n Player KDR: %.2f ", t->dKDR);

}//endref

void printTerroristVal(struct terrorist t){
	printf("\n Player Name: %s ", t.sPlayerName);
	printf("\n Has Bomb: %c ", t.cHasBomb);
	printf("\n Player HP: %d ", t.dHP);
	printf("\n Player Kills: %d ", t.dKillCtr);
	printf("\n Player Deaths: %d ", t.dDied);
	printf("\n Player KDR: %.2f ", t.dKDR);

}//endval