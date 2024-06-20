/*
	structures, functions, parameter passing, reference(pointers),
	pass by value
	theme: CS 1.6
*/
#include<stdio.h>

// structure that defines the attributes of a counterterrorist/terrorist player
struct terrorist{
	int dHP, dAromor, dKillCount, dDied;
	double dKDR;
	char sPlayerName[20], cHasBomb; // char is a better option for memory if storing a small integer as 1 and 0
	struct terrorist *t;
};// will use local variables later

// FUNCTION PROTOTYPES HERE
void printTerroristRef();
void printTerroristVal();
int main(){

// local variable
	struct terrorist player1, player2, player3, player[100];

	// prompt the user for input values
	// enter player1
	printf("\nEnter name of Player 1: ");
	scanf("%s", player1.sPlayerName);
	printf("\nDoes %s have a bomb? 1 - yes, 0 - no ", player1.sPlayerName );
	scanf(" %c", &player1.cHasBomb);
	// assign the inital Hp of player 1 to 100
	player1.dHP = 100;
	printf("\nHow many kills did %s already have: ", player1.sPlayerName );
	scanf("%d", &player1.dKillCount);
	printf("\nHow many deaths did %s already have: ", player1.sPlayerName );
	scanf("%d", &player1.dDied);
	//compute KDR
	player1.dKDR = (double)player1.dKillCount/player1.dDied;

	// enter player 2
	printf("\n\nEnter name of Player 2: ");
	scanf("%s", player2.sPlayerName);
	printf("\nDoes %s have a bomb? 1 - yes, 0 - no ", player2.sPlayerName );
	scanf(" %c", &player2.cHasBomb);
	// assign the inital HP of player 2 to 100
	player2.dHP = 100;
	printf("\nHow many kills did %s already have: ", player2.sPlayerName );
	scanf("%d", &player2.dKillCount);
	printf("\nHow many deaths did %s already have: ", player2.sPlayerName );
	scanf("%d", &player2.dDied);
	//compute KDR
	player2.dKDR = (double)player2.dKillCount/player2.dDied;

	// connect player 1 to player 2
		player1.t = &player2;

	//print player 1 info
	printTerroristRef(&player1); // pass by reference
	printTerroristRef(player1.t); // already a pointer
	//printTerroristVal(player2); // pass by value (no likey)

return 0;
}// end main

// FUNCTION DEFINITIONS
void printTerroristRef( struct terrorist *t ){
	printf("\nPlayer name: %s ", t->sPlayerName );
	printf("\nHas bomb: %c ", t->cHasBomb );
	printf("\nPlayer HP: %d ", t->dHP );
	printf("\nPlayer kills: %d ", t->dKillCount );
	printf("\nPlayer deaths: %d ", t->dDied );
	printf("\nPlayer KDR: %.2f \n", t->dKDR );

}// end of reference

void printTerroristVal( struct terrorist t ){
	printf("\n\nPlayer name: %s ", t.sPlayerName );
	printf("\nHas bomb: %c ", t.cHasBomb );
	printf("\nPlayer HP: %d ", t.dHP );
	printf("\nPlayer kills: %d ", t.dKillCount );
	printf("\nPlayer deaths: %d ", t.dDied );
	printf("\nPlayer KDR: %.2f \n\n", t.dKDR );

}// end of value