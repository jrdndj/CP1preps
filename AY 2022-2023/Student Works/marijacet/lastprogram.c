#include <stdio.h>
//theme cs 1.6

//structure that defines the attributes of a ct/t player
struct terrorist{
	int dHP, dArmor, dKillCtr, dDied;
	char sPlayerName[20], cHasBomb;
	double dKDR; //kill to death ratio
	struct terrorist *t; //terrorist pointer

}; //will use local variables later on

//function prototypes here

void printTerroristRef();
void printTerroristVal();

int main(){

	//local variables here
	struct terrorist player1, player2, player3, player[100];

	//get user input
	//get player 1
	printf("\nEnter name of player 1:\n");
	scanf("%s",player1.sPlayerName); //no &
	printf("Does %s have a bomb? 1 - yes, 0 - no",player1.sPlayerName);
	scanf(" %c",&player1.cHasBomb);
	//assign initial HP of player 1 to 100
	player1.dHP=100;
	printf("\nHow many kills did %s already have\n", player1.sPlayerName);
	scanf("%d",&player1.dKillCtr);
	printf("\nHow many deaths did %s have\n", player1.sPlayerName);
	scanf("%d",&player1.dDied);
	player1.dKDR = (double)player1.dKillCtr/player1.dDied;

	//printTerroristRef(&player1); //pass by reference
	//printTerroristVal(player1);

	//get player 2
	printf("\nEnter name of player 2:\n");
	scanf("%s",player2.sPlayerName); //no &
	printf("Does %s have a bomb? 1 - yes, 0 - no",player2.sPlayerName);
	scanf(" %c",&player2.cHasBomb);
	//assign initial HP of player 1 to 100
	player2.dHP=100;
	printf("\nHow many kills did %s already have\n", player2.sPlayerName);
	scanf("%d",&player2.dKillCtr);
	printf("\nHow many deaths did %s have\n", player2.sPlayerName);
	scanf("%d",&player2.dDied);
	player2.dKDR = (double)player2.dKillCtr/player2.dDied;

	player1.t = &player2; //connect player1 to player2
	//let player 1 store pointer pointing to player2

	printTerroristRef(&player1); //pass by reference
	printTerroristRef(player1.t); //pass pointer of player1


	return 0;
}//endmain

//function definitions here
void printTerroristRef(struct terrorist *t){ //pass by reference changes it in memory
	printf("\n Player name: %s \n", t->sPlayerName );
	printf("\n Has bomb: %c \n", t->cHasBomb );
	printf("\n Player HP: %d \n", t->dHP );
	printf("\n Player Kills: %d \n", t->dKillCtr );
	printf("\n Player Deaths: %d \n", t->dDied );
	printf("\n Player KDR: %.2f \n", t->dKDR );



}//endref

void printTerroristVal(struct terrorist t){ //pass by value duplicates variable
	printf("\n Player name: %s \n", t.sPlayerName );
	printf("\n Has bomb: %c \n", t.cHasBomb );
	printf("\n Player HP: %d \n", t.dHP );
	printf("\n Player Kills: %d \n", t.dKillCtr );
	printf("\n Player Deaths: %d \n", t.dDied );
	printf("\n Player KDR: %.2f \n", t.dKDR );


}//endval