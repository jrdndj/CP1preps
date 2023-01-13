/*
use structures
user defined functions
parameter passing
pass by referance (pointers)
pass by value
theme: CS 1.6
*/


//structure that defines tje attributes of CT/T player

struct terrorist{
	int dHP, dArmor, dKillCtr, dDied;
	char sPlayerName[20], cHasBomb;
	double dKDR;
	struct terrorist *t;

}; //will use local variables later on

//function prototypes here
void printTerroristRef();
void printTerroristVal();


#include <stdio.h>
int main() {
	
	//local vatiables here
	struct terrorist player1, player2, player3, player[100];

	//we will talk to the user to get these values

	//lets get player 1
	printf("\n Enter name of Player 1: ");
	scanf(" %s",player1.sPlayerName); // no &
	printf("\n Does %s have the bomb? 1 - yes 0 - no ",player1.sPlayerName);
	scanf(" %c", &player1.cHasBomb);
	//assign the initial HP of player 1 to 100
	player1.dHP = 100;
	printf("\n How many kills did %s already have: ",player1.sPlayerName);
	scanf("%d",&player1.dKillCtr);
	printf("\n How many deaths did %s already have: ",player1.sPlayerName);
	scanf("%d",&player1.dDied);
	//compute for KDR
	player1.dKDR = (double) player1.dKillCtr/player1.dDied;

	printf("\n Enter name of Player 1: ");
	scanf(" %s",player2.sPlayerName); // no &
	printf("\n Does %s have the bomb? 1 - yes 0 - no ",player2.sPlayerName);
	scanf(" %c", &player2.cHasBomb);
	//assign the initial HP of player 1 to 100
	player2.dHP = 100;
	printf("\n How many kills did %s already have: ",player2.sPlayerName);
	scanf("%d",&player2.dKillCtr);
	printf("\n How many deaths did %s already have: ",player2.sPlayerName);
	scanf("%d",&player2.dDied);
	//compute for KDR
	player2.dKDR = (double) player2.dKillCtr/player2.dDied;
	//connect player 1 to player 2
	player1.t = &player2;
	//print them using the foreign functions 
	//print player1
	printTerroristRef(&player1); //pass by referance
	printTerroristRef(player1.t); // pass by values
	//printTerroristVal(player1);
	return 0;
}//endmain

//function definitions here
void printTerroristRef(struct terrorist *t){
	printf("\n Player Name: %s ", t->sPlayerName);	
	printf("\n Has Bomb: %c", t->cHasBomb);
	printf("\n Player HP: %d",t->dHP);
	printf("\n Player kills: %d",t->dKillCtr);
	printf("\n Player Deaths: %d",t->dDied);
	printf("\n Player KDR: %.2f",t->dKDR);


}//endref
void printTerroristVal(struct terrorist t){
	printf("\n Player name: %s",t.sPlayerName);
	printf("\n Has Bomb: %c", t.cHasBomb);
	printf("\n Player HP: %d",t.dHP);
	printf("\n Player kills: %d",t.dKillCtr);
	printf("\n Player Deaths: %d",t.dDied);
	printf("\n Player KDR: %.2f",t.dKDR);
}//endval
