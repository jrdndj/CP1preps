#include <stdio.h>

struct terrorist{
	int dHP, dArmor, dKillCtr, dDied;
	char sPlayerName[20], cHasBomb;
	double dKDR;
	struct terrorist *t;

};
void printTerroristRef();
void printTerroristVal();



int main(){

	struct terrorist player1, player2, player3, player[100];

	printf("\n Enter name of player 1: ");
	scanf("%s",player1.sPlayerName);
	printf("\n Does %s have the bomb? 1 - yes, 0 - no: ",player1.sPlayerName);
	scanf(" %c", &player1.cHasBomb);

	player1.dHP = 100;

	printf("\n How many kills does %s have?: ",player1.sPlayerName);
	scanf("%d",&player1.dKillCtr);
	printf("\n How many deaths does %s have?: ",player1.sPlayerName);
	scanf("%d",&player1.dDied);

	player1.dKDR = (double) player1.dKillCtr/player1.dDied;


	printf("\n Enter name of player 2: ");
	scanf("%s",player2.sPlayerName);
	printf("\n Does %s have the bomb? 1 - yes, 0 - no: ",player2.sPlayerName);
	scanf(" %c", &player2.cHasBomb);

	player2.dHP = 100;

	printf("\n How many kills does %s have?: ",player2.sPlayerName);
	scanf("%d",&player2.dKillCtr);
	printf("\n How many deaths does %s have?: ",player2.sPlayerName);
	scanf("%d",&player2.dDied);

	player2.dKDR = (double) player2.dKillCtr/player2.dDied;

	//connect player1 to player2
	player1.t = &player2;

	//print player1
	printTerroristRef(&player1); // pass by reference
	printTerroristRef(player1.t);
	//printTerroristVal(player1);



	return 0;
}


void printTerroristRef( struct terrorist *t ){

	printf("\n Player name: %s", t->sPlayerName);
	printf("\n Has bomb %c", t->cHasBomb);
	printf("\n Player HP %d", t->dHP);
	printf("\n Player kills %d", t->dKillCtr);
	printf("\n Player deaths %d", t->dDied);
	printf("\n Player dKDR %.2f", t->dKDR);

}

void printTerroristVal( struct terrorist t ){

	printf("\n Player name: %s", t.sPlayerName);
	printf("\n Has bomb %c", t.cHasBomb);
	printf("\n Player HP %d", t.dHP);
	printf("\n Player kills %d", t.dKillCtr);
	printf("\n Player deaths %d", t.dDied);
	printf("\n Player KDR %.2f", t.dKDR);



}
