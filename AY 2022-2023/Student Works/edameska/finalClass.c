//use struct and user defined functions pass by ref and pass by value
//cs 1.6
#include <stdio.h>
//structures that define CT and T

struct terrorist
{
	int dHP, dArmor,dKillCtr,dDied;
	double dKDR;//kill death ratio
	char sPlayerName[20],cHasBomb;//1 has bomb 0 doesnt
	struct terrorist *t;

};//will use local variables later on

//function prototypes here if functions are down
void printTerroristRef();
void printTerroristVal();

int main()
{
	//local var here
	struct terrorist player1,player2,player3,player[100];

	//user input
	//get player 1
	printf("\nEnter name of player 1:\n");
	scanf("%s",player1.sPlayerName);
	printf("Does %s have the bomb? 1-yes 0-no\n", player1.sPlayerName);
	scanf(" %c", &player1.cHasBomb);

	//asign the initial Hp of 1 to 100
	player1.dHP=100;
	getchar();
	printf("How many kills does %s have\n", player1.sPlayerName );
	scanf("%d", &player1.dKillCtr);
	getchar();
	printf("How many deaths does %s have\n", player1.sPlayerName );
	scanf("%d", &player1.dDied);

	//compute kdr
	player1.dKDR=player1.dKillCtr/player1.dDied;

	//user input
	//get player 1
	printf("\nEnter name of player 1:\n");
	scanf("%s",player2.sPlayerName);
	printf("Does %s have the bomb? 1-yes 0-no\n", player2.sPlayerName);
	scanf(" %c", &player2.cHasBomb);

	//asign the initial Hp of 2 to 100
	player2.dHP=100;
	getchar();
	printf("How many kills does %s have\n", player2.sPlayerName );
	scanf("%d", &player2.dKillCtr);
	getchar();
	printf("How many deaths does %s have\n", player2.sPlayerName );
	scanf("%d", &player2.dDied);

	//compute kdr
	player2.dKDR=player2.dKillCtr/player2.dDied;

	//connect player 1 to player 2
	player1.t=&player2;

	//print using foreign functuins
	printTerroristRef(&player1);
	printf("\n");
	printTerroristRef(player1.t);//already a pointer. points to player 2
	//printTerroristVal(player1);


	return 0;
}//end main

//funciton de fhere
void printTerroristRef(struct terrorist *t)
{
	printf("Player name %s\n", t->sPlayerName);
	printf("Has bomb %c\n", t->cHasBomb);
	printf("Player HP %d\n", t->dHP);
	printf("Player kills %d\n", t->dKillCtr);
	printf("Player died %d\n", t->dDied);
	printf("Player ratio %.2f\n", t->dKDR);//2 .
}//emd ref
void printTerroristVal(struct terrorist t){
	printf("Player name %s\n", t.sPlayerName);
	printf("Has bomb %c\n", t.cHasBomb);
	printf("Player HP %d\n", t.dHP);
	printf("Player kills %d\n", t.dKillCtr);
	printf("Player ndied %d\n", t.dDied);
	printf("Player ratio %.2f\n", t.dKDR);
}//end val
