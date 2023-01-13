#include <stdio.h>
#include <stdlib.h>
/*
use structures
user defined 

*/

struct terrorist{
	int dHasBomb, dHP, dArmor, dKillCtr, dDied;
	double dKDR;
	char sPlayerName[20], cHasBomb;
	struct terrorist *t;
	//every variable(object) of class terrorist has all of these


};//will use local variables later on
void printTerroristRef();
void printTerroristVal();

int main(){

struct terrorist player1, player2, player3, player[100];
printf("\n enter name of player 1: ");
scanf(" %s", player1.sPlayerName);
printf("\n does %s have a bomb? 1 - yes, 0 - no", player1.sPlayerName);
scanf(" %c", &player1.cHasBomb);
//assign the initial HP of player 1 to 100;
player1.dHP = 100;
printf("\n how many kills did %s already have", player1.sPlayerName);
scanf("%d", &player1.dKillCtr);
printf("How many times died?");
scanf("%d", &player1.dDied);
player1.dKDR= player1.dKillCtr/player1.dDied*1.0;



printf("\n enter name of player 2: ");
scanf(" %s", player2.sPlayerName);
printf("\n does %s have a bomb? 1 - yes, 0 - no", player2.sPlayerName);
scanf(" %c", &player2.cHasBomb);
//assign the initial HP of player 1 to 100;
player2.dHP = 100;
printf("\n how many kills did %s already have", player2.sPlayerName);
scanf("%d", &player2.dKillCtr);
printf("How many times died?");
scanf("%d", &player2.dDied);
player2.dKDR= player2.dKillCtr*1.0/player2.dDied;


player1.t = &player2;

//print them

printTerroristRef(&player1);//pass by reference

printTerroristRef(player1.t);//pass by value
return 0;
}//endmain

void printTerroristRef(struct terrorist *t){
printf("\nPlayer name: %s", t->sPlayerName);
printf("\nhas bomb: %c", t->cHasBomb);
printf("\nplayer HP: %d", t->dHP);
printf("\nplayer deaths: %d", t->dDied);
printf("\nplayer KDR: %.2f\n", t->dKDR);
}//endref
void printTerroristVal(struct terrorist t){
printf("\nPlayer name: %s", t.sPlayerName);
printf("\nhas bomb: %c", t.cHasBomb);
printf("\nplayer HP: %d", t.dHP);
printf("\nplayer deaths: %d", t.dDied);
printf("\nplayer KDR: %.2f\n", t.dKDR);
}//endval